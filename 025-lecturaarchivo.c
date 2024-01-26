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
    
    return 0;
}

int main(){
    menu();
    return 0;
}