#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX 3
typedef struct itens_lista {
  char nome[100];
  float preco;
} itens_lista;

typedef struct Lista {
  int tamanho_lista;
  int tamanho_maximo_daLista;
  itens_lista *dados;
} Lista;

int inserir(Lista *list, itens_lista value) {
  if (!list) {
    return 0;
  }
  if (list->tamanho_lista == list->tamanho_maximo_daLista) {
    if (redimensionar(list)) {
      list->dados[list->tamanho_lista] = value;
      list->tamanho_lista++;
      return 1;
    }
    return 0;
  }
  list->dados[list->tamanho_lista++] = value;
  return 1;
}
int iniciando_lista(Lista **lista) {
  Lista *list = (Lista *)malloc(sizeof(Lista));
  if (!list) {
    return 0;
  }
  list->tamanho_lista = 0;
  list->tamanho_maximo_daLista = MAX;
  list->dados =
      (itens_lista *)malloc(list->tamanho_maximo_daLista * sizeof(itens_lista));
  if (!(list->dados)) {
    return 0;
  }
  *lista = list;
  return 1;
}
int main(int argc, char *argv[]) { return EXIT_SUCCESS; }
