#include <stdio.h>

int main(){
    
    // Leer de un fichero el contenido
    FILE *archivo;
    int caracter;
    archivo = fopen("matriz.txt","r");
    int contador = 1;
    while(fscanf(archivo,"%c",&caracter) == 1){
        if(caracter != '\n' || caracter != '\r'){
            printf("El caracter %i es:  %c \n",contador,caracter);
            contador++;
        }
    }
    // Convertir string a array, si es posible bidimensional
    
    // Lea si es diagonal o no
    
    return 0;
}