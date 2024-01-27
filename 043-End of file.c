#include <stdio.h>

int main(){
    
    // Leer de un fichero el contenido
    FILE *archivo;
    int caracter;
    archivo = fopen("matriz.txt","r");
    // Creo un contador falso
    int contador = 1;
    // Creo un contador verdadero
    int contador2 = 1;
    while(fscanf(archivo,"%c",&caracter) == 1){
        // Cada once ejecuciones del contador verdadero (cuando el contador verdadero es divisible por once, o sea, una de cada 11 veces)
        if(contador2 % 11 != 0){
            // Solo si NO es divisible, aumenta el contador falso
            printf("El caracter %i es:  %c \n",contador,caracter);
            contador++;
        }
        // Ahora bien, el contador verdadero lo sumo siempre
        contador2++;  
    }
    // Convertir string a array, si es posible bidimensional
    
    // Lea si es diagonal o no
    
    return 0;
}