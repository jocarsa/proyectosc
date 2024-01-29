#include <stdio.h>
#include <string.h>
#define contrasena "prueba"

int comprobar(char prueba[50]){
    int i, mismo = 1;

    if (strlen(contrasena) != strlen(prueba)) {
        mismo = 0;
    } else {
        if(mismo == 1){
            for (i = 0; contrasena[i] != '\0'; i++) {
                if (contrasena[i] != prueba[i]) {
                    mismo = 0;
                }
            }
        }
    }

    if (mismo) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    
    
    printf("Introduce tu contraseña: ");
    char prueba[50];
    gets(prueba);
    if(comprobar(prueba) == 1){
        printf("Son iguales");
    }else{
        printf("No son iguales");
    }
    
    return 0;
}