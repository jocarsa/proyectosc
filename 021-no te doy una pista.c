#include <stdio.h>
#include <string.h>

int main() {
    printf("Introduce una cadena: \n");
    char entrada[100];
    
    gets(entrada);
    int lontigud = strlen(entrada);
    
    for(int i = 0;i<lontigud;i++){
        printf("%c_",entrada[i]);
    }
    printf("\n");
    
	return 0;
}