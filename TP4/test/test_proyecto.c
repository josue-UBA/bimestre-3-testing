#include "unity.h"
#include "proyecto.h"
extern int pesos[];
extern int registro[];
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

void test_registro(void){
    int aux[4]={0,0,0,0};
    TEST_ASSERT_EQUAL_INT_ARRAY(aux,registro,4);
}