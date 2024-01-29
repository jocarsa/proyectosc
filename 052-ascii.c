#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    FILE *archivo;
    int caracter;
    archivo = fopen("matriz3.txt","r");
    int contador;
    int contador2 = 1;
    int diagonal = 1;
    char numeros[100];
    int ascii;
    // Convertimos un array con espacios a un array correcto
    contador = 0;
    while(fscanf(archivo,"%c",&caracter) == 1){
        if(contador2 % 11 != 0){
            numeros[contador] = caracter;
            contador++;
        }
        //printf("en el array original el caracter numero %i es %c \n",contador2,caracter);
        //printf("El contador 2 vale: %i \n",contador2);
        contador2++;
    }
    // Ahora voy a ver si tengo todo correcto en el array limpio
    for(int i = 0;i<100;i++){
        //printf("en el array limpiado el caracter numero %i es %c \n",i,numeros[i]);
        // Ahora pegamos saltos de 11 en 11
        if(i%11 == 0){
            printf("en el array limpiado el caracter numero %i es %c \n",i,numeros[i]);
            ascii = numeros[i];
            printf("Por curiosidad quiero obtener el ascii del numero: %i \n",ascii);
            // Ahora comprobamos si es cero
            if(ascii != 48){
                printf("No es cero \n");
                printf("Por lo tanto no es diagonal\n");
                break;
            }
        }
    }
    
    return 0;
}