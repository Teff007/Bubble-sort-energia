/*
 * Fluxo do programa:
 *  1. Mostra o cabecalho
 *  2. Carrega os dados dos equipamentos
 *  3. Informa o criterio de ordenacao
 *  4. Exibe os dados ANTES da ordenacao
 *  5. Ordena com Bubble Sort
 *  6. Exibe os dados DEPOIS da ordenacao
 *  7. Exibe o resumo final
 */

#include <stdio.h>
#include "dados.h"       // TAM e carregarDados()
#include "bubble.h"      // bubbleSort()
#include "interface.h"   // funcoes de exibicao no terminal

int main(void) {
    // Arrays paralelos: o indice i representa o mesmo equipamento nos dois
    char nomes[TAM][30];   // nome de cada equipamento
    float consumo[TAM];    // consumo mensal em kWh

    // 1. Titulo e explicacao do problema
    exibirCabecalho();

    // 2. Preenche os arrays com os dados dos equipamentos
    carregarDados(nomes, consumo);

    // 3. Informa ao usuario o criterio: ordem DECRESCENTE (maior consumo primeiro)
    exibirCriterio();

    // 4. Mostra os dados na ordem original (sem ordenar)
    exibirTabela(nomes, consumo, TAM, "ANTES DA ORDENACAO");

    // 5. Ordena do maior para o menor consumo (Bubble Sort, sem qsort)
    bubbleSort(nomes, consumo, TAM);

    // 6. Mostra os dados ja ordenados
    exibirTabela(nomes, consumo, TAM, "DEPOIS DA ORDENACAO");

    // 7. Rodape: maior e menor consumo e mensagem final
    exibirResumo(nomes, consumo, TAM);

    return 0;
}
