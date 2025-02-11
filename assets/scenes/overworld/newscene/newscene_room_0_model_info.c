#include "newscene_scene.h"


RoomShapeNormal newscene_room_0_shapeHeader = {
    ROOM_SHAPE_TYPE_NORMAL,
    ARRAY_COUNT(newscene_room_0_shapeDListsEntry),
    newscene_room_0_shapeDListsEntry,
    newscene_room_0_shapeDListsEntry + ARRAY_COUNT(newscene_room_0_shapeDListsEntry)
};

RoomShapeDListsEntry newscene_room_0_shapeDListsEntry[1] = {
    { newscene_room_0_shapeHeader_entry_0_opaque, NULL }
};

