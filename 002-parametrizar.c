#include <stdio.h>

int main() {
	int numero_filas;
    printf("Introduce el número de filas");
    scanf("%d",&numero_filas);
    
    int contador = 1;
    for(int fila = 0;fila<numero_filas;fila++){
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
