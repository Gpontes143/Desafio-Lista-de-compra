#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

int redimensionar(Lista *list) {
  if (!list)
    return 0; // evitar retonar null list->tamanho_maximo_daLista *= 2; //
              // multiplica por 2?
  list->dados = (itens_lista *)realloc(
      list->dados, list->tamanho_maximo_daLista * sizeof(itens_lista));
  return 1;
}
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
void ui() {
  printf("Lista de compras\n");
  printf("1. Visualizar sua lista\n");
  printf("2. Adicionar itens na sua Lista\n");
  printf("3. Remover itens da sua Lista\n");
  printf("4. Sair\n");
}
void interface(Lista *list, itens_lista valor) {
  int escolha = 0;
  while (escolha != 4) {
    ui();
    scanf("%d", &escolha);
    switch (escolha) {
    case 1:
      if (list->tamanho_lista != 0) {
        printf("Item no índice 0: %s - R$ %.2f\n", list->dados[0].nome,
               list->dados[0].preco);
      }
      printf("Não tem itens na lista");
    case 2:
      printf("Coloque o nome do produto\n");
      fgets(valor.nome, sizeof(valor.nome), stdin);
      printf("Qual o valor do produto?\n");
      scanf(" %f", &valor.preco);
      inserir(list, valor);
      printf("Item no índice 0: %s - R$ %.2f\n", list->dados[0].nome,
             list->dados[0].preco);
    }
  }
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
int main(int argc, char *argv[]) {
  Lista *list = NULL;
  if (!iniciando_lista(&list)) {
    printf("Erro ao iniciar array\n");
    return 1;
  }
  itens_lista valor;
  interface(list, valor);
  return EXIT_SUCCESS;
}
