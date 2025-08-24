void introducao_4(){
    int input;

    system("cls");

    print_falas("A sociedade e tao injusta ne");
    print_falas("Coisas essenciais para a vida sao pagas como por exemplo");
    print_falas("Moradia, agua, luz");
    print_falas("Ate coisas crucias para a sobrevivencia como uma cervejinha em dia de domingo");

    cout << "1. A onde vc quer chegar?" << endl;
    cout << "2. Revolucao ja!!" << endl;
    cout << "3. E assim que a sociedade funciona" << endl;

    cin >> input;

    system("cls");

    switch (input){
        case 1:
            cout << "- A onde vc quer chegar?" << endl;

            print_falas("Na verdade em nenhum lugar, so estou tentando puxar assunto");
            break;

        case 2:
            cout << "- Revolucao ja!!" << endl;

            print_falas("Haha");
            print_falas("Gostei do seu espirito");
            break;

        case 3:
            cout << "- E assim que a sociedade funciona" << endl;

            print_falas("Sim, e provavelmente continuara por um bom tempo...........");
            break;

        default:
            cout << "- Amo escolher opcoes que nao estao disponiveis para mim";

            print_falas("???");
            break;
    }

    print_falas("Aproveitando que voce esta aqui, a gente tem um problema");
    print_falas("Preciso entregar o relatorio de sua performance nessa parte de busca");
    print_falas("So que eu nao vou ter creditos para isso nao.....");
    print_falas("Ai eu tava pesando aqui....");
    print_falas("Por que eu nao te ensino a comprimir documentos seguindo as diretrizes da empresa?");
    print_falas("Nao e tao complicado quanto parece, eu posso adicionar isso no relatorio tambem");

    cout << "1. Como consigo fazer isso?" << endl;
    cout << "2. So se voce me ajudar" << endl;

    cin >> input;

    system("cls");

    switch (input) {
        case 1:
            cout << "- Como consigo fazer isso?" << endl;

            print_falas("Nao se preocupe, te ensino o passo a passo");
            break;

        case 2:
            cout << "- So se voce me ajudar" << endl;

            print_falas("Claro, afinal o problema inicialmente era meu");
            break;

        default: break;
    }

    print_falas("Pegaremos seu relatorio e separaremos cada letra");
    print_falas("Apos isso contaremos a frequencia de cada");
    print_falas("Em seguida, atribuiremos as letras que mais aparecem para codigos binarios curtos");
    print_falas("Por fim, passaremos o texto para binario");
    print_falas("Voce nao precisa lembrar isso de cor agora, de qualquer forma, na pratica fica mais claro");
}

void introducao_5(){
    int input;

    system("cls");

    print_falas("Preciso da sua ajuda, e urgente");

    cout << "1. Voce so me chama quando precisa de algo" << endl;
    cout << "2. Quem morreu?" << endl;
    cout << "3. Tudo tem um preco" << endl;

    cin >> input;

    system("cls");

    switch (input) {
        case 1:
            cout << "- Voce so me chama quando precisa de algo" << endl;

            print_falas("Nao sei o que voce esta falando");
            print_falas("Bem, a gente ta em um ambiente de trabalho");
            print_falas("Se nao tivesse trabalho pra ser feito...");
            print_falas("De qualquer forma");
            break;

        case 2:
            cout << "- Quem morreu?" << endl;

            print_falas("Ninguem");
            print_falas("Mas eu temo que serei eu");
            break;

        case 3:
            cout << "- Tudo tem um preco" << endl;

            print_falas("Voce ta me cobrando dinheiro justo no fim do mes?");
            print_falas("Ahhh, eu nao tenho tempo para barganhar!");
            break;

        default:
            cout << "(Voce nao diz nada)" << endl;

            break;
    }

    print_falas("Eu preciso chegar em casa o mais rapido possivel para jogar um evento que ta tendo");
    print_falas("Posso ir embora quando terminar minhas tarefas aqui");
    print_falas("E e ai onde vc entra!");
    print_falas("Voce vai ser meu ajudante, meu cumplice, meu parceiro, meu....");

    cout << "1. Ta ja entendi" << endl;
    cout << "2. Cobro um pastel e um suco" << endl;

    cin >> input;

    system("cls");

    switch (input) {
        case 1:
            cout << "- Ta ja entendi" << endl;

            print_falas("Valeu!! Sabia que nao me decepcionaria");
            break;

        case 2:
            cout << "- Cobro um pastel e um suco" << endl;

            print_falas("Meu orcamento quase cobre isso");
            break;

        default:
            cout << "(Apenas o silencio sai de sua boca)" << endl;

            print_falas("Vou considerar isso como um: Sim eu te ajudo!");
            break;
    }
}

struct HuffmanNode {
    char data;
    unsigned freq;
    HuffmanNode *left;
    HuffmanNode *right;


    HuffmanNode(char data, unsigned freq) : data(data), freq(freq), left(nullptr), right(nullptr) {
    }

    ~HuffmanNode() {
        delete left;
        delete right;
    }
};

struct Compare {
    bool operator()(HuffmanNode* l, HuffmanNode* r) {
        return l->freq > r->freq;
    }
};

void generateCodes(HuffmanNode* root, string code, unordered_map<char, string>& huffmanCode) {
    if (!root) return;

    if (root->data != '$') {
        huffmanCode[root->data] = code;
    }

    generateCodes(root->left, code + "0", huffmanCode);
    generateCodes(root->right, code + "1", huffmanCode);
}

void Compressao(){
    int input;
    string arquivoInicial = "todas as fases de busca foram concluidas com sucesso, o estagiario parece ser sociavel e capaz para engressar na empresa";
    string arquivoComprimido;
    priority_queue<HuffmanNode*, vector<HuffmanNode*>, Compare> minHeap;
    unordered_map<char, int> frequenciasChar;
    unordered_map<char, string> codigosChar;

    introducao_4();

    print_falas("Nosso arquivo e esse:");

    cout << endl;
    print_falas(arquivoInicial);
    cout << endl;

    print_falas("Primeiramente e necessario descobrir a frequencia...");
    print_falas("Mas e melhor eu fazer isso");

    for (char c: arquivoInicial) {
        frequenciasChar[c] ++;
    }

    print_falas("O resultado foi esse:");

    for (auto par: frequenciasChar) {
        print_falas(string("[") + par.first + "] = " + to_string(par.second));
        minHeap.push(new HuffmanNode(par.first, par.second));
    }

    print_falas("Agora precisaremos criar duplas ate restar 1 no final");
    print_falas("Prioritizaremos agrupar os menores primeiro");
    print_falas("Essa parte eu deixo com voce");

    while (minHeap.size() != 1) {
        HuffmanNode* left = minHeap.top();
        minHeap.pop();
        HuffmanNode* right = minHeap.top();
        minHeap.pop();

        print_falas("Nos a serem somados: " + to_string(left->freq) + " + " + to_string(right->freq));
        print_falas("Qual o resultado?");

        while (cin >> input && input != (left->freq + right->freq))
            print_falas("Nao acho que seja isso.....");


        HuffmanNode* top = new HuffmanNode('$', input);
        //HuffmanNode* top = new HuffmanNode('$', left->freq + right->freq);
        top->left = left;
        top->right = right;

        minHeap.push(top);
    }

    generateCodes(minHeap.top(), "", codigosChar);

    print_falas("Otimo, com essa soma consegui fazer uma arvore");
    print_falas("Seguindo ela, considerando que esquerda e 0 e direita e 1 os codigos para cada caractere ficaram assim:");

    for (auto par : codigosChar)
        print_falas(string("[") + par.first + "] = " + par.second);


    for (char c: arquivoInicial)
        arquivoComprimido += codigosChar[c];

    print_falas("Ou seja, nosso arquivo comprimido foi esse:");
    print_falas(arquivoComprimido);
    print_falas("Agora so preciso enviar o codigo binario e arvore junto, para que ele possa ser decodificado");
    print_falas("Obrigado pela ajuda!");
}

template<typename K, typename V>
class HashTable {
    private:

        static const int TABLE_SIZE = 10;
        vector<list<pair<K, V>>> table;


        size_t hashMultiplicacao(const K& key) {
            const double A = 0.6180339887;
            size_t hash = std::hash<K>{}(key);
            double valor = hash * A;

            valor -= (size_t)valor;
            return (size_t)(TABLE_SIZE * valor);
        }

        size_t hashEnlacamentoDeslocado(const K& key) {
            size_t hash = std::hash<K>{}(key);
            hash = (hash << 5) | (hash >> (sizeof(size_t)*8 - 5));
            return hash % TABLE_SIZE;
        }

        size_t hashEnlacamentoLimite(const K& key) {
            size_t hash = 0;
            const size_t primo = 31; // Número primo
            std::string str = std::to_string(std::hash<K>{}(key));

            for (char c : str) {
                hash = (hash * primo + c) % TABLE_SIZE;
            }

            return hash;
        }

        size_t hashMeioQuadrado(const K& key) {
            size_t hash = std::hash<K>{}(key);
            size_t quadrado = hash * hash;
            std::string quadradoStr = std::to_string(quadrado);
            size_t meio = quadradoStr.length() / 2;
            std::string parteMeio = quadradoStr.substr(std::max(3, (int)meio - 2), 4);

            return std::stoul(parteMeio) % TABLE_SIZE;
        }

        size_t hashExtracao(const K& key) {
            std::string str = std::to_string(std::hash<K>{}(key));

            if (str.empty())
                return 0;

            size_t hash = str[0];

            if (str.length() > 1) {
                hash += str[str.length()/2];
                hash += str.back();

            }
            return hash % TABLE_SIZE;
        }

        size_t hashTransformacaoRaiz(const K& key) {
            size_t hash = std::hash<K>{}(key);
            double raiz = sqrt(hash);
            double parteFracionaria = raiz - floor(raiz);

            return (size_t)(parteFracionaria * TABLE_SIZE);
        }

        size_t (HashTable::*hashFunction)(const K&) = &HashTable::hashMultiplicacao;

        void setHashFunction(int hashType) {
            switch(hashType) {
                case 1:
                    hashFunction = &HashTable::hashMultiplicacao;
                    break;

                case 2:
                    hashFunction = &HashTable::hashEnlacamentoDeslocado;
                    break;

                case 3:
                    hashFunction = &HashTable::hashEnlacamentoLimite;
                    break;

                case 4:
                    hashFunction = &HashTable::hashMeioQuadrado;
                    break;

                case 5:
                    hashFunction = &HashTable::hashExtracao;
                    break;

                case 6:
                    hashFunction = &HashTable::hashTransformacaoRaiz;
                    break;

                default:
                    hashFunction = &HashTable::hashMultiplicacao;
                    break;
            }
        }

    public:

        HashTable(int hashType = 1) : table(TABLE_SIZE) {
            setHashFunction(hashType);
        }

        void insert(const K& key, const V& value) {
            size_t index = (this->*hashFunction)(key);

            for (auto& pair : table[index]) {
                if (pair.first == key) {
                    pair.second = value;
                    return;
                }
            }

            table[index].emplace_back(key, value);
        }

        bool get(const K& key, V& value) {
            size_t index = (this->*hashFunction)(key);

            for (const auto& pair : table[index]) {
                if (pair.first == key) {
                    value = pair.second;
                    return true;
                }
            }
            return false;
        }

        bool remove(const K& key) {
            size_t index = (this->*hashFunction)(key);
            auto& chain = table[index];

            for (auto it = chain.begin(); it != chain.end(); ++it) {
                if (it->first == key) {
                    chain.erase(it);
                    return true;
                }
            }
            return false;
        }

        string display() {
            string output;

            for (int i = 0; i < TABLE_SIZE; ++i) {
                output += "Posicao " + to_string(i) + ": ";

                for (const auto& pair : table[i]) {
                    output += "[" + pair.first + ":" + to_string(pair.second) + "] ";
                }

                output += "\n";
            }

            output.pop_back();

            return output;
        }
};

void Hashing(){
    int input;
    string sInput;

    introducao_5();

    print_falas("Primeiramente, escolha uma funcao hash");

    cout << "1. Multiplicacao" << endl;
    cout << "2. Enlacamento deslocado" << endl;
    cout << "3. Enlacamento limite" << endl;
    cout << "4. Funcao meio quadrado" << endl;
    cout << "5. Extracao" << endl;
    cout << "6. Transformacao da raiz" << endl;

    cin >> input;

    HashTable<string, int> virginia(input);

    print_falas("Ok, agora digite uma string e um numero para verificarmos como esta a colisao");

    cin >> sInput >> input;

    virginia.insert(sInput, input);

    print_falas("Afff");
    print_falas("Voce demora demais, eu preciso ir embora rapido!!");
    print_falas("Deixa que faco isso");

    virginia.insert("Resistor 1kO", 150);
    virginia.insert("Resistor 10kO", 200);
    virginia.insert("Resistor 100O", 75);
    virginia.insert("Capacitor 100nF", 80);
    virginia.insert("Capacitor 10uF", 45);
    virginia.insert("Capacitor Eletrolítico 100uF", 60);
    virginia.insert("Transistor BC548", 120);
    virginia.insert("Transistor 2N3904", 90);
    virginia.insert("CI 555", 50);
    virginia.insert("CI LM741", 40);
    virginia.insert("Diodo 1N4148", 200);
    virginia.insert("Diodo Zener 5.1V", 85);
    virginia.insert("LED Vermelho 5mm", 300);
    virginia.insert("LED Azul 5mm", 180);
    virginia.insert("Relé 5V", 30);
    virginia.insert("Relé 12V", 25);
    virginia.insert("Conector JST 2-pin", 120);
    virginia.insert("Conector Barrel Jack", 65);
    virginia.insert("Sensor TMP36", 70);
    virginia.insert("Sensor TCRT5000", 55);
    virginia.insert("Protoboard 400pts", 20);
    virginia.insert("Fonte 5V 2A", 15);

    print_falas("....................");
    print_falas("Pronto agora so precisa verificar");
    print_falas("Ainda bem que existe uma funcao para isso");
    print_falas("Um instante ....");

    cout << endl;
    print_falas(virginia.display());
    cout << endl;

    print_falas("Ta otimo, entrega isso pra mim");
    print_falas("To indo, tchau!!");
}

