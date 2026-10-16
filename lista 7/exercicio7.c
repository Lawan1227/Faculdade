#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char nome[25];
    float raio, preco, precocerca;

    printf("Nome do proprietário: ");
    scanf("%s" , nome);
    printf("Raio do terreno: ");
    scanf("%f" , &raio);
    printf("Preço do metro quadrado da grama: ");
    scanf("%f" , &preco);
    printf("Preço do metro da cerca: ");
    scanf("%f" , &precocerca);

    float area = M_PI * (raio*raio) ;
    float areac = 2*M_PI*raio;
    printf("\n---------------------------------\nProprietário: %s" , nome);
    printf("\nRaio do Terreno: %.1f\n" , raio);
    printf("​Área para instalação da grama: %.2f\n" , area);
    printf("Quantidade de cerca necessária: %.2f\n" , areac);
    float custo = area * preco;
    float custocerca = areac * precocerca;
    printf("Custo da grama: %.2f\n" , custo);
    printf("Custo da cerca: %.2f\n" , custocerca);
    float custot= custocerca + custo;
    printf("Custo total: %.2f" , custot);
    


}



// ​Nome do proprietário: Marcos Oliveira​
// ​Raio do terreno: 10.00​
// ​Preço do m² da grama: 18.00​
// ​Preço do metro da cerca: 25.00​
// ​Modelo de saída:​
// ​Proprietário: Marcos Oliveira​
// ​Raio do terreno: 10.00 m​
// ​Área para instalação da grama: 314.16 m²​
// ​Quantidade de cerca necessária: 62.83 m​
// ​Custo da grama: R$ 5654.87​
// ​Custo da cerca: R$ 1570.80​
// ​Custo total estimado: R$ 7225.67​