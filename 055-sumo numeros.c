#include <stdio.h>
#include <string.h>

int main(){
    char cadena[50];
    int i;
    int ascii;
    int entero;
    int suma = 0;
    printf("Introduzca los números: ");
    gets(cadena);
    printf("Has introducido: %s \n",cadena);
    for(i = 0;i<50;i++){
        ascii = cadena[i];
        if(ascii == 0){
            break;
        }
        
        if(cadena[i] != ' '){
            printf("%c \n",cadena[i]);
            entero = cadena[i] - '0';
            printf("el numero es: %i \n",entero);
            suma += entero;
        }
        
    }
    printf("La suma es %i \n",suma);
    return 0;
}