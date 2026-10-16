#include <stdio.h>
int main(){
char nome[20];
float cod, horn, hore ;
float val;

printf("Nome do funcionario:");
scanf("%s" , nome);
printf("Codigo Funcional: ");
scanf("%f" , &cod);
printf("Valor da Hora:");
scanf("%f" , &val);
printf("Horas normais trabalhadas:");
scanf("%f" , &horn);
printf("Horas extras: ");
scanf("%f" , &hore);

printf("Funcionario : %s" , nome);
printf("\nCodigo: %.0f" , cod); //pode dar erro aqui
float pag = val * horn;
printf("\nPagamento pelas horas normais: %.2f" , pag);
float ad = val * 1.5;

float page = ad * hore; //erro aqui
printf("\nPagamento pelas horas e extras: %.2f " , page);
float salb = page + pag;
printf("\nSalario Bruto: %.2f" , salb);
float desc =  (salb * 0.08);
printf("\nDesconto Realizado : %.2f" , desc);
float liq = salb - desc;
printf("\nSalário Liquido : %.2f" , liq);

}

// ​Funcionário: Roberto Almeida​
// ​Código: 1548​
// ​Pagamento pelas horas normais: R$ 4000.00​
// ​Pagamento pelas horas extras: R$ 450.00​
// ​Salário bruto: R$ 4450.00​
// ​Desconto realizado: R$ 356.00​
// ​Salário líquido: R$ 4094.00​