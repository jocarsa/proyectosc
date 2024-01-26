#include <stdio.h>
#include <conio.h>


int longitudCaracteres(){
    
    int caracter, contador=0;
    
    FILE *F;
    
    F = fopen("ficheroo.txt", "r");
    while(fscanf(F, "%c", &caracter)==1){
        if(caracter != ' '){
            contador++;
        }
    }
    fclose(F);
    
    return contador;
}


void mostrarArchivo(){
    
    int caracter;
    
    FILE *F;
    
    F = fopen("ficheroo.txt", "r");
    while(fscanf(F, "%c", &caracter)==1){
        printf("%c", caracter);
    }
    printf("\n");
    
    fclose(F);
    
}


int menu(){
    
    int opcion;
    
    printf("\n1.- Calcular tamaño.");
    printf("\n2.- Mostrar contenido.");
    printf("\n3.- Copiar archivo.");
    printf("\n4.- Salir del programa.");
    printf("\n Selecciona una operacion: ");
    scanf("%d", &opcion);
    
    switch(opcion){
        
        case 1:
            printf("Calcular el tamaño de un archivo\n");
            printf("El archivo tiene %d caracteres\n", longitudCaracteres());
            break;
        case 2:
            printf("Mostrar el contenido de un archivo\n");
            break;
        case 3:
            printf("Copiar el archivo\n");
            break;
        case 4:
            printf("Salir del programa\n");
            break;
        
    }
    
    return 0;
}