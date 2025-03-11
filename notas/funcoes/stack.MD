# Pilha de chamada de funções e registros de ativação

- Quando um programa chama uma função, a função chamada precisa saber como retornar ao chamador, de modo que o endereço de retorno da função chamadora é colocado na _pilha de execução do programa_ (as vezes chamada de _pilha de chamada de função_). Se houver uma série de chamadas de função, os endereços de retorno sucessivos são empilhados na ordem _LIFO_, de modo que cada função possa retornar à sua chamadora.
- A pilha de execução do programa também contém a memória para as variáveis locais usadas em cada chamada de fnção durante a execução do programa.
