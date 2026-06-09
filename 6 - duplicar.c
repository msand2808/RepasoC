#include<stdio.h>
#include<stdlib.h>

/*Escribe void duplicar(int *n) que duplique el valor recibido. */

void duplicar(int *n);

int main(){

    int numero = 5;

    printf("Valor actual: %d\n", numero);

    duplicar(&numero);

    printf("Valor duplicado: %d\n", numero);

}

void duplicar(int *n){
    *n = 2* (*n);

}