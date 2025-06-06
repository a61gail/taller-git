//Autor: Abigail Rios

#include <stdio.h>

int factorial(int n){
        if (n==0) return 1;
        return n * factorial(n-1);
    }   

int main(){
    printf("Hola Mundo, ¿cómo estás?\n");
    printf("Ingresa un numero para calcular su factorial por favor\n");
    int n=0;
    scanf("%d",&n);
    int fact=factorial(n);
    printf("El factorial de %d es %d\n",n,fact);
    
    return 0;
}