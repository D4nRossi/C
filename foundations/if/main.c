#include <stdio.h>
#include <string.h>

int main(){
    // me recuso a codar isso... kkkkkkkkk
    // mas achei a validação de string interessante

    char name[50] = "";

    printf("Digite seu nome: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    if(strlen(name) == 0){
        printf("Você não digitou seu nome\n");
    }
    else{
        printf("Olá, %s\n",name);
    }

    return 0;
}