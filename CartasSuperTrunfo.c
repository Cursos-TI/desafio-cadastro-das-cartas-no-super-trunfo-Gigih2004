#include <stdio.h>

int main() {
    char estado = 'A';
    char numero[5];
    char cidade[30];
    int populacao;
    float area;
    float PIB;
    int PontosTuristicos;

    printf("Digite a Letra do seu estado escolhido: ");
    scanf("%s", &estado);

    printf("Digite o codigo da sua carta: ");
    scanf ("%s", &numero);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade);

    printf("Populacao dessa cidade: ");
    scanf("%d", &populacao);

    printf("Digite o tamanho da área dessa cidade: ");
    scanf("%f", &area);

    printf("Digite o valor do PIB dessa cidade: ");
    scanf("%f", &PIB);

    printf("Total de pontos turisticos: ");
    scanf("%d", &PontosTuristicos); 

    printf("\nCarta 1 \n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", numero);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %f Km\n", area);
    printf("PIB: %f Bilhoes de reais\n", PIB);
    printf("Pontos Turisticos: %d\n", PontosTuristicos);

    printf("\nDigite a Letra do seu segundo estado escolhido: ");
    scanf("%s", &estado);

    printf("Digite o codigo da sua segunda carta: ");
    scanf ("%s", &numero);

    printf("Digite o nome da segunda cidade: ");
    scanf("%s", &cidade);

    printf("Populacao dessa cidade: ");
    scanf("%d", &populacao);

    printf("Digite o tamanho da área dessa cidade: ");
    scanf("%f", &area);

    printf("Digite o valor do PIB dessa cidade: ");
    scanf("%f", &PIB);

    printf("Total de pontos turisticos: ");
    scanf("%d", &PontosTuristicos); 

    printf("\nCarta 2 \n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", numero);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %f Km\n", area);
    printf("PIB: %f Bilhoes de reais\n", PIB);
    printf("Pontos Turisticos: %d\n", PontosTuristicos);

    return 0;
}