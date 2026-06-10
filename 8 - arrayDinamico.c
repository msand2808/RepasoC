#include<stdio.h>
#include<stdlib.h>

/*Pide al usuario un n, crea un arreglo dinámico de n enteros, llénalo, imprímelo y libéralo.*/

int main(){
    
    int numero = 0; //numero que se va a rellenar

    printf("Escriba un numero positivo: ");
    if (!scanf("%d", &numero) || numero <= 0)
    {
        printf("Ocurrio un error!!\n");

        return -1;
    }


    int *arr = malloc(numero * sizeof(int));

    for (int i = 0; i < numero; i++)
    {
        int entrada = 0;
        
        printf("Agregue un numero a su arreglo: ");
        scanf("%d", &entrada);

        *(arr + i) = entrada;
        
    }
    
    printf("Su arreglo: \n");

    for (int i = 0; i < numero; i++)
    {
        printf("[%d], %d\n", i, *(arr + i));
    }
    


    free(arr);
    return 0;
    

}