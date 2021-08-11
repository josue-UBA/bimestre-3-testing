#include "unity.h"
#include "proyecto.h"
extern int pesos[];
extern int registro[];


void test_acelerador(void){

    init_registro();
    int num = acelerador(2, 3); 

    TEST_ASSERT_EQUAL_INT(5,num);
}
/* validar si el registro fue inicializado correctamente */
void test_registro(void){
    init_registro();
    int aux[TAM_REG]={0,0,0,0};
    TEST_ASSERT_EQUAL_INT_ARRAY(aux,registro,TAM_REG);
}