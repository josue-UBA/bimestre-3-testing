/*
* TP3 Josue Huaman
Determinar si un led esta prendido
Determinar si un led esta apagado
Prendo todos los leds en una operacion
Apago todos los leds en una operacion
Ver si los indices corresponden con los leds
Secuencia del primero al ultimo
Valores de borde para los paramentros
Verificar que funciona con logica positiva
Valores invalidos para los parametros
*/

#include "unity.h"
#include "leds.h"

#define LED 5

uint16_t puerto;

void setUp(void) 
{
    LedsInit(&puerto);
}

void tearDown(void)
{

}

// Después de la inicialización 
void test_LedsOffAfterCreate(void) 
{
    puerto = 0xFFFF;
    LedsInit(&puerto);
    TEST_ASSERT_EQUAL_HEX16(0x0000, puerto);
}

// Encender Leds forma individual
void test_prender_un_led(void) 
{
    LedsInit(&puerto);
    LedsTurnOn(LED);
    TEST_ASSERT_EQUAL_HEX16(1<<(LED-1), puerto);
}

// Se puede apagar un LED individual
void test_apaga_un_led(void)
{
    LedsInit(&puerto);
    LedsTurnOn(LED);
    LedsTurnOff(LED);
    TEST_ASSERT_EQUAL_HEX16(0x0000, puerto);
}

// prende y apaga varios leds
void test_prende_y_apaga_varios_leds(void)
{
    LedsTurnOn(3);
    LedsTurnOn(LED);
    LedsTurnOff(3);
    TEST_ASSERT_EQUAL_HEX16(1 << (LED-1), puerto);
}

// Prendo todos los leds en una operacion
void test_prende_todos_leds(void)
{
    LedTurnOnAll();
    TEST_ASSERT_EQUAL_HEX16(0xFFFF, puerto);
}

// Apago todos los leds en una operacion
void test_apaga_todos_leds(void)
{
    LedTurnOnAll();
    LedTurnOffAll();
    TEST_ASSERT_EQUAL_HEX16(0x0000, puerto);
}

// Determinar si un led esta apagado
void test_estado_led_apagado(void)
{
    LedsTurnOn(LED);
    LedsTurnOff(LED);
    TEST_ASSERT_FALSE_MESSAGE(LedIsOn(LED), "LED ON ");
}

// Verificar que funciona con logica positiva
void test_estado_led(void)
{
    LedsTurnOn(LED);
    TEST_ASSERT_TRUE_MESSAGE(LedIsOn(LED), "LED OFF ");
}

// Valores invalidos para los parametros
void test_limites_led(void){ 
    LedTurnOffAll();
    LedsTurnOn(LED);
    LedsTurnOn(6);
    TEST_ASSERT_EQUAL_HEX16(0x0030,puerto);
}





