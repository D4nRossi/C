#include <stdio.h>
#include <math.h> //lib das func

int main(){

    double x = 9.0;
    //x = sqrt(x); //Quadrado
    //x = pow(x, 2); //Potencia
    //x = round(x); //Arredondar
    //x = ceil(x); //Arredondar pra cima
    //x = floor(x); //Arredondar pra baixo
    //x = log(x); //Logaritimo natural
    //x = sin(x); //Seno
    //x = cos(x); //Cosseno
    //x = tan(x); //Tangente

    printf("%.2lf\n", x);

    return 0;
}

/*
    Em caso de usar a lib math.h, é bem possível que quebre na hora de compilar
    Nesse caso usamos o gcc main.c -o main -lm
*/