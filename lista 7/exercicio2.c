#include <stdio.h>
int main(){

    char nome[100];
    char tur[10];
    int matr;
    float nota1;
    float nota2;
    float nota3;
    
    printf("Nome do Estudante: ");
    fgets(nome , 100 , stdin);
    printf("Turma: ");
    scanf("%s" , tur);
    printf("Matricula: ");
    scanf("%d" , &matr);
    printf("Nota da Primeira Avaliacao: ");
    scanf("%f" , &nota1);
    printf("Nota da Segunda Avaliacao: ");
    scanf("%f" , &nota2);
    printf("Nota da Terceira Avaliacao: ");
    scanf("%f" , &nota3);

    float med = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / 10 ;
    printf("---------------------\nNome do Estudante: %s" , nome);
    printf("\nTurma: %s" , tur);
    printf("\nMatricula: %d" , matr);
    printf("\nNota 1 : %.1f" , nota1);
    printf("\nNota 2 : %.1f" , nota2);
    printf("\nNota 1 : %.1f" , nota3);
    printf("\nMedia Final : %.1f" , med);
}