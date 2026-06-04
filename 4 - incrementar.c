/**
 * Ejercicio 4 — Pasar por referencia
Escribí una función incrementar(int *n, int cantidad) 
que sume cantidad al entero apuntado. 
Luego escribí otra versión que reciba el entero por valor y 
comprobá que esa versión NO modifica el original.
 */
#include<stdio.h>
#include<stdlib.h>

void incrementarReferencia(int *n, int cantidad); //funcion para incrementar valor por referencia
void incrementarValor(int n, int cantidad); //funcion para "incrementar" valor

int main(){
    int n = 5, cantidad = 2; //datos

    printf("Valor actual: %d\n", n);

    incrementarValor(n, cantidad); //"incrementando" valor

    printf("Valor nuevo (por valor): %d\n", n);

    incrementarReferencia(&n, cantidad); //incrementando por referencia

    printf("Valor nuevo (por referencia): %d\n", n);


}

void incrementarReferencia(int *n, int cantidad){
    *n = *n + cantidad; //al valor de la direccion, se le asigna, el valor anterior + cantidad
}

void incrementarValor(int n, int cantidad){
    n = n + cantidad; //al valor de la variable, se le suma la cantidad, pero esto se queda en esta funcion
}