#include "newscene_scene.h"


/**
 * Header Child Day (Default)
*/
SceneCmd newscene_room_0_header00[] = {
    SCENE_CMD_ROOM_SHAPE(&newscene_room_0_shapeHeader),
    SCENE_CMD_ECHO_SETTINGS(0x00),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x09, true, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(5, 0, 0),
    SCENE_CMD_END(),
};

