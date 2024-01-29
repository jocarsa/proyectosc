#include <stdio.h>
#include <string.h>

int main(){
    
    
    
    char cadena[2];
    cadena[0] = "0";
    
    if(strcmp(cadena[0],"0") == 1){
        printf("es igual \n");
    }else{
        printf("NO es igual \n");
    }
    
    return 0;
}