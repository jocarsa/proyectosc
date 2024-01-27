#include <stdio.h>

#define MAX_SIZE 10  // Define the maximum size of the matrix

int main() {
    FILE *archivo;
    int num, isDiagonal = 1;
    archivo = fopen("matriz.txt", "r");
   

    for (int i = 0; i < MAX_SIZE; ++i) {
        for (int j = 0; j < MAX_SIZE; ++j) {
            if (fscanf(archivo, "%d", &num) != 1) {
                perror("Error al leer el archivo");
                fclose(archivo);
                return 1;
            }
            if ((i != j && num != 0) || (i == j && num == 0)) {
                isDiagonal = 0;
            }
        }
    }

    fclose(archivo);

    if (isDiagonal) {
        printf("La matriz es diagonal\n");
    } else {
        printf("La matriz no es diagonal\n");
    }

    return 0;
}
