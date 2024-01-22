#include <stdio.h>

void dimeHola(){
    printf("Yo te saludo");
}

int dimeEdad(){ 
    return 45;
}

int dimeEdad2(int anios){
    int mi_edad;
    printf("Introduce la edad: ");
    scanf("%d",&mi_edad);
    return anios;
}

int dimeEdad3(){
    int mi_edad;
    printf("Introduce la edad: ");
    scanf("%d",&mi_edad);
    return mi_edad;
}

int main() {
    printf("%i",dimeEdad3());
	return 0;
}
