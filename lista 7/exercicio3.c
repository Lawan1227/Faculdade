#include <stdio.h>
int main(){

    char nome[50];
    char cid[50];
    float dist;
    float consu;
    float preco;
    float ped;

    printf("Nome do Motorista: ");
    fgets(nome , 50 , stdin );
    printf("Cidade Destino: ");
    fgets(cid , 50 , stdin);
    printf("Distancia da Viagem: ");
    scanf("%f" , &dist);
    printf("Consumo medio: ");
    scanf("%f" , &consu);
    printf("Valor do Combustivel: ");
    scanf("%f" , &preco);
    printf("Valor dos Pedagios: ");
    scanf("%f" , &ped);

    printf("-----------------------------\nMotorista: %s" , nome);
    printf("\nCidade Destino: %s" , cid);
    printf("\nDistancia da Viagem: %.2fkm" , dist);
    float combu = dist/consu;
    printf("\nCombustivel Necessario: %.2f" , combu);
    
}