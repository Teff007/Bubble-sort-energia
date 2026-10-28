#  Bubble Sort - Controle de Consumo de Energia

![Linguagem](https://img.shields.io/badge/linguagem-C-blue)
![Algoritmo](https://img.shields.io/badge/algoritmo-Bubble%20Sort-orange)
![Status](https://img.shields.io/badge/status-em%20desenvolvimento-yellow)

**Disciplina:** Algoritmos e Pensamento Computacional
**Professora:** Karla

##  Alunas

- Ana Beatriz
- Helena Botelho
- Safira Assunção
- Stéffany Christiny Bezerra Rodrigues

---

## Integrantes e Responsabilidades

| Integrante | Responsabilidade | Arquivos |
|---|---|---|
| Stéffany | Programa principal e integração | `main.c` |
| Helena | Dados | `dados.c`, `dados.h` |
| Ana Beatriz | Algoritmo Bubble Sort | `bubble.c`, `bubble.h` |
| Safira | Interface no terminal | `interface.c`, `interface.h` |

---

##  Descrição do Problema Cotidiano

No dia a dia, muitas famílias enfrentam dificuldades para entender o impacto financeiro e energético de cada eletrodoméstico na conta de luz. Sem uma visualização clara de quais aparelhos consomem mais eletricidade, torna-se difícil planejar ações de economia ou uso consciente da energia em casa.

---

##  Objetivo da Aplicação

Desenvolver um programa em linguagem C que armazene o consumo mensal (em kWh) de 12 equipamentos residenciais utilizando estruturas de dados adequadas. A aplicação serve de base para a aplicação do algoritmo Bubble Sort, permitindo organizar os dados de forma decrescente para identificar rapidamente os principais "vilões" do consumo de energia.

---

## Estrutura do Projeto

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

##  Como Executar

É possível rodar o projeto no [OnlineGDB](https://www.onlinegdb.com/online_c_compiler), criando os arquivos `.c` e `.h` no mesmo ambiente e executando o `main.c`.

Para compilar localmente com o GCC:

```bash
gcc main.c dados.c bubble.c interface.c -o consumo
./consumo
```

---

##  Funcionamento do Bubble Sort

O Bubble Sort (ordenação por bolha) é um algoritmo de ordenação que compara pares de elementos vizinhos de um array e troca os dois de lugar quando eles estão fora da ordem desejada. Esse processo se repete em várias passadas pelo array, até que todos os elementos estejam ordenados.

Passo a passo do algoritmo
Passada: o laço externo (i) controla as passadas. São no máximo n - 1.
Comparação: o laço interno (j) compara consumo[j] com consumo[j + 1], ou seja, dois elementos adjacentes.
Troca: se consumo[j] < consumo[j + 1], os dois estão fora de ordem para o critério decrescente e são trocados, usando uma variável auxiliar. O nome do equipamento também é trocado, para que os arrays continuem alinhados.
Fim da passada: ao terminar uma passada, o menor valor restante já está no final do array. Por isso, a passada seguinte compara um elemento a menos (n - 1 - i).
Parada antecipada: se uma passada inteira ocorrer sem nenhuma troca, o array já está ordenado e o algoritmo para antes do fim.

---

## Exemplo de Entrada e Saída

Os dados dos 12 equipamentos estão definidos no código, em dados.c. Por isso, o programa não pede entrada do usuário: basta executá-lo.

Entrada (dados carregados)
Equipamento	Consumo mensal (kWh)

Chuveiro Eletrico:	120.5

Ar-Condicionado:	150.0

Geladeira:	45.2

Maquina de Lavar:	25.0

Ferro de Passar:	15.5

Micro-ondas:	12.0

Televisao:	18.0

Computador:	30.0

Secador de Cabelo:	20.0

Lampadas LED:	10.0

Air Fryer:	35.4

Cafeteira Eletrica:	14.2

Saída no terminal
---------------------------------------------
 CONTROLE DE CONSUMO DE ENERGIA
 Ordenacao com Bubble Sort
---------------------------------------------
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

--------------- RESUMO ---------------
Maior consumo: Ar-Condicionado (150.0 kWh)
Menor consumo: Lampadas LED (10.0 kWh)
Dica: priorize economizar nos maiores consumos!
--------------------------------------

---

# Tecnologias Utilizadas

Linguagem C: implementação integral do programa
GCC: compilador usado para compilar e executar
Git: controle de versão do projeto
GitHub: hospedagem do repositório e Pull Requests
GitHub Desktop: interface usada para commits, branches e push
Visual Studio Code: editor de código
OnlineGDB: alternativa online para compilar e testar o programa


### **Safira** 
#### Módulo de Interface (interface.c / interface.h) 


Este módulo cuida de tudo o que aparece na tela (terminal). Ele não ordena nem
guarda dados, só mostra as informações de forma clara e organizada para o usuário.

#### Arquivos
- interface.h: lista (protótipos) das funções, para o main.c poder usá-las.
- interface.c: código das funções.

#### Funções implementadas

 Função 

 exibirCabecalho()  Mostra o título do programa e explica o problema (descobrir quais eletrodomésticos consomem mais energia). 
 exibirCriterio()  Informa ao usuário que a ordenação é decrescente (do maior para o menor consumo). 
 exibirTabela()  Mostra a lista de equipamentos com o consumo em kWh. É usada duas vezes: antes e depois da ordenação. 
 exibirResumo()  Encontra e mostra o equipamento de maior e o de menor consumo. 

#### Como funciona
- **exibirTabela** recebe o array de nomes, o array de consumos, a quantidade de
  itens e um título. Um laço for percorre os itens e imprime uma linha para cada
  equipamento, com número, nome e consumo alinhados.
- **exibirResumo** guarda a posição do maior e do menor consumo. Percorre o array
  comparando cada valor com o maior e o menor encontrados até o momento,
  atualizando as posições quando necessário.

#### Tecnologias usadas neste módulo
- Linguagem C, biblioteca stdio.h (função printf)
- Estruturas de repetição (for) e condicionais (if)
- Testado localmente com GCC no Visual Studio Code
