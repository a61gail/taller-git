//Autor: Abigail Rios

#include <stdio.h>
int main(){
printf("Hola Mundo, ¿cómo estás?\n");

int factorial(int n){
    if (n==0){
	 return 1;
    }	
    return n * factorial(n-1);
}

}
