#include <stdio.h>

int main() {
	//printf("Hola mundo");
    int contador = 1;
    for(int fila = 0;fila<7;fila++){
        for(int columna = 0;columna<9;columna++){
            if(columna == contador){
                printf(" ");
            }else{
                printf("*"); 
            }
            
        }
        printf("\n");
        contador++;
    }
	return 0;
}
