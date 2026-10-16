#include <stdio.h>
int main()
{

    char nome[100];
    char nomep[100];
    float quant;
    float preco;
    float desc;

    printf("Nome do Cliente: ");
    fgets(nome, 100, stdin);
    printf("Nome do Produto: ");
    fgets(nomep, 100, stdin);
    printf("Quantidade :");
    scanf("%f", &quant);
    printf("Preco Unitario: ");
    scanf("%f", &preco);
    printf("Porcentual de desconto desejado:");
    scanf("%f", &desc);

    printf("\n---------------------------------\nCliente : %s", nome);
    printf("Produto: %s", nomep);
    printf("Quantidade : %.1f", quant);
    float vf = preco * quant;
    printf("\nValor da Compra : %.2f", vf);
    float descont = vf * (desc / 100);
    printf("\nDescondo Concedido: %.1f", descont);
    float maxi = vf - descont;
    printf("\nValor Final : %.2f", maxi);

    return 0;
}