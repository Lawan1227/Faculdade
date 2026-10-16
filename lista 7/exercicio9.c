#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char nomec[30];
    char nomea[30];
    float comp , larg , alt, tinta, precot;
    printf("Nome do cliente: ");
    fgets(nomec, 100, stdin);
    printf("Nome do ambiente: ");
    scanf("%s" , nomea);
    printf("Comprimento: ");
    scanf("%f" , &comp);
    printf("Largura: ");
    scanf("%f" , &larg);
    printf("Altura: ");
    scanf("%f" , &alt);
    printf("Rendimento da tinta: ");
    scanf("%f" , &tinta);
    printf("Preço do litro: ");
    scanf("%f" , &precot);

    printf("\nCliente: %s" , nomec);
    printf("Ambiente: %s\n" , nomea);
    printf("Comprimento: %gm\n" ,comp );
    printf("Largura: %gm\n", larg);
    printf("Altura: %g\n" , alt);
    // Área Total = 2 × Altura × (Comprimento + Largura)
    float area = 2 * alt * (comp+ larg);
    float rendm = area / tinta;
    float custo = rendm * precot;
    printf("​Área total das paredes: %g\n" , area);
    printf("​Quantidade estimada de tinta: %g\n" , rendm);
    printf("Custo Estimado: %g\n" , custo);


}





// ​Modelo de saída:​
// ​Cliente: João Pereira​
// ​Ambiente: Quarto Principal​
// ​Comprimento: 5.00 m​
// ​Largura: 4.00 m​
// ​Altura: 2.80 m​
// ​Área total das paredes: 50.40 m²​
// ​Quantidade estimada de tinta: 5.04 litros​
// ​Custo estimado: R$ 226.80