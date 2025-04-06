#include <stdio.h>

int main() {
    char estado = 'A';
    char número[5];
    char cidade[30];
    int população;
    float área;
    float PIB;
    int PontosTuristicos;

    printf("Digite a Letra do seu estado escolhido: ");
    scanf("%s", &estado);

    printf("Digite o codigo da sua carta: ");
    scanf ("%s", &número);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade);

    printf("População dessa cidade: ");
    scanf("%d", &população);

    printf("Digite o tamanho da área dessa cidade: ");
    scanf("%f", &área);

    printf("Digite o valor do PIB dessa cidade: ");
    scanf("%f", &PIB);

    printf("Total de pontos turisticos: ");
    scanf("%d", &PontosTuristicos); 

    printf("\nCarta 1 \n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", número);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", população);
    printf("Área: %f Km\n", área);
    printf("PIB: %f Bilhoes de reais\n", PIB);
    printf("Pontos Turisticos: %d\n", PontosTuristicos);

    printf("\nDigite a Letra do seu segundo estado escolhido: ");
    scanf("%s", &estado);

    printf("Digite o codigo da sua segunda carta: ");
    scanf ("%s", &número);

    printf("Digite o nome da segunda cidade: ");
    scanf("%s", &cidade);

    printf("População dessa cidade: ");
    scanf("%d", &população);

    printf("Digite o tamanho da área dessa cidade: ");
    scanf("%f", &área);

    printf("Digite o valor do PIB dessa cidade: ");
    scanf("%f", &PIB);

    printf("Total de pontos turisticos: ");
    scanf("%d", &PontosTuristicos); 

    printf("\nCarta 2 \n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", número);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", população);
    printf("Área: %f Km\n", área);
    printf("PIB: %f Bilhoes de reais\n", PIB);
    printf("Pontos Turisticos: %d", PontosTuristicos);

    return 0;
}