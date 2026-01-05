#include <stdio.h> 

int main(){

    int x = 10;
    int y = 3;
    int z = 0;

    //z = x + y;
    //z = x - y;
    //z = x * y;
    //z = x / y; //dividir int é pedir pra dar problema, é melhor mudar pra float
    //z = x % y;

    x++;
    y--;

    //augmented assignment operators
    x+=5; // x = x + 5

    printf("%d\n", z);
    printf("%d\n", x);
    printf("%d\n", y);

    return 0;
}