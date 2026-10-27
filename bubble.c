// bubble.c - Implementacao do algoritmo Bubble Sort
// Responsavel: Ana Beatriz

#include <string.h>
#include "bubble.h"

// Ordena os equipamentos em ordem DECRESCENTE de consumo (maior para o menor).
// Os arrays nomes[] e consumo[] sao paralelos: a posicao i representa o mesmo
// equipamento nos dois. Por isso, sempre que trocamos um consumo de lugar,
// trocamos tambem o nome correspondente.

void bubbleSort(char nomes[][30], float consumo[], int n) {
    float auxConsumo;   // guarda temporariamente um consumo durante a troca
    char auxNome[30];   // guarda temporariamente um nome durante a troca
    int trocou;         // 1 se houve troca na passada atual, 0 se nao houve

   // Laco externo: cada passada "empurra" o menor valor restante para o final.
   // Sao no maximo n - 1 passadas.

    for (int i = 0; i < n - 1; i++) {
        trocou = 0;

     // Laco interno: compara elementos ADJACENTES (j e j + 1).
     // A cada passada, o ultimo elemento ja esta no lugar certo,
     // entao o limite diminui em i (n - 1 - i).

        for (int j = 0; j < n - 1 - i; j++) {
        

         // Comparacao: se o da esquerda for MENOR que o da direita,
         // eles estao fora de ordem para o criterio decrescente.

            if (consumo[j] < consumo[j + 1]) {

                // Troca dos consumos usando uma variavel auxiliar

                auxConsumo = consumo[j];
                consumo[j] = consumo[j + 1];
                consumo[j + 1] = auxConsumo;

                // Troca dos nomes, para manter os arrays alinhados

                strcpy(auxNome, nomes[j]);
                strcpy(nomes[j], nomes[j + 1]);
                strcpy(nomes[j + 1], auxNome);

                trocou = 1; // registra que houve troca nesta passada
            }
        }

        // Otimizacao: se uma passada inteira nao fez nenhuma troca,
        // o array ja esta ordenado e podemos parar antes.
        if (trocou == 0) {
            break;
        }
    }
}

            