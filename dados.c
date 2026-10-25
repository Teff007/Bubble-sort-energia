// Criação do dados.c versão 1.0 minha parte, Helena

#include <stdio.h>
#include <string.h>
#include "dados.h"

// Função que preenche os arrays com os dados dos 12 equipamentos e seus consumos
void carregarDados(char nomes[][30], float consumo[]) {
    char listaNomes[TAM][30] = {
        "Chuveiro Eletrico",
        "Ar-Condicionado",
        "Geladeira",
        "Maquina de Lavar",
        "Ferro de Passar",
        "Micro-ondas",
        "Televisao",
        "Computador",
        "Secador de Cabelo",
        "Lampadas LED",
        "Air Fryer",
        "Cafeteira Eletrica"
    };

    // Consumo mensal correspondente em kWh baseado no google
    float listaConsumo[TAM] = {
        120.5, // Chuveiro Eletrico
        150.0, // Ar-Condicionado
        45.2,  // Geladeira
        25.0,  // Maquina de Lavar
        15.5,  // Ferro de Passar
        12.0,  // Micro-ondas
        18.0,  // Televisao
        30.0,  // Computador
        20.0,  // Secador de Cabelo
        10.0,  // Lampadas LED
        35.4,  // Air Fryer
        14.2   // Cafeteira Eletrica
    };

    // Copiando os valores para os arrays principais do programa
    for (int i = 0; i < TAM; i++) {
        strcpy(nomes[i], listaNomes[i]);
        consumo[i] = listaConsumo[i];
    }
}
