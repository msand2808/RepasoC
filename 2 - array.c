/**
 * Ejercicio 2 — Puntero a char
Declara un array de caracteres "hola". 
Declara un puntero a char que apunte al inicio. 
Usando solo el puntero (sin índices), imprimí cada carácter en una línea distinta. 
Luego usá el mismo puntero para contar cuántos caracteres tiene la cadena (sin usar strlen).
 */
#include<stdio.h>
#include<stdlib.h>

int main(){
    char arr[] = "Hola"; //declaracion de arreglo

    char *p = arr; //arreglo que apunta al inicio del arreglo

    int tamanio = 0; //variable para obtener tamanio de el arreglo

    //while para sacar el tamanio, y para imprimir caracter por caracter
    while(*p != '\0'){
        printf("%c\n", *p);
        tamanio++;
        p++;
    }

    printf("Tamanio de arreglo: %d\n", tamanio); //impresion de tamanio de arreglo

}