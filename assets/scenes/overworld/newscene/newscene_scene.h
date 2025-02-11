#ifndef NEWSCENE_SCENE_H
#define NEWSCENE_SCENE_H

#include "ultra64.h"
#include "macros.h"
#include "z64.h"


extern SceneCmd newscene_scene_header00[];
extern RomFile newscene_scene_roomList[];
extern u8 _newscene_room_0SegmentRomStart[];
extern u8 _newscene_room_0SegmentRomEnd[];
extern ActorEntry newscene_scene_header00_playerEntryList[];
extern Spawn newscene_scene_header00_entranceList[];
extern u16 newscene_scene_header00_exitList[1];
extern EnvLightSettings newscene_scene_header00_lightSettings[4];
extern CollisionHeader newscene_scene_collisionHeader;
extern BgCamInfo newscene_scene_bgCamInfo[];
extern SurfaceType newscene_scene_polygonTypes[2];
extern Vec3s newscene_scene_vertices[8];
extern CollisionPoly newscene_scene_polygons[8];
extern SceneCmd newscene_room_0_header00[];
extern Gfx newscene_room_0_shapeHeader_entry_0_opaque[];
extern u64 newscene_room_0_dl_spot00_sceneTex_01AB98_rgba16_ci8[];
extern u64 newscene_room_0_dl_spot00_sceneTex_01AB98_rgba16_pal_rgba16[];
extern Vtx newscene_room_0_dl_Render_mesh_layer_Opaque_vtx_cull[8];
extern Vtx newscene_room_0_dl_Render_mesh_layer_Opaque_vtx_0[14];
extern Gfx newscene_room_0_dl_Render_mesh_layer_Opaque_tri_0[];
extern Vtx newscene_room_0_dl_Render_mesh_layer_Opaque_vtx_1[4];
extern Gfx newscene_room_0_dl_Render_mesh_layer_Opaque_tri_1[];
extern Gfx mat_newscene_room_0_dl_floor_mat_layerOpaque[];
extern Gfx mat_newscene_room_0_dl_f3dlite_material_layerOpaque[];
extern Gfx newscene_room_0_dl_Render_mesh_layer_Opaque[];
extern RoomShapeNormal newscene_room_0_shapeHeader;
extern RoomShapeDListsEntry newscene_room_0_shapeDListsEntry[1];

#endif
