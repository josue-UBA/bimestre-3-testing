
#ifndef PROYECTO_H
#define PROYECTO_H

#define TAM_REG 4
#define TAM_PES 3

int suma(int a0, int a1);
void init_registro(void);
int acelerador_0(int dato);
int acelerador_1(int dato);
int acelerador_2(int dato);
int sistema(int dato);
void poner_pesos(int a0, int a1, int a2);

void set_tipo_acelerador(int tipo);
void set_tipo_funcion_activacion(int tipo);

#endif