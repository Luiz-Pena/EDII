void introducao_6(){
    int input;

    system("cls");

    print_falas ("Ei, novato.");
    print_falas ("Ta sem nada pra fazer? Te arrumo servico ja ja");

    cout << "1. Corro longe de servico" << endl;
    cout << "2. Oba amo trabalhar e ser mao de obra" << endl;
    cout << "3. Nao se incomode com isso! Eu consigo ficar sem fazer nada" << endl;

    cin >> input;

    system("cls");

    switch (input){
        case 1:
            cout << "- Corro longe de servico" << endl;
            break;

        case 2:
            cout << "- Oba amo trabalhar e ser mao de obra" << endl;
            break;

        case 3:
            cout << "- Nao se incomode com isso! Eu consigo ficar sem fazer nada" << endl;
            break;

        default:
            cout << "(Voce nao diz nada)" << endl;
            break;
    }

    if (input < 4 && input > 0)
        print_falas ("(O senior nao parece se importar com o que vc diz)");

    print_falas ("Tem algumas protoboards que.....");
    print_falas ("Na verdade elas ja foram ate transformadas em chips");
    print_falas ("Mas sua disposicao me da agonia");
    print_falas ("Entao vou te dar uma tarefa: ");
    print_falas ("Verificar cada uma");
    print_falas ("So que logicamente, eu vou estragar algumas para que vc arrume");
    print_falas ("Afinal, e isso que o mundo se trata");
    print_falas ("Pessoas arrumando a caca de outras");
}

void Sub_Modulo1() {
    int input;

    introducao_6();

    print_falas ("Vou te dizer os componentes, quero que voce arrume esse circuito");

    int mat[5][5] = {{0, 1, 1}, {1, 0, 0}, {0, 1, 1}, {1, 0, 0}};
    map <int, string> dicionario;

    dicionario[-1] = "porta logica AND";
    dicionario[-2] = "porta logica OR";
    dicionario[-3] = "porta logica XOR";
    dicionario[-4] = "porta logica NOT";

    dicionario[1] = "o lado positivo";
    dicionario[2] = "o lado pegativo";
    dicionario[3] = "a porta logica NOT";

    for (int i=0; i<4; i++) {
        for (int j=0; j<3; j++){
            if (mat[i][j] == 0) {
                print_falas ("A " + dicionario[i*-1-1] + " nao esta conectada com " + dicionario[j+1]);
            }
            else {
                print_falas ("A " + dicionario[i*-1-1] + " esta conectada com " + dicionario[j+1]);
            }

            print_falas ("Alterar?");

            cout << "1. Sim" << endl;
            cout << "2. Nao" << endl;

            cin >> input;

            if (input == 1)
                mat[i][j] = !mat[i][j];

            system("cls");

        }
    }

    print_falas ("Muito bem, vamos ver o que voce fez");

    bool correto1 = true;

    for (int i=0; i<4; i++){
        for (int j=0; j<2; j++){
            if (mat[i][j] == 0) {
                correto1 = false;
                break;
            }
        }
    }

    if (correto1 == true) {
        print_falas ("Parabens, voce conseguiu fazer uma das atividades mais faceis possiveis");
        print_falas ("So porque e facil nao significa que esse feito foi coisa pouca");
        print_falas ("De qualquer forma, voce conseguiu, agora vamos prosseguir");
    } else {
        print_falas("......");
        print_falas("..... voce... nao sabia que todo componente precisa estar ligado no positivo e no negativo?");
        print_falas("*suspira*");
        print_falas("Bem... melhor prosseguimos ");
    }

    print_falas ("Desta vez, me diga a quantidade total de fios usados no circuito");

    vector<vector<pair<int, int>>> matAdj (5);

    matAdj[0].push_back({1, 3});
    matAdj[1].push_back({0, 3});

    matAdj[0].push_back({2, 1});
    matAdj[2].push_back({0, 1});

    matAdj[1].push_back({3, 1});
    matAdj[3].push_back({1, 1});

    matAdj[3].push_back({4, 2});
    matAdj[4].push_back({3, 2});

    for (int i=0; i<5; i++){
        for (auto par: matAdj[i]) {
            print_falas ("A " + dicionario[i*-1-1] + " esta conectada com a " + dicionario[par.first*1-1] + " atraves de " + to_string(par.second) + " fios");
          }
    }

    print_falas ("Quantos fios foram usados?");

    cin >> input;

    if (input == 7 && correto1 == true) {
        print_falas ("Aparentemente isso pareceu mais uma brincadeira para voce do que algo desafiador ne");
        print_falas ("Conseguiu acertar as duas atividades propostas");
    } else if (input == 7 && correto1 == false) {
        print_falas ("Voce acertou dessa vez....");
        print_falas ("Talvez tenha maior facilidade com contas... sei la");
        print_falas ("Ainda continuo decepcionado com seu erro na ultima atividade");
    } else if (input != 7 && correto1 == true) {
        print_falas ("Nao... desta vez voce nao acertou....");
        print_falas ("Bem...... com o tempo voce melhora.... eu acho...");
    } else {
        print_falas ("um......");
        print_falas ("..... voce nao acertou novamente.....");
        print_falas ("Mais atencao na proxima vez.......");
    }

    print_falas ("De qualquer forma, e hora do almoco");
    print_falas ("Entao te vejo por ai, colega");
}

void introducao_7() {
    int input;

    system("cls");

    print_falas ("Ola, voce e o novo funcionario ne?");
    print_falas ("Eu fiquei sabendo pela ultima pessoa que veio te passar algumas atividades");
    print_falas ("E ai como foi? Achou dificil?");

    cout << "1. Achei mt facil, easy peasy" << endl;
    cout << "2. Errei tudo" << endl;
    cout << "3. Prefiro nao comentar" << endl;

    cin >> input;

    system("cls");

    switch (input) {
        case 1:
            cout << "- Achei mt facil, easy peasy" << endl;

            print_falas ("Que bom, fico feliz com sua capacidade");
            break;

        case 2:
            cout << "- Errei tudo" << endl;

            print_falas ("..... tudo bem acontece as vezes...");
            break;

        case 3:
            cout << "- Prefiro nao comentar" << endl;

            print_falas ("..... foi mal acho que fui muito invasivo");
            break;

        default:
            cout << "(voce fica calado)" << endl;
            break;
    }

    print_falas ("Acredito que voce no minimo saiba o basico de circuitos logicos ne");
    print_falas ("Voce poderia me ajudar a olhar algumas protoboards");
    print_falas ("Elas nao funcionam e queria descobrir por que");

    cout << "1. Ate agora nao vi nem sinal do meu salario" << endl;
    cout << "2. Nao e como eu tivesse outra coisa pra fazer" << endl;

    cin >> input;

    system("cls");

    switch (input) {
        case 1:
            cout << "- Ate agora nao vi nem sinal do meu salario" << endl;

            print_falas ("Ei, nao e como se eu fosse responsavel por isso ne");
            break;

        case 2:
            cout << "- Nao e como eu tivesse outra coisa pra fazer" << endl;

            print_falas ("Nossa... que pessimismo");
            break;

        default:
            cout << "(voce fica calado)" << endl;
            break;
    }

    print_falas ("Bem, vamos comecar");
}

bool contemPalavra(const std::string& texto, const std::string& palavra) {
    size_t pos = texto.find(palavra);
    while (pos != std::string::npos) {
        if ((pos == 0 || texto[pos-1] == ' ') &&
            (pos + palavra.length() == texto.length() ||
             texto[pos + palavra.length()] == ' ')) {
            return true;
        }
        pos = texto.find(palavra, pos + 1);
    }
    return false;
}

void Sub_Modulo2() {
    int input;

    introducao_7();

    print_falas ("O primeiro circuito que iremos analizar vai depender de olhar a corrente inteira");
    print_falas ("Uma teoria que tenho sobre o mal funcionamento dessa placa e porque a correte nao chega ate o fim");
    print_falas ("Percorra a corrente, se conseguir de alguma forma chegar ate o negativo, entao me enganei");
    print_falas ("Ok, vamos comecar");

    vector<vector<int>> matAdj (6);

    map <int, string> dicionario;

    dicionario[0] = "postivo";
    dicionario[1] = "porta logica NOT";
    dicionario[2] = "porta logica OR";
    dicionario[3] = "porta logica XOR";
    dicionario[4] = "porta logica AND";
    dicionario[5] = "negativo";

    matAdj[0].push_back(1);
    matAdj[1].push_back(3);
    matAdj[3].push_back(4);

    matAdj[0].push_back(2);
    matAdj[2].push_back(4);
    matAdj[4].push_back(5);

    stack <int> aux;

    for (int elemento: matAdj[0]) {
        aux.push(elemento);
    }

    while (aux.top() != 5) {
        print_falas ("(O ultimo elemento que voce escreveu e " + dicionario[aux.top()] + ")");

        cout << "1. (Escrever os elementos que estao conectados a esse componente)" << endl;

        cin >> input;

        system("cls");

        if (input == 1){
            int atual = aux.top();
            aux.pop();

            for (int elemento: matAdj[atual]) {
                aux.push(elemento);
            }
        } else {
            print_falas ("(Voce nao fez nada....)");
        }
    }

    print_falas ("Perai.... Voce conseguiu chegar ate no negativo");
    print_falas ("Droga entao errei");
    print_falas ("Bem, vamos passar pra outro circuito entao, cansei de olhar esse dai");
    print_falas ("Tem esse daqui.... o erro eu acredito que seja por ter niveis logicos sobrecarregando a capacidade");
    print_falas ("A gente so precisa alterar um pouco isso");

    vector<vector<int>> matAdj2 (10);
    queue <int> camadas;
    queue <int> provisorio;
    map <int, string> dicionario2;
    string output;

    matAdj2[0].push_back(1);
    matAdj2[0].push_back(2);
    matAdj2[0].push_back(3);

    matAdj2[1].push_back(4);
    matAdj2[2].push_back(5);

    matAdj2[4].push_back(6);
    matAdj2[4].push_back(7);
    matAdj2[4].push_back(8);
    matAdj2[5].push_back(8);

    matAdj2[7].push_back(9);

    dicionario2[0] = "postivo";
    dicionario2[1] = "porta logica NOT";
    dicionario2[2] = "porta logica OR";
    dicionario2[3] = "porta logica XOR";
    dicionario2[4] = "porta logica AND";
    dicionario2[5] = "porta logica NAND";
    dicionario2[6] = "resistor";
    dicionario2[7] = "led";
    dicionario2[8] = "botao";
    dicionario2[9] = "negativo";


    for (int elemento: matAdj2[0]) {
        camadas.push(elemento);
        output += dicionario2[elemento] + " ";
    }

    while (!camadas.empty() && !provisorio.empty()) {
        print_falas ("Camada atual: " + output);

        cout << "1. Ir para proxima camada" << endl;

        cin >> input;

        system("cls");

        if (input == 1) {
            while (!camadas.empty()) {
                int conteudo = camadas.front();
                output = "";
                camadas.pop();

                for (int elemento: matAdj2[conteudo]) {
                    provisorio.push(elemento);

                    if (!contemPalavra(output, dicionario2[elemento])) {
                        output += dicionario2[elemento] + " ";
                    }
                }
            }
            camadas = provisorio;

            while (!provisorio.empty()) {
                provisorio.pop();
            }
        } else {
            print_falas ("(Voce nao fez nada....)");
        }
    }

    print_falas ("Pronto, creio que essas foram todas as camadas");
    print_falas ("Entao.... qual foi o maior numero de elementos em uma camada?");

    cin >> input;

    if (input != 4) {
        print_falas ("Nao creio que esteja certo isso.... eu contei 4 como o maximo");
        print_falas ("Tudo bem... as vezes a gente se confunde mesmo");
    } else
        print_falas ("Isso, foi essa quantidade que eu descobri como maximo tambem");

    print_falas ("Bem, vamos continuar, o proximo e o ultimo circuito");
    print_falas ("A fiacao nao esta muito eficiente");
    print_falas ("Bem, e isso que acontece quando nao se planeja bem");
    print_falas ("Nosso objetivo aqui e descobrir a menor distancia em fios dos componentes a outros");
    print_falas ("Comecaremos do lado positivo");
    print_falas ("Escevi 99 nas distancias que ainda nao foram verificadas");

    typedef pair<string, int> psi;
    typedef pair<int, string> pis;

    map<string, int> distancias;
    distancias["positivo"] = 0;
    distancias["porta logica XOR"] = 99;
    distancias["porta logica NOT"] = 99;
    distancias["porta logica AND"] = 99;
    distancias["porta logica NAND"] = 99;
    distancias["porta logica OR"] = 99;
    distancias["negativo"] = 99;

    priority_queue<pis, vector<pis>, greater<pis>> pq;
    pq.push({0, "positivo"});

    map<string, vector<psi>> grafo;

    grafo["positivo"].push_back({"porta logica XOR", 5});
    grafo["positivo"].push_back({"porta logica NOT", 2});
    grafo["porta logica XOR"].push_back({"porta logida NOT", 2});
    grafo["porta logica XOR"].push_back({"porta logida OR", 3});
    grafo["porta logica AND"].push_back({"porta logica NOT", 9});
    grafo["porta logica NOT"].push_back({"porta logica OR", 2});
    grafo["porta logica NOT"].push_back({"porta logica NAND", 1});
    grafo["porta logica NAND"].push_back({"negativo", 5});

    while (!pq.empty()) {
        int dist_atual = pq.top().first;
        string u = pq.top().second;
        pq.pop();

        if (dist_atual > distancias[u]) continue;

        if (grafo.find(u) != grafo.end()) {
            for (const auto& vizinho : grafo.at(u)) {
                string v = vizinho.first;
                int peso = vizinho.second;

                print_falas ("No atual: " + u);
                print_falas ("Distancia atual: " + to_string(distancias[u]));

                print_falas ("No a ser visitado: " + v);
                print_falas ("Distancia ate o no: " + to_string(peso));

                print_falas ("E melhor essa distancia (" + to_string(distancias[u]) + ") ou a distancia anteriormente calculada? (" + to_string(distancias[v]) + ")");

                cout << "1. Sim" << endl;
                cout << "2. Nao" << endl;

                cin >> input;

                system("cls");

                if (distancias[u] + peso < distancias[v]) {
                    if (input == 0) {
                        print_falas ("Perdao.... mas acredito que terei que intervir, a nova distancia e claramente melhor");
                        print_falas ("Mais foco na proxima vez");
                    } else if (input > 2 || input < 1) {
                        print_falas ("Desculpe nao entendi direito o que disse");
                        print_falas ("Eu coloquei que a distancia e menor pra vc...");
                    }

                    distancias[v] = distancias[u] + peso;
                    pq.push({distancias[v], v});
                } else if (input == 1) {
                    print_falas ("Acredito que houve um equivoco");
                    print_falas ("Tudo bem, tente melhor na proxima, nao irei fazer essa alteracao");
                } else {
                    print_falas ("(Voce decide nao dizer nada)");
                    print_falas ("Vou considerar isso como um nao");
                }
            }
        }
    }

    print_falas ("Acredito que terminamos");
    print_falas ("As distancias foram: ");

    for (auto par: distancias) {
        print_falas ("Distancia para chegar a " + par.first + " foi de " + to_string(par.second));
    }

    print_falas ("Obrigado, isto e tudo");
    print_falas ("Qualquer coisa te chamo");
}

void introducao_8() {
    int input;

    print_falas ("Ei, ei, ei");
    print_falas ("Voce tambem comecou a trabalhar aqui recentemente ne");

    cout << "1. Quem e voce?" << endl;
    cout << "2. Sim, porque?" << endl;
    cout << "3. Voce precisa de ajuda ne" << endl;

    cin >> input;

    system("cls");

    switch (input) {
        case 1:
            cout << "- Quem e voce?" << endl;

            print_falas ("Eu tambem comecei a trabalhar aqui recentemente");
            print_falas ("Fui direcionada a voce por um colega de trabalho");
            break;

        case 2:
            cout << "- Sim, porque?" << endl;

            print_falas ("Entao e voce mesmo!");
            print_falas ("Um colega te recomendou");
            break;

        case 3:
            cout << "- Voce precisa de ajuda ne" << endl;

            print_falas ("Da pra ver na minha cara ne...");
            break;

        default:
            cout << "(Voce fica calado)" << endl;
            break;
    }

    print_falas ("O negocio e seguinte, eu tenho algumas tarefas pra fazer");
    print_falas ("Mas duvido que consigar fazer sozinho elas a tempo");
    print_falas ("E e ai onde vc entra");
    print_falas ("Voce topa me ajuda ne?");

    cout << "1. Sim" << endl;
    cout << "2. Claro" << endl;
    cout << "3. Ajudo" << endl;

    cin >> input;

    system("cls");

    switch (input) {
        case 1:
            cout << "- Sim" << endl;
            break;

        case 2:
            cout << "- Claro" << endl;
            break;

        case 3:
            cout << "- Ajudo" << endl;
            break;

        default:
            cout << "(Voce concorda)" << endl;
            break;
    }

    print_falas ("Oba!! Legal");
}

struct Aresta {
    int u, v, peso;

    Aresta(int u, int v, int peso) : u(u), v(v), peso(peso) {}

    bool operator<(const Aresta& other) const {
        return peso < other.peso;
    }
};

class UnionFind {
private:
    vector<int> parent, rank;

public:
    UnionFind(int n) : parent(n), rank(n, 0) {
        iota(parent.begin(), parent.end(), 0);
    }

    int find(int u) {
        if (parent[u] != u) {
            parent[u] = find(parent[u]);
        }
        return parent[u];
    }

    bool uniao(int u, int v) {
        int raizU = find(u);
        int raizV = find(v);

        if (raizU == raizV)
            return false;

        if (rank[raizU] < rank[raizV]) {
            parent[raizU] = raizV;
        } else if (rank[raizU] > rank[raizV]) {
            parent[raizV] = raizU;
        } else {
            parent[raizV] = raizU;
            rank[raizU]++;
        }

        return true;
    }
};

void Sub1_SubModulo3() {
    int input;

    print_falas ("Primeiramente, vamos organizar as tarefas da equipe");
    print_falas ("Elas precisam ser organizadas para cada grupo");
    print_falas ("Nao se preocupe, nao vou fazer voce trabalhar sozinho");
    print_falas ("E nao se preocupe tambem com as regras da equipe");
    print_falas ("So me responda as perguntas que eu lhe direcionar");
    print_falas ("Vamos comecar");

    vector<vector<int>> grafo = {
        {0, 1, 1, 0, 0, 0},
        {1, 0, 1, 1, 0, 0},
        {1, 1, 0, 1, 0, 0},
        {0, 1, 1, 0, 1, 0},
        {0, 0, 0, 1, 0, 1},
        {0, 0, 0, 0, 1, 0}
    };

    int n = grafo.size();
    vector<int> cores(n, -1);
    vector<pair<int, int>> vertices;

    for (int i = 0; i < n; i++) {
        for (int elemento: grafo[i]) {
            print_falas (" " + to_string(elemento));
        }

        print_falas ("Quantas tarefas precisam dessa para serem concluidas?");

        int grau = count(grafo[i].begin(), grafo[i].end(), 1);

        cin >> input;

        system("cls");

        if (input == grau) {
            print_falas ("Correto, ela possui " + to_string(grau) + " tarefas conectadas");
        } else {
            print_falas ("Nao.... ela possui " + to_string(grau) + " tarefas conectadas");
            print_falas ("Tudo bem... eu corrigi seu erro e anotei a resposta correta");
        }

        vertices.push_back({grau, i});
    }

    sort(vertices.rbegin(), vertices.rend());

    int cor = 0;
    for (const auto& par : vertices) {
        int grau = par.first;
        int v = par.second;

        if (cores[v] == -1) {
            cores[v] = cor;

            for (const auto& par2 : vertices) {
                int g = par2.first;
                int u = par2.second;

                if (cores[u] == -1 && grafo[v][u] == 0) {
                    bool valido = true;

                    for (int i = 0; i < n; i++) {
                        if (cores[i] == cor && grafo[u][i] == 1) {
                            valido = false;
                            break;
                        }
                    }

                    if (valido) cores[u] = cor;
                }
            }
            cor++;
        }
    }
    print_falas ("Otimo, com sua ajuda consegui organizar as tarefas em grupos");
    print_falas ("Aqui... vou te mostrar");

    for (int i = 0; i < cores.size(); i++) {
        print_falas ("Tarefa " + to_string(i) + " grupo " + to_string(cores[i]));
    }
}

void Sub2_SubModulo3() {
    int input;

    print_falas ("Bem, desta vez nos precisaremos organizar a ordem de execucao das funcoes de um algoritmo");
    print_falas ("Nesse caso ocorre da seguinte forma");
    print_falas ("Um funcao chama outra, depois que essa funcao chamada termina, entao ele pode finalizar");
    print_falas ("Disseram pra mim que era um processo bem facil.....");
    print_falas ("Vc so precisa responder algumas perguntas, eu to com as instrucoes que me passaram aqui");
    print_falas ("Irei anotas -1 nas funcoes que nao foram visitadas, lembre disso");

    vector<vector<int>> grafo = {{1, 2}, {3, 4}, {4}, {5}, {5}, {}};
    int n = grafo.size();
    vector<int> disc(n, -1), low(n, -1);
    vector<bool> inStack(n, false);
    stack<int> st;
    vector<int> ordenacao;
    int time = 0;

    function<void(int)> dfs = [&](int u) {
        disc[u] = low[u] = ++time;
        st.push(u);
        inStack[u] = true;

        for (int v : grafo[u]) {
            print_falas ("Ok, me informe, a funcao " + to_string(v) + " ja foi visitada? Eu anotei um " + to_string(disc[v]) + " nela");

            cout << "1. Sim" << endl;
            cout << "2. Nao" << endl;

            cin >> input;

            system("cls");

            if (disc[v] == -1) {
                if (input == 2) {
                    print_falas ("Han? Mas ele nao foi visitado ainda!");
                    print_falas ("Larga de brincadeira!");
                } else if (input < 1 || input > 2) {
                    print_falas ("Nao entendi o que disse");
                    print_falas ("Ah, olhe ele nao foi visitado ainda");
                    print_falas ("Era isso que vc queria dizer?");
                }

                print_falas ("Vejamos.... entao precisaremos visitar as funcoes que tem conexao com ele....");
                print_falas ("Ok, vamos la entao");

                dfs(v);
                low[u] = min(low[u], low[v]);
            } else {
                print_falas ("Ok.... Mas entao talvez ele nao tenha sido finalizado!");
                print_falas ("Vejamos...");
                print_falas ("Vou te mostrar como esta nossa pilha de execucao, se tiver ele entao ele precisa ser finalizado");
                print_falas ("Nossa funcao e a " + to_string(v));

                for (int i=0; i<inStack.size(); i++) {
                    if (inStack[i])
                        print_falas ("Funcao " + to_string(i) + " esta na pilha de execucao");
                    else
                        print_falas ("Funcao " + to_string(i) + " nao esta na pilha de execucao");
                }

                print_falas ("A funcao" + to_string(v) + " esta na pilha?");

                cout << "1. Sim" << endl;
                cout << "2. Nao" << endl;

                cin >> input;

                if (inStack[v]) {
                    if (input == 2) {
                        print_falas ("Que? Mas ela ta sim!");
                        print_falas ("Vou considerar dessa vez que vc se enganou");
                    } else if (input > 2 || input < 1) {
                        print_falas ("Nao entendi direito... foi mal");
                        print_falas ("Vou considerar que vc disse que sim");
                    }

                    low[u] = min(low[u], disc[v]);
                } else if (input == 1) {
                    print_falas ("Nao... ele nao ta nao...");
                    print_falas ("Sorte sua que eu vi, se nao teriamos disperdicado trabalho");
                } else {
                    print_falas ("(Voce diz nao com a cabeca)");

                }
            }

            if (low[u] == disc[u]) {
                while (true) {
                    int w = st.top();
                    st.pop();
                    inStack[w] = false;
                    ordenacao.push_back(w);
                    if (w == u) break;
                }
            }
        }

    };

    for (int i = 0; i < n; i++) {
        if (disc[i] == -1) {
            dfs(i);
        }
    }

    reverse(ordenacao.begin(), ordenacao.end());

    print_falas ("Algumas coisas eu fiz por conta propria");
    print_falas ("A ordem que conseguimos foi essa: ");

    for (int v : ordenacao) {
        print_falas ("funcao " + to_string(v) + " ");
    }

    cout << endl;
}

void Sub3_SubModulo3() {
    int input;

    print_falas ("Falta so 1 coisa pra gente fazer, ai estamos liberados para ir embora ");
    print_falas ("Tem um circuito que ainda nao recebeu o lado positivo");
    print_falas ("So precisamos ligar todos os componentes do circuito de forma que nao gere ciclos");
    print_falas ("Eu faco a parte de juntar, mas preciso ajuda em somar os pesos");
    print_falas ("Te passarei os custos e vc precisa lembrar do valor");

    int n = 5;
    vector<Aresta> arestas = {
        Aresta(0, 1, 2),
        Aresta(0, 3, 6),
        Aresta(1, 2, 3),
        Aresta(1, 3, 8),
        Aresta(2, 4, 7),
        Aresta(3, 4, 9),
        Aresta(0, 2, 5),
        Aresta(1, 4, 4)
    };

    sort(arestas.begin(), arestas.end());

    UnionFind uf(n);
    int custoTotal = 0;
    vector<Aresta> mst;
    int arestasAdicionadas = 0;

    for (const auto& aresta : arestas) {
        if (uf.uniao(aresta.u, aresta.v)) {
            print_falas ("O peso da aresta atual é " + to_string(aresta.peso));

            cout << "1. Proxima aresta" << endl;

            cin >> input;

            system("cls");

            custoTotal += aresta.peso;
            mst.push_back(aresta);
            arestasAdicionadas++;

            if (arestasAdicionadas == n - 1) {
                break;
            }
        }
    }

    print_falas ("Otimo, todas as arestas foram adicionadas");
    print_falas ("Lembra do nosso acordo ne, de fazer a soma pra mim e tals");
    print_falas ("Entao... qual o valor que voce conseguiu?");

    cin >> input;

    system("cls");

    if (input == custoTotal) {
        print_falas ("Oba");
        print_falas ("Foi esse valor que eu consegui tambem!");
        print_falas ("Obrigado, parceiro");
    } else {
        print_falas ("hm....");
        print_falas ("Nao foi esse o valor que eu consegui....");
        print_falas ("Vou ter que somar de novo e ver qual foi errado");
        print_falas ("Tudo bem, eu assumo a partir daqui");
        print_falas ("Adeus, colega");
    }
}

void Sub_Modulo3() {
    int input;

    introducao_8();

    Sub1_SubModulo3();

    Sub2_SubModulo3();

    Sub3_SubModulo3();
}
