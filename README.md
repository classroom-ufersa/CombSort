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
A vantagem de usar o combsort, pois como muitos outros algoritmos eficientes de ordenação (como o quick sort ou merge sort), o comb sort é mais eficaz em suas passagens anteriores do que durante o passo final, quando ele se assemelha a um bubble sort. O Comb sort pode ser mais eficaz se o método de classificação é mudado uma vez que os gaps cheguem a um número pequeno o suficiente.
A complexidade de tempo médio do algoritmo é Ω(N2/2p), onde p é o número de incrementos. A complexidade do pior caso desse algoritmo é O(n2) e a complexidade do melhor caso é O(nlogn).

Links para videos de Apoio:

Video Aula: https://drive.google.com/file/d/1QUUf2CBhL_hzad_gtHJKISgInXtzYRHm/view

Exemplo Prático: https://drive.google.com/file/d/1lPD10WKBUZ6VN0sqh4WIZRA_Q4PaCheD/view?usp=sharing
