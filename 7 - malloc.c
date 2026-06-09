#include<stdio.h>
#include<stdlib.h>

/*Reserva memoria para un entero con malloc, guarda un valor ingresado por el usuario, imprímelo y libera la memoria. */

int main(){
    int *numero = malloc(sizeof(int));

    printf("Ingrese un valor: \n");

    if (!scanf("%d", numero))
    {
        printf("Ocurrio un error!!\n");
        free(numero);
        return -1;
    }
    
    printf("El numero es: %d\n", *numero);

    free(numero);
    
    return 0;
}