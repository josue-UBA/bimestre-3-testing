#include "unity.h"
#include "proyecto.h"
extern int pesos[];
extern int registro[];

/* corrobora el correcto funcionamiendo de la funcion acelerador_0 */
void test_acelerador_0(void)
{
    init_registro();
    registro[1] = 4;
    int num = acelerador_0(5);
    TEST_ASSERT_EQUAL_INT(9, num); /* 1 es el valor esperado */
}
/* corrobora el correcto funcionamiendo de la funcion acelerador_0 */
void test_acelerador_1(void)
{
    init_registro();
    registro[1] = 4;
    int num = acelerador_1(5);
    TEST_ASSERT_EQUAL_INT(1, num); /* 1 es el valor esperado */
}
/* corrobora el correcto funcionamiendo de la funcion acelerador_0 */
void test_acelerador_2(void)
{
    init_registro();
    registro[1] = 4;
    int num = acelerador_2(5);
    TEST_ASSERT_EQUAL_INT(20, num); /* 1 es el valor esperado */
}
/* validar si el registro fue inicializado correctamente */
void test_registro(void)
{
    init_registro();
    int aux[TAM_REG] = {0, 0, 0, 0};
    TEST_ASSERT_EQUAL_INT_ARRAY(aux, registro, TAM_REG);
}
/* valida si la funcion pone los pesos de manera correcta */
void test_poner_pesos(void)
{
    poner_pesos(4, 3, 8);
    int aux[TAM_PES] = {4, 3, 8};
    TEST_ASSERT_EQUAL_INT_ARRAY(aux, pesos, TAM_PES);
}

void test_sistema(void)
{
    init_registro();
    int valor = sistema(8);
    init_registro();
    set_tipo_acelerador(2);         /* acelerador tipo 2 */
    set_tipo_funcion_activacion(1); /* funcion de activacion tipo 1*/
    TEST_ASSERT_EQUAL_INT(20, 20); /* 1 es el valor esperado */

}
