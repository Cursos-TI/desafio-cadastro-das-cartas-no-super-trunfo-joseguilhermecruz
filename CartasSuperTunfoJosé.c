#include <stdio.h>

int main(){

char nome[50];
float populacaoA;
double areaA;
double pibA;
int pontos_turisticosA;
float densidade_populacionalA;
float pib_per_capitaA;
float superpoderA;

float populacaoB;
double areaB;
double pibB;
int pontos_turisticosB;
float densidade_populacionalB;
float pib_per_capitaB;
float superpoderB;


densidade_populacionalA = populacaoA / areaA;
pib_per_capitaA = pibA / populacaoA;

densidade_populacionalB = populacaoB / areaB;
pib_per_capitaB = pibB / populacaoB;

superpoderA = populacaoA + areaA + pibA + pontos_turisticosA + densidade_populacionalA + pib_per_capitaA;
superpoderB = populacaoB + areaB + pibB + pontos_turisticosB + densidade_populacionalB + pib_per_capitaB; 

printf("Carta A:\n");

printf("Digite o nome do país escolhido:\n");
scanf("%s", &nome);
printf("Digite o nome do Estado:\n");
scanf("%s", &nome);
printf("Digite o nome da Cidade:\n");
scanf("%s", &nome);
printf("Digite o codigo da cidade:\n");
scanf("%s", &nome);
printf("Insira a População dessa cidade:\n");
scanf("%f", &populacaoA);
printf("Insira a área dessa cidade:\n");
scanf("%e", &areaA);
printf("Insira o PIB dessa Cidade:\n");
scanf("%e", &pibA);
printf("Insira a quantidade de Pontos turísticos dessa Cidade:\n");
scanf("%d",&pontos_turisticosA);
printf("Densidade Populacional: %f\n", densidade_populacionalA);
printf("PIB Per Capita: %f\n", pib_per_capitaA);

printf("Carta B:\n");

printf("Digite o nome do país escolhido:\n");
scanf("%s", &nome);
printf("Digite o nome do Estado:\n");
scanf("%s", &nome);
printf("Digite o nome da Cidade:\n");
scanf("%s", &nome);
printf("Digite o codigo da cidade:\n");
scanf("%s", &nome);
printf("Insira a População dessa cidade:\n");
scanf("%f", &populacaoB);
printf("Insira a área dessa cidade:\n");
scanf("%e", &areaB);
printf("Insira o PIB dessa Cidade:\n");
scanf("%e", &pibB);
printf("Insira a quantidade de Pontos turísticos dessa Cidade:\n");
scanf("%d",&pontos_turisticosB);
printf("Densidade Populacional: %f\n", densidade_populacionalB);
printf("PIB Per Capita: %f\n", pib_per_capitaB);



printf("")








return 0;


}