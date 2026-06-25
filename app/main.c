#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX 100
struct itens_lista {
  char nome[100];
  float preco;
};

typedef struct Lista {
  int tamanho_lista;
  int tamanho_maximo_daLista;
  int *v;
} Lista;

int iniciando_lista(Lista **lista) {
  Lista *list = (Lista *)malloc(sizeof(Lista));
  if (!list) {
    return 0;
  }
  list->tamanho_lista = 0;
  list->tamanho_maximo_daLista = MAX;
  list->v = (int *)malloc(list->tamanho_maximo_daLista * sizeof(int));
  if (!(list->v)) {
    return 0;
  }
  *lista = list;
  return 1;
}
int main(int argc, char *argv[]) {
  //
  return EXIT_SUCCESS;
}
