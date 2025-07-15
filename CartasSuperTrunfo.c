#include <stdio.h>
#include <string.h>

int main() {
    //carta 1
    char estado[3], codigo[5], cidade[200];
    int populacao, turismo; 
    float area;
    float pib;
    //carta 2 
    char estado2[3], codigo2[5], cidade2[50];
    int populacao2, turismo2; 
    float area2, pib2;

    printf("Digite a primeira letra do Estado: \n"); 
    scanf("%s", &estado); 

    printf("Digite o codigo da carta (numero do estado + um numero 01 a 04): \n"); 
    scanf("%s", &codigo);


    printf("Digite o nome da cidade em uma palavra: \n" );

    scanf("%s", cidade);


    printf("Digite o numero da população: \n"); 
    scanf("%d", &populacao); 

    printf("Digite o numero dos pontos turisticos: \n"); 
    scanf("%d", &turismo); 

    printf("Digite a area da cidade: \n"); 
    scanf("%f", &area); 

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib); 

    printf("Carta 1: \n");
    printf("Estado: %s - Codigo: %s - Nome: %s - \n", estado, codigo, cidade);
    printf("População: %d - Turismo: %d - Area: %f km^2 - Pib: %f \n", populacao, turismo, area, pib);

//Carta 2
      printf("Digite a primeira letra do Estado: \n"); 
    scanf("%s", &estado); 

    printf("Digite o codigo da carta (numero do estado + um numero 01 a 04): \n"); 
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: \n" );
    scanf("%s", &cidade); 

    printf("Digite o numero da população: \n"); 
    scanf("%d", &populacao); 

    printf("Digite o numero dos pontos turisticos: \n"); 
    scanf("%d", &turismo); 

    printf("Digite a area da cidade: \n"); 
    scanf("%f", &area); 

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib); 

    printf("Carta 2: \n");
    printf("Estado: %s - Codigo: %s - Nome: %s - ", estado, codigo, cidade);
    printf("População: %d - Turismo: %d - Area: %f km^2 - Pib: %f",populacao, turismo, area, pib );

    return 0; 







