#include "leds.h"

#define ALL_LEDS_OFF    0x0000
#define LEDS_STATE_ON          1
#define LED_OFF         0
#define LED_INDEX_OFFSET      1
#define LED_MIN         0
#define LED_MAX         16
#define ERROR           0

static uint16_t * puerto;

uint16_t LedsIndexToMask(uint8_t led)
{
    return (LEDS_STATE_ON << (led - LED_INDEX_OFFSET));
}

void LedsInit(uint16_t * puntero)
{
    puerto = puntero;
    LedTurnOffAll();
}

void LedsTurnOn(uint8_t led)
{
    *puerto |= LedsIndexToMask(led);
}

void LedsTurnOff(uint8_t led)
{
    *puerto &= ~LedsIndexToMask(led);
}

void LedTurnOnAll(void)
{
    *puerto = ~ALL_LEDS_OFF;
}

void LedTurnOffAll(void)
{
    *puerto = ALL_LEDS_OFF;
}

bool Led_State(uint8_t led)
{
    return (*puerto & LedsIndexToMask(led)) != LED_OFF;
}

