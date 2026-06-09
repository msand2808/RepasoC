#include<stdio.h>
#include<stdlib.h>


int main(){

    int arr[] = {10, 20, 30, 40, 50, 60}; //array de enteros

    int tamanio = sizeof(arr) / sizeof(int);

    for (int i = 0; i < tamanio; i++)
    {
        printf("%d:, %d\n", i, *(arr + i));
    }
    

}

