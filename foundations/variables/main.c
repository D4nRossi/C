#include <stdio.h>
#include <stdbool.h> //precisa desse import pra trabalhar com bool

int main(){

    

    int age = 25;
    // o %d é de decimal
    printf("Você tem %d anos \n", age);

    float gpa = 2.5;
    // o %.2f é de float de duas casas decimais
    printf("Sua GPA é %.2f\n", gpa);

    double pi = 3.141459265358979;
    // o %lf é para long float (double)
    printf("O valor de pi é %lf\n", pi);

    char grade = 'A';
    // o %c é de char
    printf("Sua média é %c\n", grade);

    // em C usamos um array de char para representar string
    char name[] = "Daniel Amorim";
    // o %s é pra string
    printf("Meu nome é %s\n", name);

    bool isOnline = false;
    if(isOnline == true){
        printf("%s esta online\n", name);
    }else if(isOnline == false){
        printf("%s não esta online\n", name);
    }

    return 0;
}