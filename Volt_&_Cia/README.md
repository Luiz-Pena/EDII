
#### Busca Sequencial:

O algoritmo de busca sequencial foi abordado por meio de escolhas que o usuário recebe, em seguida é feito uma leitura do char ligado a aquela escolha, as escolhas são de coletar os itens, seguir em frente, voltar e terminar a busca. O objetivo nessa fase foi fazer uma busca em um armazém desordenado para conseguir todos os resistores dispostos. Após conseguir todos os resistores o jogador finaliza a fase ao terminar a busca. 
O algoritmo de busca sequencial possui complexidade O(n), onde o algoritmo percorre toda estrutura que está os dados. Nesse caso, o jogador precisa percorrer todo a estrutura em busca de resistores, então essa complexidade também é do caso médio/melhor caso.

#### Busca Binaria:

A busca binaria, desta vez, não possui como objetivo buscar diversos componentes, mas sim um componente específico. No caso anterior o armazém que é percorrido está desorganizado, contudo, desta vez, ele está ordenado, uma vez que essa característica é necessária para realizar uma busca com esse algoritmo. 
A busca binaria possui complexidade O(log n), sendo uma grande vantagem em comparação ao algoritmo anterior, já que em poucos casos o item a ser buscado é encontrado. 
Similar a busca sequencial o jogador recebe escolhas e o sistema recebe um char correspondente a essa escolha.

#### Busca em texto:

Seguindo o padrão das duas ultimas buscas, o usuário recebe escolhas e ele precisa faze-las para concluir a fase, porém desta vez ele recebe também os padrões que o algoritmo cria para buscar uma substring em uma string maior, o usuário precisa escolher a opção que as duas substrings são iguais para que ele possa fazer a verificação final do padrão. O sistema recebe o char correspondente a essas escolhas e aciona uma flag caso ele falhe na busca, desta vez não sendo possível retornar a posições anteriores como na busca sequencial. 
O algoritmo usado possui complexidade média de O(n+m) e pior caso de O(nm), caso há muitos hashs colidindo.
#### Compressão:

O usuário, desta vez, auxiliou seu colega de trabalho a comprimir um texto para seu código em binário, de forma que os códigos menores ficam para os caracteres que possuíam maiores aparições no texto. Como o algoritmo de Huffman envolve construir uma arvore, o usuário a fez realizando as somas das menores ocorrências, restando apenas um. Finalmente, com a arvore montada, cada caractere foi mapeado seguindo as regras do algoritmo de zeros e um.
O algoritmo é de complexidade O(n log n)

#### Hashing:

Com complexidade O(1), Hashing é uma forma eficiente de armazenar dados.
O usuário desta vez, auxilia seu companheiro de serviço escolhendo a função hash e dando um caso teste. Para mostrar a eficácia do algoritmo e o problema de sobreposição, outros casos são inseridos automaticamente. Por fim, é mostrado ao usuário a tabela hash formada.

#### Grafos:

##### Representação e Conceitos Básicos

Grafos são uma ótima maneira de representar múltiplas coisas reais, sua forma em lista de adjacência é ideal para representar estruturas com objetos que não se conectam tanto, e tem complexidade de O(n), em casos que a lista possui nós com muitas conexões, sendo necessário percorrer toda a estrutura. Sua forma em matriz de adjacência, por outro lado, possui complexidade de O(1), porém ela é muito espaçosa (n^2).
Os algoritmos implementados, o usuário precisa navegar por uma matriz de adjacência, inicialmente, conectando todos os componentes com o lado negativo e positivo de um circuito. E contar quantos fios foram usados para um circuito, desta vez percorrendo uma lista de adjacência.

##### Navegação e Caminhos Ótimos

Duas maneiras de navegar grafos são através de busca em profundidade (DFS) e busca por largura (BFS). Ambas com O(V+E), contudo se diferenciam na estrutura auxiliar usada, DFS usa uma pilha e BFS uma lista. E isso modifica todo a função do algoritmo. Enquanto DFS vai até o fundo de um grafo em busca do destino, BFS percorre por camadas o grafo.
O usuário, desta vez percorre uma lista de adjacência procurando se há caminho para o lado negativo do circuito usando DFS. Ele usa BFS para contar as camadas e descobrir qual a maior quantidade de componentes em diferentes camadas.
O algortimo de Dijkstra, usado para descobrir o menor caminho de um nó inicial para todos os outros nós, possui complexidade de O(E log V). Aqui o usuário recebeu diversas distâncias e precisou escolher as melhores, de maneira similar como o algoritmo faz: calculando a distância atual e calculando com a distância do nó atual até o desejado.

##### Otimização de Caminho e Processo

O algoritmo de Welch-Powell, usado para coloração de grafos, possui complexidade de O(V log V). Ele ordena os vértices em graus, atribui cores a vertices e todos os que não são conectados por uma aresta.
O usuário, desta vez ficou responsável por descobrir o grau dos vértices, após esse trabalho ele visualiza os grupos formados pelo algoritmo, de forma que esses grupos não possuem vértices conectados entre eles. 
O algoritmo de ordenação topológica de Tarjan com complexidade de O(V + E) identifica componentes fortemente conectados, em ordenação topológica ele organiza o grafo linearmente
Desta vez, o usuário possui a tarefa de verificar se funções de um algoritmo foram visitadas e finalizadas. Etapas presentes na ordenação citada anteriormente.
Por fim, o algoritmo de union find, para arvore geradora mínima é O(E log E) ou O(E log V), ela é usada para encontrar uma maneira ótima de conectar todas as arestas, cortando ciclos.
Finalmente, o usuário precisa memorizar o peso das arestas e calcular o custo total gerado.