#pragma once
#include "engine/draw_screen.h"
#include "engine/bullet.h"
#include "engine/player_controller.h"
#include "engine/sprite_controller.h"
#include "game_loop/starting_screen.h"
#include "engine/level_const.h"
#include "engine/animator.h"
#include "engine/enemy.h"
#include "game_loop/shop.h"

typedef enum {
	hh_e_setup_screen,
	hh_e_play_level,
	hh_e_level_complete,
	hh_e_game_over,
}hh_e_gameplay;

/** @brief resets all the levels the first condition */
void hh_reset_levels(hh_entity* player, hh_g_all_levels* game);
/** @brief game loop function to handle the gameplay*/
void hh_gameplay(hh_g_all_levels* game, hh_e_game_state* hh_game_state, hh_e_upgrades upg, int** points);
/** @brief renders all the entities*/
void hh_render_all_entities(hh_entity* player, hh_entity* bullets, hh_entity* enemies, hh_entity* boss, int bullet_size, int enemy_size, vec_cor cam_pos);

void hh_upgrade_handler(hh_entity* player, hh_e_upgrades upg);

int hh_point_counter(hh_g_all_levels game);
