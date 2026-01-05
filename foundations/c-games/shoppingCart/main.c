#include <stdio.h>
#include <string.h>

int main(){

    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency[3] = "R$";
    float total = 0.0f;

    printf("Qual item você gostaria de comprar?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("Qual o preço do item?: ");
    scanf("%f", &price);

    printf("Vai querer quantos?: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("\nVocê comprou %d %s/s\n", quantity, item);
    printf("O total é: %.2f%s\n", total, currency);

    return 0;
}