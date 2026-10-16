#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char nome[100];
    char sala[2];
    int seg;

    printf("Nome da atividade: ");
    scanf("%s" , nome);
    printf("\nSala : ");
    scanf("%s" , sala);
    printf("\nDuração em segundos: ");
    scanf("%i" , &seg);

    printf("Atividade : %s" , nome);
    printf("\nSala: %s" , sala);
    printf("\nDuração em segundos : %i" , seg);
    int minuto = seg / 60;
    int minsobra = seg % 60;
    int hora = minuto /60;
    int horasobra = minuto % 60;
    printf("\n Horas : %i \nMinuto : %i \nSegundos : %i" , hora , horasobra , minsobra);


}

