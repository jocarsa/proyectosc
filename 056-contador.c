#include <stdio.h>
#include <string.h>

int main(){
    char cadena[50];
    // Te lleno la cadena de espacios
    for(int a = 0;a<50;a++){
        cadena[a] = ' ';
    }
    int i;
    int ascii;
    int entero;
    int suma = 0;
    int contador = 0;
    float promedio;
    printf("Introduzca los números: ");
    gets(cadena);
    printf("Has introducido: %s \n",cadena);
    for(i = 0;i<50;i++){
        if(cadena[i] != ' '){
            printf("%c \n",cadena[i]);
            entero = cadena[i] - '0';
            if(entero != -48){ // Quito el retorno de carro de la ecuacion
                printf("el numero es: %i \n",entero);
                suma += entero;
                contador++;
            }
        }
        
    }
    printf("La suma es %i \n",suma);
    promedio = suma/contador;
    printf("El promedio es %f \n",promedio);
    return 0;
}