#include <stdio.h>


struct Carta {
    char codigo[4];
    char estado[3];               
    char nome_cidade[100];
    int populacao;
    float area;
    float pib;                   
    int pontos_turisticos;
};

int main() {
    struct Carta carta1, carta2;
    float densidade1, densidade2;
    float pibpercapita1, pibpercapita2;

    printf("Cadastro da carta 1:\n");
    printf("Informe o estado (sigla, ex: SP): ");
    scanf(" %s", carta1.estado);

    printf("Informe o código da carta (ex: A01): ");
    scanf(" %s", carta1.codigo);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", carta1.nome_cidade);

    printf("Informe a população: ");
    scanf("%d", &carta1.populacao);

    printf("Informe a área (em km²): ");
    scanf("%f", &carta1.area);

    printf("Informe o PIB (em bilhões): ");
    scanf("%f", &carta1.pib);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

}