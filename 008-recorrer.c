#include <stdio.h>


int main() {
    int edades[6] = {47,43,46,34,12,34};
    int suma = 0;
    float promedio;
    for(int i = 0;i<6;i++){
        printf("%i \n",edades[i]);
        suma = suma + edades[i];
    }
    printf("La suma total es de %i \n",suma);
    printf("El numero de elementos es de 6\n");
    promedio = suma/6;
    printf("El promedio es de: %.2f \n",promedio);
	return 0;
}
