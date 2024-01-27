#include <stdio.h>
#define NOMBRE "Jose Vicente"

int main(){
    int edad = 45;
    printf("Mi edad es de %i años \n",edad);
    edad = 46;
    printf("Mi edad es de %i años \n",edad);
    
    printf("%s",NOMBRE);
    NOMBRE = "Juan";
    return 0;
}