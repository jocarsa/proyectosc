#include <stdio.h>

int main(){
    
    // Leer de un fichero el contenido
    FILE *archivo;
    int caracter;
    archivo = fopen("matriz.txt","r");
    while(fscanf(archivo,"%c",&caracter) == 1){
        printf("%c",caracter);
    }
    // Convertir string a array, si es posible bidimensional
    
    // Lea si es diagonal o no
    
    return 0;
}