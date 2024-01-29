#include <stdio.h>
#include <string.h>

int main(){
    char cadena[50];
    printf("Introduzca los números: ");
    scanf(" %[^\n]",cadena);
    printf("Has introducido: %s \n",cadena);
    return 0;
}