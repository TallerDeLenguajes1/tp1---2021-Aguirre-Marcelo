#include <stdio.h>

int main() {
    int i , *p ;
    i= 4;
    p = &i;

    printf("El contenido del puntero: %d \n", *p ); 
    printf("La direccion de memoria almacenada por el puntero: %u \n", p ); 
    printf("La direccion de memoria de la variable: %u \n", &i ); 
    printf("La direccion de memoria del puntero: %u \n", &p ); 
    printf("tamano de memoria utilizado por esa variable: %d \n", sizeof(i));   

    
    
    return 0;
    
}