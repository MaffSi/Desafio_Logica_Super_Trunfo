#include <stdio.h>

int main() {
    // Dados dos jogadores
    char estadoJogador1, estadoJogador2;
    char codigoJogador1[3], codigoJogador2[3];
    char cidadeJogador1[20], cidadeJogador2[20];
    float areaJogador1, areaJogador2;
    float pibJogador1, pibJogador2;
    int populacaoJogador1, populacaoJogador2;
    int pontosTuristicosJogador1, pontosTuristicosJogador2;

    float densidadeJogador1, densidadeJogador2;
    float pibPerCapitaJogador1, pibPerCapitaJogador2;

    printf("[SUPER TRUNFO - CIDADES BRASILEIRAS]\n");

    // Cadastro Jogador 1
    printf("\n=== Cadastro Jogador 1 ===\n");
    printf("Primeira letra do estado: ");
    scanf(" %c", &estadoJogador1);

    printf("Código (ex: 01, 02): ");
    scanf("%2s", codigoJogador1);

    printf("Nome da cidade: ");
    scanf("%19s", cidadeJogador1);

    printf("População (em número de habitantes): ");
    scanf("%d", &populacaoJogador1);

    printf("Área da cidade (em km²): ");
    scanf("%f", &areaJogador1);

    printf("PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pibJogador1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicosJogador1);

    // Cadastro Jogador 2
    printf("\n=== Cadastro Jogador 2 ===\n");
    printf("Primeira letra do estado: ");
    scanf(" %c", &estadoJogador2);

    printf("Código (ex: 01, 02): ");
    scanf("%2s", codigoJogador2);

    printf("Nome da cidade: ");
    scanf("%19s", cidadeJogador2);

    printf("População (em número de habitantes): ");
    scanf("%d", &populacaoJogador2);

    printf("Área da cidade (em km²): ");
    scanf("%f", &areaJogador2);

    printf("PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pibJogador2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicosJogador2);

    // Cálculos derivados
    densidadeJogador1 = populacaoJogador1 / areaJogador1;
    densidadeJogador2 = populacaoJogador2 / areaJogador2;

    pibPerCapitaJogador1 = (pibJogador1 * 1000000000) / populacaoJogador1;
    pibPerCapitaJogador2 = (pibJogador2 * 1000000000) / populacaoJogador2;

    // Exibição das Cartas
    printf("\n================ CARTAS =================\n");

    printf("\nJogador 1 - %s (%c%s)\n", cidadeJogador1, estadoJogador1, codigoJogador1);
    printf("População: %d habitantes\n", populacaoJogador1);
    printf("Área: %.2f km²\n", areaJogador1);
    printf("PIB: %.2f bilhões\n", pibJogador1);
    printf("Pontos Turísticos: %d\n", pontosTuristicosJogador1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadeJogador1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapitaJogador1);

    printf("\nJogador 2 - %s (%c%s)\n", cidadeJogador2, estadoJogador2, codigoJogador2);
    printf("População: %d habitantes\n", populacaoJogador2);
    printf("Área: %.2f km²\n", areaJogador2);
    printf("PIB: %.2f bilhões\n", pibJogador2);
    printf("Pontos Turísticos: %d\n", pontosTuristicosJogador2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadeJogador2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapitaJogador2);

    // Menu de Comparações
    int escolha;
    printf("\n=========== MENU DE COMPARAÇÃO ===========\n");
    printf("1 - Comparar por um único atributo (if/else)\n");
    printf("2 - Comparar múltiplos atributos (switch + operadores lógicos)\n");
    printf("3 - Comparar dois atributos + operador ternário\n");
    printf("Escolha uma opção: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1: {
            printf("\nQual atributo deseja comparar?\n");
            printf("1 - População\n");
            printf("2 - PIB\n");
            printf("3 - Área\n");
            printf("4 - Pontos Turísticos\n");
            int atributo;
            printf("Digite a opção: ");
            scanf("%d", &atributo);

            if (atributo == 1) {
                if (populacaoJogador1 > populacaoJogador2)
                    printf("Jogador 1 vence na População!\n");
                else if (populacaoJogador2 > populacaoJogador1)
                    printf("Jogador 2 vence na População!\n");
                else
                    printf("Empate na População!\n");
            } else if (atributo == 2) {
                if (pibJogador1 > pibJogador2)
                    printf("Jogador 1 vence no PIB!\n");
                else if (pibJogador2 > pibJogador1)
                    printf("Jogador 2 vence no PIB!\n");
                else
                    printf("Empate no PIB!\n");
            } else if (atributo == 3) {
                if (areaJogador1 > areaJogador2)
                    printf("Jogador 1 vence na Área!\n");
                else if (areaJogador2 > areaJogador1)
                    printf("Jogador 2 vence na Área!\n");
                else
                    printf("Empate na Área!\n");
            } else if (atributo == 4) {
                if (pontosTuristicosJogador1 > pontosTuristicosJogador2)
                    printf("Jogador 1 vence nos Pontos Turísticos!\n");
                else if (pontosTuristicosJogador2 > pontosTuristicosJogador1)
                    printf("Jogador 2 vence nos Pontos Turísticos!\n");
                else
                    printf("Empate nos Pontos Turísticos!\n");
            } else {
                printf("Atributo inválido!\n");
            }
            break;
        }

        case 2: {
            printf("\nEscolha o tipo de comparação múltipla:\n");
            printf("1 - População E Área (ambos precisam ser maiores)\n");
            printf("2 - PIB OU Pontos Turísticos (basta um ser maior)\n");
            int tipo;
            printf("Digite a opção: ");
            scanf("%d", &tipo);

            switch (tipo) {
                case 1:
                    if ((populacaoJogador1 > populacaoJogador2) && (areaJogador1 > areaJogador2))
                        printf("Jogador 1 vence por ter mais População E mais Área!\n");
                    else if ((populacaoJogador2 > populacaoJogador1) && (areaJogador2 > areaJogador1))
                        printf("Jogador 2 vence por ter mais População E mais Área!\n");
                    else
                        printf("Ninguém venceu. Nenhum jogador tem os dois atributos maiores.\n");
                    break;

                case 2:
                    if ((pibJogador1 > pibJogador2) || (pontosTuristicosJogador1 > pontosTuristicosJogador2))
                        printf("Jogador 1 vence por ter maior PIB ou mais pontos turísticos!\n");
                    else if ((pibJogador2 > pibJogador1) || (pontosTuristicosJogador2 > pontosTuristicosJogador1))
                        printf("Jogador 2 vence por ter maior PIB ou mais pontos turísticos!\n");
                    else
                        printf("Empate!\n");
                    break;

                default:
                    printf("Opção inválida!\n");
            }
            break;
        }

        case 3: {
            printf("\nComparação com dois atributos usando operador ternário (PIB per capita E Densidade Populacional):\n");

            int jogador1Vence = (pibPerCapitaJogador1 > pibPerCapitaJogador2) && (densidadeJogador1 > densidadeJogador2) ? 1 : 0;
            int jogador2Vence = (pibPerCapitaJogador2 > pibPerCapitaJogador1) && (densidadeJogador2 > densidadeJogador1) ? 1 : 0;

            if (jogador1Vence)
                printf("Jogador 1 vence por ter maior PIB per capita E maior Densidade!\n");
            else if (jogador2Vence)
                printf("Jogador 2 vence por ter maior PIB per capita E maior Densidade!\n");
            else
                printf("Nenhum jogador venceu! Ninguém teve os dois atributos maiores ao mesmo tempo.\n");

            break;
        }

        default:
            printf("Opção inválida!\n");
    }

    printf("\n==== FIM DO JOGO ====\n");

    return 0;
}
