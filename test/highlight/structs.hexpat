// ============
// Basic Struct
// ============
// ^ comment
struct Point {
// ^ keyword
//     ^ type
//           ^ token
      float x;
//    ^ type
//          ^ member
//           ^ delimiter
      float y;
};

// ============
// Array Struct
// ============
struct Point10D {
      float values[10];
      // ^ type
      //    ^ member
      //          ^ token
      //           ^ number
};

// ================
// Templated Struct
// ================
struct Array10<T> {
//            ^ token
//             ^ type
      T data[10];
};

// =============
// Auto Template
// =============
struct IntArray<auto n> {
//              ^ keyword
//                   ^ variable
      i32 data[n];
};

// =============
// Generic Array
// =============
struct Array<T, auto n> {
//           ^ type
//            ^ delimiter
//              ^ keyword
//                   ^ variable
      T data[n];
};

// ========================
// Multiple fields per type
// ========================
struct Point {
      float x, y;
//    ^ type
//          ^ member
//           ^ delimiter
//             ^ member
};

// =============
// Padded Struct
// =============
struct Point {
      u8 x;
      padding[2];
//    ^ keyword
      u8 y;
};

// =================
// Expression Struct
// =================
struct Image {
      u32 w;
      u32 h;
      /*
      -     data has bytes that look like this
            u8 R;
            u8 G;
            u8 B;
            u8 A;
      */
//    ^ comment
// TODO: for some reason tree-sitter test doesn't think that the comments inside this are comments even though highlight highlights them as such
      u8 data[w * h * 4];
//            ^ variable
//              ^ operator
//                ^ variable
//                  ^ operator
//                    ^ number
};

// ==============
// Endian Structs
// ==============
struct SomeFile {
      be u32 version;
//    ^ keyword
//       ^ type
      le u32 compressed_size;
//    ^ keyword
//       ^ type
      le u32 decompressed_size;
//    ^ keyword
//       ^ type
      u8 data[compressed_size];
};

