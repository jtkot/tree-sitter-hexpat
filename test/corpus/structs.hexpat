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
				struct_name: (identifier)
				(token_lbrace)
				(maybe_type_field
					(type_field
						(type
							(type_identifier
								(identifier)))
						(specialised_field
							field_name: (identifier))
						(token_semi)))
				(maybe_type_field
					(type_field
						(type
							(type_identifier
								(identifier)))
						(specialised_field
							field_name: (identifier))
						(token_semi)))
				(token_rbrace))
			(token_semi))))

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
				struct_name: (identifier)
				(token_lbrace)
				(maybe_type_field
					(type_field
						(type
							(type_identifier
								(identifier)))
						(specialised_field
							field_name: (identifier)
							(type_suffix
								(token_lbracket)
								(expr
									(expr_leaf
										(number)))
								(token_rbracket)))
						(token_semi)))
				(token_rbrace))
			(token_semi))))

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
				struct_name: (identifier)
				(generic_decl
					(token_lgeneric)
					(generic_decl_param
						(identifier))
					(token_rgeneric))
				(token_lbrace)
				(maybe_type_field
					(type_field
						(type
							(type_identifier
								(identifier)))
						(specialised_field
							field_name: (identifier)
							(type_suffix
								(token_lbracket)
								(expr
									(expr_leaf
										(number)))
								(token_rbracket)))
						(token_semi)))
				(token_rbrace))
			(token_semi))))

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
				struct_name: (identifier)
				(generic_decl
					(token_lgeneric)
					(generic_decl_param
						(keyword_auto)
						(identifier))
					(token_rgeneric))
				(token_lbrace)
				(maybe_type_field
					(type_field
						(type
							(type_identifier
								(identifier)))
						(specialised_field
							field_name: (identifier)
							(type_suffix
								(token_lbracket)
								(expr
									(expr_leaf
										(identifier)))
								(token_rbracket)))
						(token_semi)))
				(token_rbrace))
			(token_semi))))

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
				struct_name: (identifier)
				(generic_decl
					(token_lgeneric)
					(generic_decl_param
						(identifier))
					(token_comma)
					(generic_decl_param
						(keyword_auto)
						(identifier))
					(token_rgeneric))
				(token_lbrace)
				(maybe_type_field
					(type_field
						(type
							(type_identifier
								(identifier)))
						(specialised_field
							field_name: (identifier)
							(type_suffix
								(token_lbracket)
								(expr
									(expr_leaf
										(identifier)))
								(token_rbracket)))
						(token_semi)))
				(token_rbrace))
			(token_semi))))

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
				struct_name: (identifier)
				(token_lbrace)
				(maybe_type_field
					(type_field
						(type
							(type_identifier
								(identifier)))
						(specialised_field
							field_name: (identifier))
						(token_comma)
						(specialised_field
							field_name: (identifier))
						(token_semi)))
				(token_rbrace))
			(token_semi))))

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
				struct_name: (identifier)
				(token_lbrace)
				(maybe_type_field
					(type_field
						(type
							(type_identifier
								(identifier)))
						(specialised_field
							field_name: (identifier))
						(token_semi)))
				(maybe_type_field
					(padding
						(keyword_padding)
						(token_lbracket)
						(expr
							(expr_leaf
								(number)))
						(token_rbracket)
						(token_semi)))
				(maybe_type_field
					(type_field
						(type
							(type_identifier
								(identifier)))
						(specialised_field
							field_name: (identifier))
						(token_semi)))
				(token_rbrace))
			(token_semi))))

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
				struct_name: (identifier)
				(token_lbrace)
				(maybe_type_field
					(type_field
						(type
							(type_identifier
								(identifier)))
						(specialised_field
							field_name: (identifier))
						(token_semi)))
				(maybe_type_field
					(type_field
						(type
							(type_identifier
								(identifier)))
						(specialised_field
							field_name: (identifier))
						(token_semi)))
				(maybe_type_field
					(type_field
						(type
							(type_identifier
								(identifier)))
						(specialised_field
							field_name: (identifier)
							(type_suffix
								(token_lbracket)
								(expr
									(mul
										(expr
											(mul
												(expr
													(expr_leaf
														(identifier)))
												operator: (token_mul)
												(expr
													(expr_leaf
														(identifier)))))
										operator: (token_mul)
										(expr
											(expr_leaf
												(number)))))
								(token_rbracket)))
						(token_semi)))
				(token_rbrace))
			(token_semi))))

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
				struct_name: (identifier)
				(token_lbrace)
				(maybe_type_field
					(type_field
						(type
							(type_identifier
								(identifier)))
						(specialised_field
							field_name: (identifier))
						(token_semi)))
				(maybe_type_field
					(type_field
						(type
							(type_identifier
								(identifier)))
						(specialised_field
							field_name: (identifier))
						(token_semi)))
				(maybe_type_field
					(type_field
						(type
							(type_identifier
								(identifier)))
						(specialised_field
							field_name: (identifier))
						(token_semi)))
				(maybe_type_field
					(type_field
						(type
							(type_identifier
								(identifier)))
						(specialised_field
							field_name: (identifier))
						(token_semi)))
				(token_rbrace))
			(token_semi)))
	(statement
		(type_def
			(struct_def
				(keyword_struct)
				struct_name: (identifier)
				(token_lbrace)
				(maybe_type_field
					(type_field
						(type
							(type_identifier
								(identifier)))
						(specialised_field
							field_name: (identifier))
						(token_semi)))
				(maybe_type_field
					(type_field
						(type
							(type_identifier
								(identifier)))
						(specialised_field
							field_name: (identifier))
						(token_semi)))
				(maybe_type_field
					(type_field
						(type
							(type_identifier
								(identifier)))
						(specialised_field
							field_name: (identifier)
							(type_suffix
								(token_lbracket)
								(expr
									(mul
										(expr
											(expr_leaf
												(identifier)))
										operator: (token_mul)
										(expr
											(expr_leaf
												(identifier)))))
								(token_rbracket)))
						(token_semi)))
				(token_rbrace))
			(token_semi))))

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
				struct_name: (identifier)
				(token_lbrace)
				(maybe_type_field
					(type_field
						(type
							(endianness)
							(type_identifier
								(identifier)))
						(specialised_field
							field_name: (identifier))
						(token_semi)))
				(maybe_type_field
					(type_field
						(type
							(endianness)
							(type_identifier
								(identifier)))
						(specialised_field
							field_name: (identifier))
						(token_semi)))
				(maybe_type_field
					(type_field
						(type
							(endianness)
							(type_identifier
								(identifier)))
						(specialised_field
							field_name: (identifier))
						(token_semi)))
				(maybe_type_field
					(type_field
						(type
							(type_identifier
								(identifier)))
						(specialised_field
							field_name: (identifier)
							(type_suffix
								(token_lbracket)
								(expr
									(expr_leaf
										(identifier)))
								(token_rbracket)))
						(token_semi)))
				(token_rbrace))
			(token_semi))))

