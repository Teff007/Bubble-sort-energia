#ifndef INTERFACE_H
#define INTERFACE_H

void exibirCabecalho(void);
void exibirCriterio(void);
void exibirTabela(char nomes[][30], float consumo[], int n, const char *titulo);
void exibirResumo(char nomes[][30], float consumo[], int n);

#endif
