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
