#include<stdio.h>
#include<stdlib.h>

/*Declara int **pp que apunte a un puntero que apunte a un entero. Modifica el entero usando **pp.*/


int main(){
    int numero = 2;
    int *p = &numero;
    int **pp = &p;

    printf("Su numero: %d\n", **pp);
}