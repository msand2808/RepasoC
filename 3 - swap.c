/**
 * Ejercicio 3 — Intercambiar con punteros
Escribí una función swap(int *a, int *b) que intercambie los valores de dos enteros. 
 */

 #include<stdio.h>
 #include<stdlib.h>

 void swap(int *a, int *b); //funcion para intercambiar datos

 int main(){
    int a = 2, b = 5; //variables a intercambiar

    printf("Antes del intercambio: a = %d, b = %d\n", a, b);

    swap(&a, &b);

    printf("Despues del intercambio: a = %d, b = %d\n", a, b);

 }

void swap(int *a, int *b){ // la funcion recibe como parametros las direcciones de memoria de las variables
    int c = *a; //variable temporal que guarda el valor de a

    *a = *b; //valor de puntero a, ahora es el valor del puntero b

    *b = c; //valor de puntero b, ahora es el valor de la variable temporal

}