#include <stdio.h>

int multiploTres(int numero){
    if(numero % 3 == 0){
        return 1;
    }else{
        return 0;
    }
}

int esPar(int numero){
    if(numero % 2 == 0){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int i;
    for(i = 1;i<=100;i++){
        if(multiploTres(i) == 1 && esPar(i) == 1){
            printf("El numero %i es multiplo de tres y a la vez es par \n",i);
        }
    }
    return 0;
}