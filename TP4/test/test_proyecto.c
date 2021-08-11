#include "unity.h"
#include "proyecto.h"
extern int pesos[];
extern int registro[];

/* corrobora el correcto funcionamiendo de la funcion acelerador */
void test_acelerador(void){
    init_registro();
    int num = acelerador(2, 3); 
    TEST_ASSERT_EQUAL_INT(5,num); /* 5 es el valor esperado */
}
/* validar si el registro fue inicializado correctamente */
void test_registro(void){
    init_registro();
    int aux[TAM_REG]={0,0,0,0};
    TEST_ASSERT_EQUAL_INT_ARRAY(aux,registro,TAM_REG);
}
/* valida si la funcion pone los pesos de manera correcta */
void test_poner_pesos(void){
    poner_pesos(4,3,8);
    int aux[TAM_PES]={4,3,8};
    TEST_ASSERT_EQUAL_INT_ARRAY(aux,pesos,TAM_PES);
}