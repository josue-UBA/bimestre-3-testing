#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>

uint16_t led_to_bit(uint8_t led);

void LedsInit(uint16_t * puntero);

void LedsTurnOn(uint8_t led);

void LedsTurnOff(uint8_t led);

void LedTurnOnAll(void);

void LedTurnOffAll(void);

bool Led_State(uint8_t led);