============
Basic Struct
============
struct Point {
	float x;
	float y;
};
---
(source_file
	(statement
		(type_def
			(struct_def
				(keyword_struct)
				(identifier)
				(maybe_type_field
					(type_field
						(type
							(type_identifier
								(identifier)))
						(specialised_field
							(identifier))))
				(maybe_type_field
					(type_field
						(type
							(type_identifier
								(identifier)))
						(specialised_field
									(identifier))))))))

============
Array Struct
============
struct Point10D {
	float values[10];
};
---
(source_file
	(statement
		(type_def
			(struct_def
				(keyword_struct)
				(identifier)
				(maybe_type_field
					(type_field
						(type
							(type_identifier
								(identifier)))
						(specialised_field
							(identifier)
							(type_suffix
								(expr
									(expr_leaf
										(number)))))))))))

================
Templated Struct
================
struct Array10<T> {
	T data[10];
};
---
(source_file
	(statement
		(type_def
			(struct_def
				(keyword_struct)
				(identifier)
				(generic_decl
					(generic_decl_param
						(identifier)))
				(maybe_type_field
					(type_field
						(type
							(type_identifier
								(identifier)))
						(specialised_field
							(identifier)
							(type_suffix
								(expr
									(expr_leaf
										(number)))))))))))

=============
Auto Template
=============
struct IntArray<auto n> {
	i32 data[n];
};
---
(source_file
	(statement
		(type_def
			(struct_def
				(keyword_struct)
				(identifier)
				(generic_decl
					(generic_decl_param
						(identifier)))
				(maybe_type_field
					(type_field
						(type
							(type_identifier
								(identifier)))
						(specialised_field
							(identifier)
							(type_suffix
								(expr
									(expr_leaf
										(identifier)))))))))))

=============
Generic Array
=============
struct Array<T, auto n> {
	T data[n];
};
---
(source_file
	(statement
		(type_def
			(struct_def
				(keyword_struct)
				(identifier)
				(generic_decl
					(generic_decl_param
						(identifier))
					(generic_decl_param
						(identifier)))
				(maybe_type_field
					(type_field
						(type
							(type_identifier
								(identifier)))
						(specialised_field
							(identifier)
							(type_suffix
								(expr
									(expr_leaf
										(identifier)))))))))))

========================
Multiple fields per type
========================
struct Point {
	float x, y;
};
---
(source_file
	(statement
		(type_def
			(struct_def
				(keyword_struct)
				(identifier)
				(maybe_type_field
					(type_field
						(type
							(type_identifier
								(identifier)))
						(specialised_field
							(identifier))
						(specialised_field
							(identifier))))))))

=============
Padded Struct
=============
struct Point {
	u8 x;
	padding[2];
	u8 y;
};
---
		(source_file
			(statement
				(type_def
					(struct_def
						(keyword_struct)
						(identifier)
						(maybe_type_field
							(type_field
								(type
									(type_identifier
										(identifier)))
								(specialised_field
									(identifier))))
						(maybe_type_field
							(padding
								(keyword_padding)
								(expr
									(expr_leaf
										(number)))))
						(maybe_type_field
							(type_field
								(type
									(type_identifier
										(identifier)))
								(specialised_field
									(identifier))))))))

=================
Expression Struct
=================
struct Image {
	u32 w;
	u32 h;
	u8 data[w * h * 4];
};
---
	(source_file
		(statement
			(type_def
				(struct_def
					(keyword_struct)
					(identifier)
					(maybe_type_field
						(type_field
							(type
								(type_identifier
									(identifier)))
							(specialised_field
								(identifier))))
					(maybe_type_field
						(type_field
							(type
								(type_identifier
									(identifier)))
							(specialised_field
								(identifier))))
					(maybe_type_field
						(type_field
							(type
								(type_identifier
									(identifier)))
							(specialised_field
								(identifier)
								(type_suffix
									(expr
										(mul
											(expr
												(mul
													(expr
														(expr_leaf
															(identifier)))
													(expr
														(expr_leaf
															(identifier)))))
											(expr
												(expr_leaf
													(number)))))))))))))

================
Multiple Structs
================
struct RGBA8 {
	u8 r;
	u8 g;
	u8 b;
	u8 a;
};

struct Image {
	u32 w;
	u32 h;
	RGBA8 pixels[w * h];
};
---
	(source_file
		(statement
			(type_def
				(struct_def
					(keyword_struct)
					(identifier)
					(maybe_type_field
						(type_field
							(type
								(type_identifier
									(identifier)))
							(specialised_field
								(identifier))))
					(maybe_type_field
						(type_field
							(type
								(type_identifier
									(identifier)))
							(specialised_field
								(identifier))))
					(maybe_type_field
						(type_field
							(type
								(type_identifier
									(identifier)))
							(specialised_field
								(identifier))))
					(maybe_type_field
						(type_field
							(type
								(type_identifier
									(identifier)))
							(specialised_field
								(identifier)))))))
		(statement
			(type_def
				(struct_def
					(keyword_struct)
					(identifier)
					(maybe_type_field
						(type_field
							(type
								(type_identifier
									(identifier)))
							(specialised_field
								(identifier))))
					(maybe_type_field
						(type_field
							(type
								(type_identifier
									(identifier)))
							(specialised_field
								(identifier))))
					(maybe_type_field
						(type_field
							(type
								(type_identifier
									(identifier)))
							(specialised_field
								(identifier)
								(type_suffix
									(expr
										(mul
											(expr
												(expr_leaf
													(identifier)))
											(expr
												(expr_leaf
													(identifier)))))))))))))

==============
Endian Structs
==============
struct SomeFile {
	be u32 version;
	le u32 compressed_size;
	le u32 decompressed_size;
	u8 data[compressed_size];
};
---
	(source_file
		(statement
			(type_def
				(struct_def
					(keyword_struct)
					(identifier)
					(maybe_type_field
						(type_field
							(type
								(endianness)
								(type_identifier
									(identifier)))
							(specialised_field
								(identifier))))
					(maybe_type_field
						(type_field
							(type
								(endianness)
								(type_identifier
									(identifier)))
							(specialised_field
								(identifier))))
					(maybe_type_field
						(type_field
							(type
								(endianness)
								(type_identifier
									(identifier)))
							(specialised_field
								(identifier))))
					(maybe_type_field
						(type_field
							(type
								(type_identifier
									(identifier)))
							(specialised_field
								(identifier)
								(type_suffix
									(expr
										(expr_leaf
											(identifier)))))))))))

