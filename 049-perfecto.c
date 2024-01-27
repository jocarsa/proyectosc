#include <stdio.h>

int esPerfecto(int numero){
    int i,suma_de_divisores = 0;
    for(i = 1;i<numero;i++){
        if(numero % i == 0){
            suma_de_divisores += i;
        }
    }
    if(suma_de_divisores == numero){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int i;
    for(i = 1;i<1000;i++){
        
        if(esPerfecto(i) == 1){
            printf("Evluamos el número: %i - ",i);
            printf("y es perfecto");
            printf("\n");
        }
        
    }
    
    return 0;
}