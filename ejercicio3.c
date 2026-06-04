/**
 * Ejercicio 3 — Intercambiar con punteros
Escribí una función swap(int *a, int *b) que intercambie los valores de dos enteros. 
 */

 #include<stdio.h>
 #include<stdlib.h>

 void swap(int *a, int *b);

 int main(){
    int a = 2, b = 5;

    printf("Antes del intercambio: a = %d, b = %d\n", a, b);

    swap(&a, &b);

    printf("Despues del intercambio: a = %d, b = %d\n", a, b);

 }

void swap(int *a, int *b){
    int c = *a;

    *a = *b;

    *b = c;

}