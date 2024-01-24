#include <stdio.h>

int main() {
    char saludo[] = "hola";
    for(int i = 0;i<4;i++){
        printf("%c-",saludo[i]);
    }
    printf("\n");
	return 0;
}