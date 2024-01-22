#include <stdio.h>

int main() {
	int numero_filas;
    printf("Introduce el número de filas");
    scanf("%d",&numero_filas);
    
    int numero_columnas;
    printf("Introduce el número de columnas");
    scanf("%d",&numero_columnas);
    
    int contador = 1;
    for(int fila = 0;fila<numero_filas;fila++){
        for(int columna = 0;columna<numero_columnas;columna++){
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
