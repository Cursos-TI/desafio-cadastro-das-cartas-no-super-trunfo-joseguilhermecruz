#include <stdio.h>

int main(){

char nome[50];
float populacao;
double area;
double pib;
int pontos_turisticos;
float densidade_populacional;
float pib_per_capita;

densidade_populacional = populacao / area;
pib_per_capita = pib / populacao;

printf("Digite o nome do país escolhido:\n");
scanf("%s", &nome);
printf("Digite o nome do Estado:\n");
scanf("%s", &nome);
printf("Digite o nome da Cidade:\n");
scanf("%s", &nome);
printf("Digite o codigo da cidade:\n");
scanf("%s", &nome);
printf("Insira a População dessa cidade:\n");
scanf("%f", &populacao);
printf("Insira a área dessa cidade:\n");
scanf("%e", &area);
printf("Insira o PIB dessa Cidade:\n");
scanf("%e", &pib);
printf("Insira a quantidade de Pontos turísticos dessa Cidade:\n");
scanf("%d",&pontos_turisticos);
printf("Densidade Populacional: %f\n", densidade_populacional);
printf("PIB Per Capita: %f\n", pib_per_capita);


return 0;


}