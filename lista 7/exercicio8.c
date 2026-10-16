#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char lanche[100];
    char nome[100];
    char bebida[100];
    int quantl,quantb;
    float precol, precob, valorrec;

    printf("Nome do cliente: "); 
    fgets(nome , 100, stdin);
    printf("Nome do lanche: ");
    fgets(lanche , 100, stdin);
    printf("Quantidade de lanches: ");
    scanf("%i" , &quantl);
    printf("Preço do lanche: ");
    scanf("%f" , &precol);
    printf("Nome da bebida:");
    scanf("%s" , bebida);
    printf("Quantidade de bebidas: ");
    scanf("%i" , &quantb);
    printf("Preço da bebida: ");
    scanf("%f" , &precob);
    printf("Valor recebido: ");
    scanf("%f" , &valorrec);


    printf("\n%s" , nome);
    printf("%i %s" , quantl , lanche);
    printf("%i %s\n" , quantb , bebida);
    float totalb = quantb*precob;
    float totall = quantl*precol;
    float total = totall + totalb;
    printf("Total dos lanches: %.2f\n" , totall );
    printf("Total das bebidas: %.2f\n" , totalb);
    printf("Valor total do pedido: %.2f\n" , total);
    printf("Valor recebido: %.2f\n" , valorrec);
    float trococ = valorrec - total;
    printf("Troco: %.2f\n\n" , trococ);

    printf("Obrigado pela preferência, Mariana Ferreira!");


}

// ​Pedido de Mariana Ferreira​
// ​2 X-Bacon - R$ 18.50 cada​
// ​3 Suco de Laranja - R$ 7.00 cada​
// ​Total dos lanches: R$ 37.00​
// ​Total das bebidas: R$ 21.00​
// ​Valor total do pedido: R$ 58.00​
// ​Valor recebido: R$ 100.00​
// ​Troco: R$ 42.00​
// ​Obrigado pela preferência, Mariana Ferreira!​