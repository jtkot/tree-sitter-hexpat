struct FastLZFile {
    le u32 compressed_size;
    u8 data[compressed_size];
};
// Common serialization types
struct NoitaVector<T> {
    be u32 length;
    T values[length];
};
using NoitaString = NoitaVector<char>;

// world_pixel_scenes.bin
struct ColorMaterial {
    be u32 color;
    be u32 cell_type;
};
struct PixelScene {
    be s32 x;
    be s32 y;
    NoitaString materials;
    NoitaString visual;
    NoitaString background;
    bool skip_biome_checks;
    bool skip_edge_textures;
    be s32 background_z_index;
    NoitaString just_load_an_entity;
    bool clean_area_before;
    bool DEBUG_RELOAD_ME;
    NoitaVector<ColorMaterial> color_materials;
};
struct Image {
    NoitaString filename;
    be u32 x;
    be u32 y;
};
struct world_pixel_scenes {
    be u32 version; // 3
    be u32 magic_num; // 0x02f0aa9f
    NoitaVector<PixelScene> pending_list;
    NoitaVector<PixelScene> placed_list;
    NoitaVector<Image> background_images;
};

struct FastLZFile {
    le u32 compressed_size;
    u8 data[compressed_size];
};
struct NoitaVector<T> {
    be u32 length;
    T values[length];
};
using NoitaString = NoitaVector<char>;

// .stream_info
struct PixelSceneBackground {
    float x;
    float y;
    NoitaString path;
    float z_index;
    float x_offset;
    float y_offset;
};
struct Chunk {
    be u32 x;
    be u32 y;
    bool loaded;
};
struct stream_info {
    be u32 version; // 24
    be u32 world_seed;
    be u32 frame_counter; // Used for in-game timers!
    float seconds_played; // Not this one
    padding[8]; // unknown use
    NoitaVector<PixelSceneBackground> backgrounds;
    be u32 chunk_count;
    NoitaString version_hash;
    be u32 gamemode_num;
    NoitaString gamemode_name;
    be u64 gamemode_steamid;
    bool mods_active_this_run;
    // Save timestamp, local timezone
    be u16 year, month, day, hour, minute, second;
    NoitaString gamemode_ui_name;
    be u32 camera_num1, camera_num2, camera_num3, camera_num4;
    Chunk chunks[chunk_count];
};

// *.png_petri
bitfield Material {
    material_index : 7;
    has_custom_color : 1;
};
struct PhysicsObject {
    // Most fields are unknown purpose
    be u64 id;
    padding[4]; // u32
    be float x, y;
    be float rot_radians;
    padding[40]; // double
    padding[5]; // bool
    padding[4]; // float
    be u32 w;
    be u32 h;
    u32 colors[w * h];
};
struct PhysicsJoint {
    // Very tentative contents
    be u64 id_1;
    padding[4]; // u32
    be u64 id_2;
    padding[95];
};
struct png_petri {
    be u32 version; //24
    be u32 w, h; //512x512
    Material materials[w*h];
    NoitaVector<NoitaString> material_names;
    NoitaVector<u32> custom_colors;
    NoitaVector<PhysicsObject> box2ds;
    NoitaVector<PhysicsJoint> joints;
};