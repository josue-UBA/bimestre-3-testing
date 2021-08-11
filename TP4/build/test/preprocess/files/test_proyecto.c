#include "src/proyecto.h"
#include "/var/lib/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"
extern int pesos[];

extern int registro[];





void test_acelerador(void){



    init_registro();

    int num = acelerador(2, 3);



    UnityAssertEqualNumber((UNITY_INT)((5)), (UNITY_INT)((num)), (

   ((void *)0)

   ), (UNITY_UINT)(12), UNITY_DISPLAY_STYLE_INT);

}



void test_registro(void){

    init_registro();

    int aux[4]={0,0,0,0};

    UnityAssertEqualIntArray(( const void*)((aux)), ( const void*)((registro)), (UNITY_UINT32)((4)), (

   ((void *)0)

   ), (UNITY_UINT)(18), UNITY_DISPLAY_STYLE_INT, UNITY_ARRAY_TO_ARRAY);

}
