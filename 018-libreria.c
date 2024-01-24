#include <stdio.h>
#include <string.h>

int main() {
    char saludo[] = "hola que tal como estas esto es una clase";
    int longitud;
    longitud = strlen(saludo);
    printf("Que sepas que la cadena tiene una longitud de %i caracteres \n",longitud);
    for(int i = 0;i<longitud;i++){
        printf("%c-",saludo[i]);
    }
    printf("\n");
	return 0;
}