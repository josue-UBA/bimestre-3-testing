#include "src/proyecto.h"
#include "/var/lib/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"
extern int pesos[];

extern int registro[];





void test_acelerador_0(void)

{

    init_registro();

    registro[1] = 4;

    int num = acelerador_0(5);

    UnityAssertEqualNumber((UNITY_INT)((9)), (UNITY_INT)((num)), (

   ((void *)0)

   ), (UNITY_UINT)(12), UNITY_DISPLAY_STYLE_INT);

}



void test_acelerador_1(void)

{

    init_registro();

    registro[1] = 4;

    int num = acelerador_1(5);

    UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((num)), (

   ((void *)0)

   ), (UNITY_UINT)(20), UNITY_DISPLAY_STYLE_INT);

}



void test_acelerador_2(void)

{

    init_registro();

    registro[1] = 4;

    int num = acelerador_2(5);

    UnityAssertEqualNumber((UNITY_INT)((20)), (UNITY_INT)((num)), (

   ((void *)0)

   ), (UNITY_UINT)(28), UNITY_DISPLAY_STYLE_INT);

}



void test_registro(void)

{

    init_registro();

    int aux[4] = {0, 0, 0, 0};

    UnityAssertEqualIntArray(( const void*)((aux)), ( const void*)((registro)), (UNITY_UINT32)((4)), (

   ((void *)0)

   ), (UNITY_UINT)(35), UNITY_DISPLAY_STYLE_INT, UNITY_ARRAY_TO_ARRAY);

}



void test_poner_pesos(void)

{

    poner_pesos(4, 3, 8);

    int aux[3] = {4, 3, 8};

    UnityAssertEqualIntArray(( const void*)((aux)), ( const void*)((pesos)), (UNITY_UINT32)((3)), (

   ((void *)0)

   ), (UNITY_UINT)(42), UNITY_DISPLAY_STYLE_INT, UNITY_ARRAY_TO_ARRAY);

}



void test_sistema(void)

{

    init_registro();

    int valor = sistema(8);

    init_registro();

    set_tipo_acelerador(2);

    set_tipo_funcion_activacion(1);

    UnityAssertEqualNumber((UNITY_INT)((20)), (UNITY_INT)((20)), (

   ((void *)0)

   ), (UNITY_UINT)(52), UNITY_DISPLAY_STYLE_INT);



}
