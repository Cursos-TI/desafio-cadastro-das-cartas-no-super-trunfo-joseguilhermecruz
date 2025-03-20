#include <stdio.h>

int main(){

char nome[50];
unsigned long int populacaoA;
double areaA;
double pibA;
int pontos_turisticosA;
float densidade_populacionalA;
float pib_per_capitaA;
float superpoderA;

unsigned long int populacaoB;
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
scanf("%u", &populacaoA);
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
scanf("%u", &populacaoB);
printf("Insira a área dessa cidade:\n");
scanf("%e", &areaB);
printf("Insira o PIB dessa Cidade:\n");
scanf("%e", &pibB);
printf("Insira a quantidade de Pontos turísticos dessa Cidade:\n");
scanf("%d",&pontos_turisticosB);
printf("Densidade Populacional: %f\n", densidade_populacionalB);
printf("PIB Per Capita: %f\n", pib_per_capitaB);


int resultado_populacao = populacaoA > populacaoB;
int resultado_area = areaA > areaB;
int resultado_pib = pibA > pibB;
int resultado_pontosturisticos = pontos_turisticosA > pontos_turisticosB;
int resultado_densidade = densidade_populacionalA < densidade_populacionalB;
int resultado_pibpercapita = pib_per_capitaA > pib_per_capitaB;
int resultado_superpoder = superpoderA > superpoderB;


printf("CartaA tem População maior  que a CartaB %d\n", resultado_populacao);
printf("CartaA tem Area maior que a CartaB %d\n", resultado_area);
printf("CartaA tem PIB maior que a CartaB %d\n", resultado_pib);
printf("CartaA tem mais Pontos Turísticos que a CartaB %d\n", resultado_pontosturisticos);
printf("CartaA tem uma Densidade Populacional menor que a CartaB %d\n", resultado_densidade);
printf("CartaA tem PIB Per Capita maior que a CartaB %d\n", resultado_pibpercapita);
printf("CartaA tem um Super Poder Maior que a CartaB %d\n", resultado_superpoder);







return 0;


}