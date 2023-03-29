# CombSort

Requisitos para usar este código:
Compilador gcc atualizado.

CombSort (ou Combo sort ou ainda algoritmo do pente) é um algoritmo de ordenação relativamente simples feito para organizar em ordem os
elementos de um vetor, onde ele compara e troca as suas posições de acordo com os seus valores. 
Ele é uma melhoria do algoritmo BubbleSort, sendo mais rápido, mais fácil de implementar além de requerer menos espaço de memória. Ele,
diferente do Bubble, remove o problema das "tartarugas" no final do vetor, mas, o que seria isso? De forma resumida, ele evita que
valores muito baixos que estejam no final do vetor, demorem muito para chegarem até o começo, pois o BubbleSort faz as comparações com a
distancia de 1 elemento, o GAP, já no Comb essa distância é igual ao resultado inteiro da divisão do tamanho do vetor por 1,3.
O Algoritmo repetidamente reordena diferentes pares de itens, separados por um salto, que é calculado a cada passagem. Método semelhante 
ao Bubble Sort, porém mais eficiente.
