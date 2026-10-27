// Implementa funcoes de exibicao no terminal

#include <stdio.h>
#include "interface.h"

void exibirCabecalho(void) {
    printf("=============================================\n");
    printf("   CONTROLE DE CONSUMO DE ENERGIA\n");
    printf("   Ordenacao com Bubble Sort\n");
    printf("=============================================\n");
    printf("Problema: descobrir quais eletrodomesticos\n");
    printf("consomem mais energia na conta de luz.\n\n");
}

void exibirCriterio(void) {
    printf("Criterio de ordenacao: DECRESCENTE\n");
    printf("(do maior para o menor consumo)\n\n");
}

void exibirTabela(char nomes[][30], float consumo[], int n, const char *titulo) {
    printf("--- %s ---\n", titulo);

    
    for (int i = 0; i < n; i++) {
        printf("%2d. %-20s %7.1f kWh\n", i + 1, nomes[i], consumo[i]);
    }
    printf("\n");
}

void exibirResumo(char nomes[][30], float consumo[], int n) {
    int posMaior = 0;  // posicao do maior consumo encontrado ate agora
    int posMenor = 0;  // posicao do menor consumo encontrado ate agora

    for (int i = 1; i < n; i++) {
        if (consumo[i] > consumo[posMaior]) {
            posMaior = i;
        }
        if (consumo[i] < consumo[posMenor]) {
            posMenor = i;
        }
    }

    printf("=============== RESUMO ===============\n");
    printf("Maior consumo: %s (%.1f kWh)\n", nomes[posMaior], consumo[posMaior]);
    printf("Menor consumo: %s (%.1f kWh)\n", nomes[posMenor], consumo[posMenor]);
    printf("Dica: priorize economizar nos maiores consumos!\n");
    printf("======================================\n");
}
