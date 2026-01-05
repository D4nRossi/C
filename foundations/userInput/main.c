#include <stdio.h>
#include <string.h> //funções pra trabalhar com strings

int main(){

    int age = 0;
    float gpa = 0.0f; //demonstra que é um float zerado
    char grade = '\0'; //equivale ao null no char
    char name[30] = "";

    //nos scanf é sempre bom deixar um espaço em branco antes do '%'

    printf("Digite sua idade: ");
    scanf(" %d", &age);

    printf("Digite sua gpa: ");
    scanf(" %f", &gpa);

    printf("Digite sua média (A,B,C,D,F): ");
    scanf(" %c", &grade);

    //como não tem como usar um espaço em branco no input de string, usamos o getchar pra nn quebrar
    getchar();
    printf("Digite seu nome: ");
    //scanf não aceita espaço em branco, no fgets - variavel, tamanho (se estiver definido pode usar o sizeof, ou colocar o número msm, stdin = standard input)
    fgets(name, sizeof(name), stdin); //fgets pula uma linha automaticamente, mesmo sem colocar o \n
    name[strlen(name) - 1] = '\0'; //isso pega o /n do fgets e transforma em um char null

    printf("%s\n", name);
    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);

    return 0;
}