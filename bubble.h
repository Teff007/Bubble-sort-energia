// bubble.h - Declaracao do algoritmo Bubble Sort
// Responsavel: Ana Beatriz

#ifndef BUBBLE_H
#define BUBBLE_H

/*
 * bubbleSort
 * Ordena os equipamentos em ordem DECRESCENTE de consumo
 * (do maior para o menor) usando o algoritmo Bubble Sort.
 *
 * Parametros:
 *   nomes   - matriz com o nome de cada equipamento (ate 30 caracteres)
 *   consumo - consumo mensal de cada equipamento, em kWh
 *   n       - quantidade de elementos dos arrays (TAM, definido em dados.h)
 *
 * Observacoes:
 *   - nomes[] e consumo[] sao arrays paralelos: a posicao i representa o
 *     mesmo equipamento nos dois. Por isso, a cada troca de consumos o nome
 *     correspondente tambem e trocado, mantendo os arrays alinhados.
 *   - A funcao altera os proprios arrays recebidos (nao retorna valor).
 *   - A implementacao esta em bubble.c.
 */
void bubbleSort(char nomes[][30], float consumo[], int n);

#endif