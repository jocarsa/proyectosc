#include <stdio.h>
#include <string.h>

int main(){
    
    char contrasena[] = "prueba";
    char prueba[50];
    
    printf("Introduce tu contraseña: ");
    gets(prueba);
    
    if(strcmp(contrasena,prueba) == 1){
        printf("no es igual \n");
    }else{
        printf("es igual \n");
    }
    return 0;
}