#include <stdio.h>
#include <string.h>

int main(){
    
    // Leer de un fichero el contenido
    FILE *archivo;
    int caracter;
    archivo = fopen("matriz3.txt","r");
    // Creo un contador falso
    int contador = 1;
    // Creo un contador verdadero
    int contador2 = 1;
    // Creo una variable de comprobacion 
    int diagonal = 1;
    while(fscanf(archivo,"%c",&caracter) == 1){
        // Cada once ejecuciones del contador verdadero (cuando el contador verdadero es divisible por once, o sea, una de cada 11 veces)
       // if(contador2 % 11 != 0){
            // Solo si NO es divisible, aumenta el contador falso
            // Convertimos el char en entero
            char cadena[2];
            // Cadena es un string pero caracter es un char
            cadena[0] = caracter;
            // Comprobamos si los caracteres son 0
            for(int i = 1;i<=100;i+=11){
                if(i == contador){   
                    if(strcmp(cadena,"0") != 1){
                        printf("El entero es: %c \n",caracter);
                        printf("No es diagonal \n");
                        break;
                    }      
                }
            }
            contador++;
        //}
        // Ahora bien, el contador verdadero lo sumo siempre
        contador2++;  
    }
    // Convertir string a array, si es posible bidimensional
    
    // Lea si es diagonal o no
    
    return 0;
}