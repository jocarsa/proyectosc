#include <stdio.h>

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
        if(contador2 % 11 != 0){
            // Solo si NO es divisible, aumenta el contador falso
            printf("El caracter %i es:  %c \n",contador,caracter);
            // Convertimos el char en entero
            int entero;
            entero = caracter - '0';
            // Comprobamos si los caracteres son 0
            if(
                contador == 1 
                || contador == 12 
                || contador == 23
                || contador == 34 
                || contador == 45
                || contador == 56 
                || contador == 67
                || contador == 78 
                || contador == 89
                || contador == 100 
            ){
                if(caracter != 6422320){
                    printf("Read character: %c, ASCII value: %d\n", caracter, caracter);
                    printf("El entero es: %d \n",entero);
                    printf("No es diagonal");
                    break;
                }
            }
            contador++;
        }
        // Ahora bien, el contador verdadero lo sumo siempre
        contador2++;  
    }
    // Convertir string a array, si es posible bidimensional
    
    // Lea si es diagonal o no
    
    return 0;
}