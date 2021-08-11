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
/* 
a1: dato a trabajar */
int acelerador(int a1)
{
    if (registro[0] == 0)
    {
        return a1 + registro[1]; /* calculo tipo 1 */
    }
    else if (registro[0] == 1)
    {
        return a1 - 2; /* calculo tipo 1 */
    }
    else if (registro[0] == 2)
    {
        return a1 * 2; /* calculo tipo 1 */
    }
    else
    {
        return -100; /* no debe llegar aqui */
    }
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
void sistema()
{
    init_registro();
    registro[0] = 1; /* acelerador tipo 1 */
    acelerador(3);    /* a0: tipo de acelerador || a1: dato a trabajar */
}