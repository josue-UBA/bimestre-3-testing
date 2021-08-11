#include "src/proyecto.h"
#include "/var/lib/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"


void test_suma(void){

    int a = 2;

    int b = 1;

    UnityAssertEqualNumber((UNITY_INT)((a)), (UNITY_INT)((b)), (

   ((void *)0)

   ), (UNITY_UINT)(7), UNITY_DISPLAY_STYLE_INT);

}





void test_acelerador(void){



    init_registro();

    int num = acelerador(2, 3);



    UnityAssertEqualNumber((UNITY_INT)((5)), (UNITY_INT)((num)), (

   ((void *)0)

   ), (UNITY_UINT)(16), UNITY_DISPLAY_STYLE_INT);

}
