#include <stdio.h>
#include <conio.h>

int menu(){
    printf("Selecciona una operacion: \n");
    printf("1.-Calcular tamaño \n");
    printf("2.-Mostrar contenido \n");
    printf("3.-Copiar archivo \n");
    printf("4.-Salir del programa \n");
    return 0;
}

int main(){
    menu();
    return 0;
}