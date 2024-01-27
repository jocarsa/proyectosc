#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#define MENSAJE_MENU "Selecciona una operacion:"

int longitudCaracteres(){
    FILE *archivo;
    int contador = 0;
    int caracter;
    archivo = fopen("fichero.txt","r");
    while(fscanf(archivo,"%c",&caracter) == 1){
        if (caracter != ' ') {
            contador++;
        }
       
    }
    fclose(archivo);
    return contador;
}
void mostrarArchivo(){
    FILE *archivo;
    int caracter;
    archivo = fopen("fichero.txt","r");
    while(fscanf(archivo,"%c",&caracter) == 1){
        printf("%c",caracter);
    }
    printf("\n");
    fclose(archivo);
}

void copiarArchivo(){
    FILE *archivoorigen;
    archivoorigen = fopen("fichero.txt","r");
    
    FILE *archivodestino;
    archivodestino = fopen("ficherodestino.txt","w");
    
    int caracter;
    
    while(fscanf(archivoorigen,"%c",&caracter) == 1){
        fprintf(archivodestino,"%c",caracter);
    }
    printf("\n");
    printf("\n");
    fclose(archivoorigen);
    fclose(archivodestino);
}
void salirPrograma(){
    exit(0);
}
void pararEjecucion(){
    printf("Pulsa una tecla para continuar...");
    getch();
}
int menu(){
    system("cls"); // Windows
    printf("%s \n",MENSAJE_MENU);
    printf("1.-Calcular tamaño \n");
    printf("2.-Mostrar contenido \n");
    printf("3.-Copiar archivo \n");
    printf("4.-Salir del programa \n");
    int opcion;
    scanf("%d",&opcion);
    printf("Has elegido la opción %i \n",opcion);
    switch(opcion){
        case 1:
            printf("Vamos a calcular el tamaño de un archivo \n");
            printf("el archivo tiene %i caracteres \n",longitudCaracteres());
            pararEjecucion();
            break;
        case 2:
            printf("Vamos a mostrar un archivo \n");
            mostrarArchivo();
            pararEjecucion();
            break;
        case 3:
            printf("Vamos a copiar un archivo \n");
            copiarArchivo();
            pararEjecucion();
            break;
        case 4:
            printf("Vamos a salir del programa \n");
            salirPrograma();
            break;
    }
    menu();
    return 0;
}

int main(){
    menu();
    return 0;
}