# O que é um array

Uma estrututa que agrupa diversos elementos, possui *tamanho fixo* e ocupa um *espaço contíguo* na memoria
que nos permite acessar seus elementos a partir de um ponteiro no primeiro elemento [0]

# O que é um *Array Dinâmico*

O Array Dinâmico é uma estrutura de dados que internamente possui um espaço contíguo na memória, no entanto, quando a capacidade chega no limite máximo, o vetor é realocado para um tamanho maior que o anterior em tempo de execução.

# Por que usar Array Dinamico ao inves de um array normal

Em uma lista o usuario consegue e deve criar, modificar e deletar itens de uma lista, ao usar um array normal isso pode acontecer:

```c
lista[2];
/*
Nesse caso a lista aguenta apenas dois elementos e rapidamente ira lotar, voce pode pensar apenas alocar mais memoria
o que funciona mas é um desperdicio de recurso
*/
```

Por isso usamos o array dinamico onde a lista ira aumentar de tamanho naturalmente

# O que uma lista deve conseguir fazer

1. Inicializar -> Voce nao tem uma lista do nada
2. inserir -> Voce tem que conseguir adicionar novos elementos
3. deletar -> Voce tem que apagar um item da lista se quiser
4. tamanho -> Quanto itens tem sua lista
5. get -> Qual item esta no index x voce tem que saber
6. set -> Coloquei ketchup no index 2 sendo que era pra ser mostarda, tenho que conseguir arrumar
