#include <stdio.h>

int cuadrado( int numero); // punto a

void tipovoid( int *numero); // punto b

void muestre(int *numero); //punto c

void invertir(int *ParametroA , int *parametroB); //punto d - f

void orden(int *Parametroa , int *parametrob); //punto e - f

int main() {
    int variable, parametroA , parametroB, parametroa , parametrob ;
    int numero;
    printf("Hello, world!\n");

    printf("Ingrese un numero: ");
    scanf("%d", &variable);
    printf("Numero ingresado: %d\n", variable);
    printf("---------------------\n");
    numero = cuadrado(variable);
    printf("El cuadrado del numero: %d\n", numero);
    printf("---------------------\n");
    tipovoid(&variable);
    printf("El cuadrado del numero-(void): %d\n", variable);
    printf("---------------------\n");
    muestre(&variable);
    printf("---------------------\n");

    printf("ingrese 2 valores\nPrimer valor: ");
    scanf("%d", &parametroA);
    printf("Sengundo valor: ");
    scanf("%d", &parametroB);
    printf("---------------------\n");

    invertir(&parametroA , &parametroB);
    printf("valor invertido del parametroA: %d\n", parametroA);
    printf("valor invertido del parametroB: %d\n", parametroB);
    printf("---------------------\n");
    printf("ingrese 2 valores\nPrimer valor: ");
    scanf("%d", &parametroa);
    printf("Sengundo valor: ");
    scanf("%d", &parametrob);
    printf("---------------------\n");
    orden( &parametroa ,  &parametrob);
    printf("orden1 (valor mas chicos): %d\n", parametroa);
    printf("orden2 (valor mas grande): %d\n", parametrob);
   
    return 0;
}

int cuadrado( int numero){

    return(numero * numero);

}

void tipovoid (int *numero){

    

     *numero*= *numero ;
      
}

void muestre(int *numero){

    printf("Direccion de la variable: %u\n", numero);
    printf("Contenido de la variable: %d\n", *numero);
}

void invertir(int *parametroA , int *parametroB){

    int aux;

    aux = *parametroA;
    *parametroA = *parametroB;
    *parametroB = aux;
    
}

void orden(int *parametroa , int *parametrob){


    if (*parametroa > *parametrob)
    {
        invertir( parametroa , parametrob);
    }
    

}