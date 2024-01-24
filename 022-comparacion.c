#include <stdio.h>
#include <string.h>

int main() {
    char primero[] = "a";
    char segundo[] = "a";
    if(strcmp(primero,segundo) == 0){
        printf("Si que son iguales\n");
    }else{
        printf("No son iguales\n");
    }
    
	return 0;
}