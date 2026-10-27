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

<!-- Pessoa 3: complete esta seção -->

---

## Exemplo de Entrada e Saída

<!-- Pessoa 4: complete esta seção -->

---

## Tecnologias Utilizadas

<!-- Pessoa 4: complete esta seção -->


### Módulo de Interface (interface.c / interface.h)

**Safira** 

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
