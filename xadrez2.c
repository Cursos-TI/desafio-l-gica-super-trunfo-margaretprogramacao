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

    printf("\nCadastro da carta 2:\n");
    printf("Informe o estado (sigla, ex: RJ): ");
    scanf(" %s", carta2.estado);

    printf("Informe o código da carta (ex: B02): ");
    scanf(" %s", carta2.codigo);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", carta2.nome_cidade);

    printf("Informe a população: ");
    scanf("%d", &carta2.populacao);

    printf("Informe a área (em km²): ");
    scanf("%f", &carta2.area);

    printf("Informe o PIB (em bilhões): ");
    scanf("%f", &carta2.pib);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    densidade1 = carta1.populacao / carta1.area;
    densidade2 = carta2.populacao / carta2.area;

    pibpercapita1 = (carta1.pib * 1000000000) / carta1.populacao;
    pibpercapita2 = (carta2.pib * 1000000000) / carta2.populacao;

    printf("\n--- Dados das Cartas ---\n");

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.nome_cidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.nome_cidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);

    printf("\n=== Comparação de Cartas (Atributo: PIB per Capita) ===\n");

    printf("Carta 1 - %s (%s): %.2f reais\n", carta1.nome_cidade, carta1.estado, pibpercapita1);
    printf("Carta 2 - %s (%s): %.2f reais\n", carta2.nome_cidade, carta2.estado, pibpercapita2);

    if (pibpercapita1 > pibpercapita2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", carta1.nome_cidade);
    } else if (pibpercapita2 > pibpercapita1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", carta2.nome_cidade);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;

}