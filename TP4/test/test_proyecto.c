#include "unity.h"
#include "proyecto.h"

void test_suma(void){
    int a = 2;
    int b = 1;
    TEST_ASSERT_EQUAL_INT(a,b);
}


void test_acelerador(void){

    init_registro();
    int num = acelerador(2, 3); 

    TEST_ASSERT_EQUAL_INT(5,num);
}