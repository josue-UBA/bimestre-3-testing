#include "proyecto.h"

int registro[TAM_REG] = {1, 1, 1, 1};
int pesos[3] = {0, 0, 0};
int suma(int a0, int a1)
{
    return a0 + a1;
}
void poner_pesos(int a0, int a1, int a2)
{
    pesos[0] = a0;
    pesos[1] = a1;
    pesos[2] = a2;
}
void init_registro(void)
{
    registro[0] = 0;
    registro[1] = 0;
    registro[2] = 0;
    registro[3] = 0;
}
/* dato: dato a trabajar */
int acelerador_0(int dato)
{
    /* registro[1] contiene el tipo de funcion */
    return dato + registro[1];
}
int acelerador_1(int dato)
{
    /* registro[1] contiene el tipo de funcion */
    return dato - registro[1];
}
int acelerador_2(int dato)
{
    /* registro[1] contiene el tipo de funcion */
    return dato * registro[1];
}
/*
==> registro[0]: contiene el tipo de acelerador. Puede ser:

- red neuronal convolucional
- red neuronal recurrente
- red neuronal radial

==> registro[1]: contiene el tipo de funcion sigmo

- funcion sigmoide
- funcion tangente
- fucion ReLU

==> registro[2]: por definir
==> registro[3]: por definir

*/
int sistema(int dato)
{
    if (registro[0] == 0)
    {
        return acelerador_0(dato); /* acelerador tipo 0 */
    }
    else if (registro[0] == 1)
    {
        return acelerador_1(dato); /* acelerador tipo 1 */
    }
    else if (registro[0] == 2)
    {
        return acelerador_2(dato); /* acelerador tipo 2 */
    }
    else
    {
        return -100; /* no debe llegar aqui */
    }
}

void set_tipo_acelerador(int tipo){
    registro[0]=tipo;
}
void set_tipo_funcion_activacion(int tipo){
    registro[1]=tipo;

}