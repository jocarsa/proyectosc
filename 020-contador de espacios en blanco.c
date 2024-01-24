#include <stdio.h>
#include <string.h>

int main() {
    printf("Introduce una cadena: \n");
    char entrada[100];
    
    gets(entrada);
    printf("Lo que has escrito es: %s \n",entrada);
	return 0;
}