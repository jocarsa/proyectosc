#include <stdio.h>
#include <conio.h>

int menu(){
    printf("Selecciona una operacion: \n");
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
            break;
        case 2:
            printf("Vamos a mostrar un archivo \n");
            break;
        case 3:
            printf("Vamos a copiar un archivo \n");
            break;
        case 4:
            printf("Vamos a salir del programa \n");
            break;
    }
    return 0;
}

int main(){
    menu();
    return 0;
}