#include<stdio.h>
#include<stdlib.h>

/*Creando una lista enlazada*/

typedef struct Nodo {
    int valor;
    struct Nodo *siguiente;
}Nodo;

Nodo *inicio = NULL;

void nuevoNodo(int valor){
    if (inicio == NULL)
    {
        // printf("Esta vacio!!\n");

        inicio = malloc(sizeof(Nodo));

        inicio->valor = valor;
        inicio->siguiente = NULL;

        return ;
    }

    Nodo *aux = inicio;
    Nodo *nuevo = malloc(sizeof(Nodo));

    nuevo->valor = valor;
    nuevo->siguiente = NULL;

    while(aux->siguiente != NULL){
        aux = aux->siguiente;
    }

    aux->siguiente = nuevo;


     return;
    
}

void imprimir(){
    Nodo *aux = inicio;
    while (aux != NULL)
    {
        printf("Valor: %d\n", aux->valor);
        aux = aux->siguiente;
    }
    
}

void eliminar(int valor){
    
    if (inicio->valor == valor)
    {
        Nodo *temp = inicio;
        inicio = inicio->siguiente;

        free(temp);
        return;
    }

    Nodo *aux = inicio->siguiente;
    Nodo *anterior = inicio;

    while (aux != NULL && aux->valor!=valor)
    {
        anterior = aux;
        aux = aux->siguiente;
        
    }

    if (aux==NULL)
    {
        printf("Valor no encontrado\n");
        return;
    }
    

    anterior->siguiente = aux->siguiente;
    
    free(aux);
}

int main(){

    printf("hola\n");
    nuevoNodo(1);
    nuevoNodo(2);
    nuevoNodo(3);
    nuevoNodo(4);

    imprimir();
    printf("hola\n");

    //eliminar(4);
    eliminar(5);
    imprimir();

    free(inicio);
}