
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