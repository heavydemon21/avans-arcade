#include <stm32f0xx_hal.h>

#include "ppu/ppu.h"
#include "ppu/internals.h"
#include "stm32/setup.h"

void hh_ppu_init() {}
void hh_ppu_deinit() {}

void hh_ppu_vram_dwrite(uint8_t* data, size_t size) {
	HAL_SPI_Transmit(&hspi1, data, size, HAL_MAX_DELAY);
	HAL_SPI_Transmit(&hspi1, (uint8_t[4]){ 0xff }, 4, HAL_MAX_DELAY);
	// reset SPI
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, GPIO_PIN_RESET);
}

