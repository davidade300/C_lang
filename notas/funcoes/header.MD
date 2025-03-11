# Cabeçalho de funções

- Cada biblioteca padrão contém um cabeçalho correspondente que contém os protótipos de função para todas as funções nessa biblioteca, e definição de vários tipos de dados e constantes necessárias a essas funções. É possível criar cabeçalhos personalizados. Os cabeçalhos definidos pelo programador também devem usar a extensão de arquivo __.h__. Um cabeçalho definido pelo programador pode ser incluído utilizando-se a diretiva do pré-processador __#include__.
- _ver página 124 do livro para os principáis cabeçalhos inclusivos_.

## Chamando funções por valor e referência

- Quando argumentos são passador por __valor__, uma cópia do valor do argumento é feita e passada para a função chamada. As mudanças na copia não afetam o valor original da variável na chamadora.
  - A chamada por valor deverá ser usada sempre que a função chamada não precise modificar o valor da variável original da chamadora. Isso evita efeitos colaterais(modificações de variável) acidentais.
- Quando um argumento é passado por referência, o chamador permite que a função chamada modifique o valor da variável original.
  - Deve ser usada apenas nos casos de funções chamadoras confiáveis, que precisam modificar a variável original.
- __Em C, todas as chamadas são feitas por valor, sendo possível simular a chamada por referência usando operadores de endereço e operadores de indireção__
