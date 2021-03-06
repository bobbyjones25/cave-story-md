#ifndef INC_CAMERA_H_
#define INC_CAMERA_H_

#include "common.h"
#include "entity.h"

// Pre calculated camera bounds values to speed up entity_on_screen()
s32 camera_xmin, camera_ymin;
u32 camera_xsize, camera_ysize;

struct {
	s32 x, y; // Fixed point units
	Entity *target; // Player, boss, NPC, or NULL
	// Offset is the point relative to the target's position
	// that the camera tries to center on
	s16 x_offset, y_offset;
} camera;

// Initialize the camera with default values (upper left, no target)
void camera_init();
// Center camera directly on a specific point
// This does not redraw the tilemap, call stage_draw_screen() manually after
void camera_set_position(s32 x, s32 y);
// Shake camera for a specified number of frames
void camera_shake(u16 time);
// Per frame update for camera, moves toward the target entity and scrolls the tilemap
void camera_update();

#endif /* INC_CAMERA_H_ */
