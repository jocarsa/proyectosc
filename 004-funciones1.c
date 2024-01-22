#include <stdio.h>

void dimeHola(){
    printf("Yo te saludo");
}

int dimeEdad(){
    return 45;
}

int dimeEdad2(int anios){
    return anios;
}

int main() {
    printf("%i",dimeEdad2(45));
	return 0;
}
