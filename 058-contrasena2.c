#include <stdio.h>
#include <string.h>

int main() {
    char contrasena[] = "prueba";
    char prueba[50];
    int i, mismo = 1;

    printf("Introduce tu contraseña: ");
    gets(prueba);  


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
        printf("es igual \n");
    } else {
        printf("no es igual \n");
    }
    return 0;
}