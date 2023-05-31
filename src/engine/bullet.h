#pragma once
#include "player_controller.h"
#include "engine/sprite_controller.h"
#include "types.h"
#include "input.h"

#define hh_bullet_travel_distance 200
hh_entity* hh_init_bullets(int size);

/** @brief checks if player hit button and sets the activate bullet*/
void hh_shoot_bullet(hh_entity player, hh_entity* bullet);

/** @brief updates single bullet position*/
void hh_update_bullet(hh_entity* );

/** @brief calculates all the bullets positions and which to shoot */
void hh_multiple_bullets(hh_entity player, hh_entity* bullets);

void hh_bullet_death(hh_entity* bullet);
