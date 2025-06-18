#include <stdio.h>

int main() {
    char estadoJogador1, estadoJogador2;
    char codigoJogador1[3], codigoJogador2[3];
    char cidadeJogador1[20], cidadeJogador2[20];
    float areaJogador1, areaJogador2;
    float pibJogador1, pibJogador2;
    int pontosTuristicosJogador1, pontosTuristicosJogador2;
    long int populacaoJogador1, populacaoJogador2;
    float densidadeJogador1, densidadeJogador2;
    float pibPerCapitaJogador1, pibPerCapitaJogador2;

    // Linha decorativa
    for (int i = 0; i < 30; i++) {
        printf("-=-");
    }

    printf("\n[SUPER TRUNFO - CIDADES BRASILEIRAS]\n");
    
    for (int i = 0; i < 30; i++) {
        printf("-=-");
    }

    printf("\n\n=== Jogador 1 ===\n");
    printf("Digite a primeira letra do seu estado: ");
    scanf(" %c", &estadoJogador1);

    printf("Digite um código, de 01 à 04: ");
    scanf("%2s", codigoJogador1);

    printf("Digite o nome da sua cidade: ");
    scanf(" %[^\n]", cidadeJogador1);

    printf("Qual a população da sua cidade?: ");
    scanf("%ld", &populacaoJogador1);

    printf("Qual a área da sua cidade em km²?: ");
    scanf("%f", &areaJogador1);

    printf("Qual o PIB da sua cidade (em bilhões de reais)?: ");
    scanf("%f", &pibJogador1);

    printf("Quantos pontos turísticos sua cidade tem?: ");
    scanf("%d", &pontosTuristicosJogador1);

    // Cálculos para Jogador 1
    densidadeJogador1 = populacaoJogador1 / areaJogador1;
    pibPerCapitaJogador1 = (pibJogador1 * 1000000000) / populacaoJogador1; // Convertendo PIB de bilhões para reais

    printf("\n=== Jogador 2 ===\n");
    printf("Digite a primeira letra do seu estado: ");
    scanf(" %c", &estadoJogador2);

    printf("Digite um código, de 01 à 04: ");
    scanf("%2s", codigoJogador2);

    printf("Digite o nome da sua cidade: ");
    scanf(" %[^\n]", cidadeJogador2);

    printf("Qual a população da sua cidade?: ");
    scanf("%ld", &populacaoJogador2);

    printf("Qual a área da sua cidade em km²?: ");
    scanf("%f", &areaJogador2);

    printf("Qual o PIB da sua cidade (em bilhões de reais)?: ");
    scanf("%f", &pibJogador2);

    printf("Quantos pontos turísticos sua cidade tem?: ");
    scanf("%d", &pontosTuristicosJogador2);

    // Cálculos para Jogador 2
    densidadeJogador2 = populacaoJogador2 / areaJogador2;
    pibPerCapitaJogador2 = (pibJogador2 * 1000000000) / populacaoJogador2; // Convertendo PIB de bilhões para reais

    for (int i = 0; i < 30; i++) {
        printf("-=-");
    }

    printf("\n\n=== Carta do Jogador 1 ===\n");
    for (int i = 0; i < 30; i++) {
        printf("-=-");
    }
    printf("\nEstado: %c\n", estadoJogador1);
    printf("Código: %c%s\n", estadoJogador1, codigoJogador1);
    printf("Cidade: %s\n", cidadeJogador1);
    printf("População: %ld habitantes\n", populacaoJogador1);
    printf("Área: %.2f km²\n", areaJogador1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadeJogador1);
    printf("PIB: R$ %.2f bilhões\n", pibJogador1);
    printf("PIB per capita: R$ %.2f\n", pibPerCapitaJogador1);
    printf("Pontos Turísticos: %d\n", pontosTuristicosJogador1);

    for (int i = 0; i < 30; i++) {
        printf("-=-");
    }

    printf("\n\n=== Carta do Jogador 2 ===\n");
    for (int i = 0; i < 30; i++) {
        printf("-=-");
    }
    printf("\nEstado: %c\n", estadoJogador2);
    printf("Código: %c%s\n", estadoJogador2, codigoJogador2);
    printf("Cidade: %s\n", cidadeJogador2);
    printf("População: %ld habitantes\n", populacaoJogador2);
    printf("Área: %.2f km²\n", areaJogador2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadeJogador2);
    printf("PIB: R$ %.2f bilhões\n", pibJogador2);
    printf("PIB per capita: R$ %.2f\n", pibPerCapitaJogador2);
    printf("Pontos Turísticos: %d\n", pontosTuristicosJogador2);

    for (int i = 0; i < 30; i++) {
        printf("-=-");
    }

    printf("\n\nFim do jogo! Obrigado por jogar Super Trunfo - Cidades Brasileiras!\n");

    return 0;
}
