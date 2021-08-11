#include "src/leds.h"
#include "/var/lib/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"






uint16_t puerto;



void setUp(void)

{

    LedsInit(&puerto);

}



void tearDown(void)

{



}





void test_LedsOffAfterCreate(void)

{

    puerto = 0xFFFF;

    LedsInit(&puerto);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((0x0000)), (UNITY_INT)(UNITY_INT16)((puerto)), (

   ((void *)0)

   ), (UNITY_UINT)(36), UNITY_DISPLAY_STYLE_HEX16);

}





void test_prender_un_led(void)

{

    LedsInit(&puerto);

    LedsTurnOn(5);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((1<<(5 -1))), (UNITY_INT)(UNITY_INT16)((puerto)), (

   ((void *)0)

   ), (UNITY_UINT)(44), UNITY_DISPLAY_STYLE_HEX16);

}





void test_apaga_un_led(void)

{

    LedsInit(&puerto);

    LedsTurnOn(5);

    LedsTurnOff(5);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((0x0000)), (UNITY_INT)(UNITY_INT16)((puerto)), (

   ((void *)0)

   ), (UNITY_UINT)(53), UNITY_DISPLAY_STYLE_HEX16);

}





void test_prende_y_apaga_varios_leds(void)

{

    LedsTurnOn(3);

    LedsTurnOn(5);

    LedsTurnOff(3);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((1 << (5 -1))), (UNITY_INT)(UNITY_INT16)((puerto)), (

   ((void *)0)

   ), (UNITY_UINT)(62), UNITY_DISPLAY_STYLE_HEX16);

}





void test_prende_todos_leds(void)

{

    LedTurnOnAll();

    UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((0xFFFF)), (UNITY_INT)(UNITY_INT16)((puerto)), (

   ((void *)0)

   ), (UNITY_UINT)(69), UNITY_DISPLAY_STYLE_HEX16);

}





void test_apaga_todos_leds(void)

{

    LedTurnOnAll();

    LedTurnOffAll();

    UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((0x0000)), (UNITY_INT)(UNITY_INT16)((puerto)), (

   ((void *)0)

   ), (UNITY_UINT)(77), UNITY_DISPLAY_STYLE_HEX16);

}





void test_estado_led_apagado(void)

{

    LedsTurnOn(5);

    LedsTurnOff(5);

    do {if (!(Led_State(5))) {} else {UnityFail( ((("LED ON "))), (UNITY_UINT)((UNITY_UINT)(85)));}} while(0);

}





void test_estado_led(void)

{

    LedsTurnOn(5);

    do {if ((Led_State(5))) {} else {UnityFail( ((("LED OFF "))), (UNITY_UINT)((UNITY_UINT)(92)));}} while(0);

}





void test_limites_led(void){

    LedTurnOffAll();

    LedsTurnOn(5);

    LedsTurnOn(6);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((0x0030)), (UNITY_INT)(UNITY_INT16)((puerto)), (

   ((void *)0)

   ), (UNITY_UINT)(100), UNITY_DISPLAY_STYLE_HEX16);

}
