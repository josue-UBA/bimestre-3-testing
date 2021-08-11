#include "proyecto.h"


int registro[TAM_REG]={1,1,1,1};
int pesos[3]={0,0,0};
int suma(int a0, int a1){
    return a0 + a1;
}
void poner_pesos(int a0, int a1, int a2){
    pesos[0]=a0;
    pesos[1]=a1;
    pesos[2]=a2;
}
void init_registro(void){
    registro[0]=0;
    registro[1]=0;
    registro[2]=0;
    registro[3]=0;
}

int acelerador(int a0, int a1){
    return a0+a1;
}

void sistema(){
    
}