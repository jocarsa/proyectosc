#include <stdio.h>
#include <string.h>

int main() {
    printf("Introduce una cadena: \n");
    char entrada[100];
    char espacio = ' ';
    
    fgets(entrada, sizeof(entrada), stdin);
    
    int longitud = strlen(entrada);
    int contador = 0;

    for (int i = 0; i < longitud; i++) {
        if (entrada[i] == espacio) {
            contador++;
        }
    }

    printf("El numero de espacios es: %i\n", contador);
    
    return 0;
}