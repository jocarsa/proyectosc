#include <stdio.h>

int main() {
    int mivector[4][4];
    mivector[0][0] = 1;
    mivector[1][0] = 2;
    mivector[2][0] = 3;
    mivector[3][0] = 4;
    
    mivector[0][1] = 5;
    mivector[1][1] = 6;
    mivector[2][1] = 7;
    mivector[3][1] = 8;
    
    mivector[0][2] = 9;
    mivector[1][2] = 10;
    mivector[2][2] = 11;
    mivector[3][2] = 12;
    
    mivector[0][3] = 13;
    mivector[1][3] = 14;
    mivector[2][3] = 15;
    mivector[3][3] = 16;
    for(int x = 0;x<4;x++){
        for(int y = 0;y<4;y++){
            printf("En la casilla %i,%i encontramos el valor: %i \n",x,y,mivector[y][x]);
        }
    }
    
	return 0;
}