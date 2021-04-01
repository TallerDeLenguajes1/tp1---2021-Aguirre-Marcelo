#include <stdio.h>

int cuadrado( int numero); // punto a

void tipovoid( int numero); // punto b

void muestre(int numero); //punto c

void invertir(int ParametroA , int parametroB); //punto d - f

void orden(int ParametroA , int parametroB); //punto e - f

int main() {
    int variable, parametroA , parametroB ;
    int numero;
    printf("Hello, world!\n");

    printf("Ingrese un numero: ");
    scanf("%d", &variable);
    numero = cuadrado(variable);


    printf("El cuadrado del numero: %d\n", numero);
    tipovoid(variable);

    muestre(variable);
    printf("---------------------\n");

    printf("ingrese 2 valores\nPrimer valor: ");
    scanf("%d", &parametroA);
    printf("Sengundo valor: ");
    scanf("%d", &parametroB);
    printf("---------------------\n");

    invertir(parametroA , parametroB);
    printf("---------------------\n");
    orden( parametroA ,  parametroB);
   
    return 0;
}

int cuadrado( int numero){

    return(numero * numero);

}

void tipovoid (int numero){

    int aux ;

    aux = numero * numero ;
    printf("El cuadrado del numero(void): %d\n", aux);
    
}

void muestre(int numero){

    printf("Direccion de la variable: %u\n", &numero);
    printf("Contenido de la variable: %d\n", numero);
}

void invertir(int parametroA , int parametroB){

    int aux;

    aux = parametroA;
    parametroA = parametroB;
    parametroB = aux;
    
    printf("valor invertido del parametroA: %d\n", parametroA);
    printf("valor invertido del parametroB: %d\n", parametroB);

}

void orden(int parametroA , int parametroB){

    int aux;

    if (parametroA > parametroB)
    {
        aux = parametroA;
        parametroA = parametroB;
        parametroB = aux;
    }
      
    printf("orden1 (valor mas chicos): %d\n", parametroA);
    printf("orden2 (valor mas grande): %d\n", parametroB);

}