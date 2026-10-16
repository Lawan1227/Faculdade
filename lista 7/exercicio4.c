#include <stdio.h>
#include <math.h>
int main(){
char perc[40];
    float xin ;
float xfin ;
float yin ;
float yfin ;

printf("Nome do percurso: ");
    fgets(perc , 40 , stdin);
    printf("Coordenada X Inicial:");
    scanf("%f" , &xin);
     printf("Coordenada Y Inicial:");
    scanf("%f" , &yin);
     printf("Coordenada X Final:");
    scanf("%f" , &xfin);
     printf("Coordenada Y Inicial:");
    scanf("%f" , &yfin);
   
    printf("-------------------------\nPercurso: %s" , perc);
float dis = sqrt(pow(xfin - xin, 2) + pow(yfin- yin, 2));
printf("\n\n");
printf("Ponto Inicial: (%.2f , %.2f)\n" , xin, yin );
printf("Ponto Final: (%.2f , %.2f) \n" , xfin, yfin);
printf("Distancia percorrida: %.2f \n" , dis);


}