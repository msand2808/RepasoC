/**
 * Ejercicio 1 — Declarar y desreferenciar
Declara una variable entera con valor 42. 
Declara un puntero que apunte a ella. Imprime: 
(a) el valor directo, 
(b) el valor vía puntero, 
(c) la dirección de la variable, 
(d) el valor del puntero (que también es una dirección). 
Luego cambia el valor a 100 usando solo el puntero y vuelve a imprimir la variable.
 */

 #include<stdio.h>
 #include<stdlib.h>

 int main(){
    int var = 42;
    int *p1 = &var;
    printf("Valor: %d\n", var);
    printf("Valor (puntero): %d\n", *p1);
    printf("Direccion variable: %p\n", &var);
    printf("Valor del puntero: %p\n", p1);

    *p1 = 100;

    printf("Valor: %d\n", var);

 }