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
   //variable cualquiera
    int var = 42;
    int *p1 = &var; //puntero, direcciona la memoria de la variable
    printf("Valor: %d\n", var); //valor de variable
    printf("Valor (puntero): %d\n", *p1); // valor de lo que direcciona el puntero
    printf("Direccion variable: %p\n", &var); //direccion de la variable
    printf("Valor del puntero: %p\n", p1); //valor del puntero

    *p1 = 100; //cambiando dato de variable mediante puntero

    printf("Valor: %d\n", var); //nuevo valor

 }