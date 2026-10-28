<div align="center">

# ⚡ Bubble Sort — Controle de Consumo de Energia

**Descubra quais eletrodomésticos são os maiores "vilões" da sua conta de luz.**

![Linguagem C](https://img.shields.io/badge/Linguagem-C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Algoritmo](https://img.shields.io/badge/Algoritmo-Bubble%20Sort-FF6B35?style=for-the-badge&logo=thealgorithms&logoColor=white)
![Compilador](https://img.shields.io/badge/Compilador-GCC-A42E2B?style=for-the-badge&logo=gnu&logoColor=white)
![Status](https://img.shields.io/badge/Status-Em%20desenvolvimento-F1C40F?style=for-the-badge)

![Git](https://img.shields.io/badge/Git-F05032?style=flat-square&logo=git&logoColor=white)
![GitHub](https://img.shields.io/badge/GitHub-181717?style=flat-square&logo=github&logoColor=white)
![VS Code](https://img.shields.io/badge/VS%20Code-007ACC?style=flat-square&logo=visualstudiocode&logoColor=white)
![OnlineGDB](https://img.shields.io/badge/OnlineGDB-Compat%C3%ADvel-2E86C1?style=flat-square)
![Plataforma](https://img.shields.io/badge/Plataforma-Terminal-4EAA25?style=flat-square&logo=gnubash&logoColor=white)
![Contribuidoras](https://img.shields.io/badge/Contribuidoras-4-E91E63?style=flat-square&logo=github&logoColor=white)

</div>

---

## 📚 Informações Acadêmicas

| | |
|---|---|
| **Disciplina** | Algoritmos e Pensamento Computacional |
| **Professora** | Karla |

---

## 📑 Sumário

- [Alunas](#-alunas)
- [Integrantes e Responsabilidades](#-integrantes-e-responsabilidades)
- [Descrição do Problema](#-descrição-do-problema-cotidiano)
- [Objetivo da Aplicação](#-objetivo-da-aplicação)
- [Estrutura do Projeto](#-estrutura-do-projeto)
- [Como Executar](#-como-executar)
- [Funcionamento do Bubble Sort](#-funcionamento-do-bubble-sort)
- [Exemplo de Entrada e Saída](#-exemplo-de-entrada-e-saída)
- [Módulo de Interface](#-módulo-de-interface-interfacec--interfaceh)
- [Tecnologias Utilizadas](#-tecnologias-utilizadas)

---

## 👩‍💻 Alunas

- Ana Beatriz Oliveira de Assis
- Helena Botelho de Moraes Costa
- Safira Assunção de Carvalho
- Stéffany Christiny Bezerra Rodrigues

---

## 🤝 Integrantes e Responsabilidades

| Integrante | Responsabilidade | Arquivos |
|---|---|---|
| Stéffany | Programa principal e integração | `main.c` |
| Helena | Dados | `dados.c`, `dados.h` |
| Ana Beatriz | Algoritmo Bubble Sort | `bubble.c`, `bubble.h` |
| Safira | Interface no terminal | `interface.c`, `interface.h` |

---

## 🏠 Descrição do Problema Cotidiano

No dia a dia, muitas famílias enfrentam dificuldades para entender o impacto financeiro e energético de cada eletrodoméstico na conta de luz. Sem uma visualização clara de quais aparelhos consomem mais eletricidade, torna-se difícil planejar ações de economia ou uso consciente da energia em casa.

---

## 🎯 Objetivo da Aplicação

Desenvolver um programa em linguagem C que armazene o consumo mensal (em kWh) de **12 equipamentos residenciais** utilizando estruturas de dados adequadas. A aplicação serve de base para o algoritmo **Bubble Sort**, permitindo organizar os dados de forma **decrescente** para identificar rapidamente os principais "vilões" do consumo de energia.

---

## 📁 Estrutura do Projeto

```
.
├── main.c
├── dados.c
├── dados.h
├── bubble.c
├── bubble.h
├── interface.c
└── interface.h
```

---

## ▶️ Como Executar

### Online

É possível rodar o projeto no [OnlineGDB](https://www.onlinegdb.com/online_c_compiler), criando os arquivos `.c` e `.h` no mesmo ambiente e executando o `main.c`.

### Localmente com GCC

```bash
gcc main.c dados.c bubble.c interface.c -o consumo
./consumo
```

---

## 🫧 Funcionamento do Bubble Sort

O **Bubble Sort** (ordenação por bolha) compara pares de elementos vizinhos de um array e troca os dois de lugar quando estão fora da ordem desejada. Esse processo se repete em várias passadas pelo array, até que todos os elementos estejam ordenados.

### Passo a passo

1. **Passada:** o laço externo (`i`) controla as passadas. São no máximo `n - 1`.
2. **Comparação:** o laço interno (`j`) compara `consumo[j]` com `consumo[j + 1]`, ou seja, dois elementos adjacentes.
3. **Troca:** se `consumo[j] < consumo[j + 1]`, os dois estão fora de ordem para o critério decrescente e são trocados, usando uma variável auxiliar. O nome do equipamento também é trocado, para que os arrays continuem alinhados.
4. **Fim da passada:** ao terminar uma passada, o menor valor restante já está no final do array. Por isso, a passada seguinte compara um elemento a menos (`n - 1 - i`).
5. **Parada antecipada:** se uma passada inteira ocorrer sem nenhuma troca, o array já está ordenado e o algoritmo para antes do fim.

---

## 🧪 Exemplo de Entrada e Saída

Os dados dos 12 equipamentos estão definidos no código, em `dados.c`. Por isso, o programa **não pede entrada do usuário**: basta executá-lo.

### Entrada (dados carregados)

| Equipamento | Consumo mensal (kWh) |
|---|---:|
| Chuveiro Elétrico | 120.5 |
| Ar-Condicionado | 150.0 |
| Geladeira | 45.2 |
| Máquina de Lavar | 25.0 |
| Ferro de Passar | 15.5 |
| Micro-ondas | 12.0 |
| Televisão | 18.0 |
| Computador | 30.0 |
| Secador de Cabelo | 20.0 |
| Lâmpadas LED | 10.0 |
| Air Fryer | 35.4 |
| Cafeteira Elétrica | 14.2 |

### Saída no terminal

```
=============================================
 CONTROLE DE CONSUMO DE ENERGIA
 Ordenacao com Bubble Sort
=============================================
Problema: descobrir quais eletrodomesticos
consomem mais energia na conta de luz.

Criterio de ordenacao: DECRESCENTE
(do maior para o menor consumo)

--- ANTES DA ORDENACAO ---
 1. Chuveiro Eletrico      120.5 kWh
 2. Ar-Condicionado        150.0 kWh
 3. Geladeira               45.2 kWh
 4. Maquina de Lavar        25.0 kWh
 5. Ferro de Passar         15.5 kWh
 6. Micro-ondas             12.0 kWh
 7. Televisao               18.0 kWh
 8. Computador              30.0 kWh
 9. Secador de Cabelo       20.0 kWh
10. Lampadas LED            10.0 kWh
11. Air Fryer               35.4 kWh
12. Cafeteira Eletrica      14.2 kWh

--- DEPOIS DA ORDENACAO ---
 1. Ar-Condicionado        150.0 kWh
 2. Chuveiro Eletrico      120.5 kWh
 3. Geladeira               45.2 kWh
 4. Air Fryer               35.4 kWh
 5. Computador              30.0 kWh
 6. Maquina de Lavar        25.0 kWh
 7. Secador de Cabelo       20.0 kWh
 8. Televisao               18.0 kWh
 9. Ferro de Passar         15.5 kWh
10. Cafeteira Eletrica      14.2 kWh
11. Micro-ondas             12.0 kWh
12. Lampadas LED            10.0 kWh

=============== RESUMO ===============
Maior consumo: Ar-Condicionado (150.0 kWh)
Menor consumo: Lampadas LED (10.0 kWh)
Dica: priorize economizar nos maiores consumos!
======================================
```

---

## 🖥️ Módulo de Interface (`interface.c` / `interface.h`)

**Responsável:** Safira

Este módulo cuida de tudo o que aparece na tela (terminal). Ele não ordena nem guarda dados: apenas mostra as informações de forma clara e organizada para o usuário.

### Arquivos

- `interface.h`: lista (protótipos) das funções, para o `main.c` poder usá-las.
- `interface.c`: código das funções.

### Funções implementadas

| Função | Descrição |
|---|---|
| `exibirCabecalho()` | Mostra o título do programa e explica o problema (descobrir quais eletrodomésticos consomem mais energia). |
| `exibirCriterio()` | Informa ao usuário que a ordenação é decrescente (do maior para o menor consumo). |
| `exibirTabela()` | Mostra a lista de equipamentos com o consumo em kWh. É usada duas vezes: antes e depois da ordenação. |
| `exibirResumo()` | Encontra e mostra o equipamento de maior e o de menor consumo. |

### Como funciona

- **`exibirTabela`** recebe o array de nomes, o array de consumos, a quantidade de itens e um título. Um laço `for` percorre os itens e imprime uma linha para cada equipamento, com número, nome e consumo alinhados.
- **`exibirResumo`** guarda a posição do maior e do menor consumo. Percorre o array comparando cada valor com o maior e o menor encontrados até o momento, atualizando as posições quando necessário.

### Tecnologias usadas neste módulo

- Linguagem C, biblioteca `stdio.h` (função `printf`)
- Estruturas de repetição (`for`) e condicionais (`if`)
- Testado localmente com GCC no Visual Studio Code

---

## 🛠️ Tecnologias Utilizadas

| Tecnologia | Uso |
|---|---|
| **Linguagem C** | Implementação integral do programa |
| **GCC** | Compilador usado para compilar e executar |
| **Git** | Controle de versão do projeto |
| **GitHub** | Hospedagem do repositório e Pull Requests |
| **GitHub Desktop** | Interface usada para commits, branches e push |
| **Visual Studio Code** | Editor de código |
| **OnlineGDB** | Alternativa online para compilar e testar o programa |

---

<div align="center">

Feito com 💙 por Ana Beatriz, Helena, Safira e Stéffany

</div>
