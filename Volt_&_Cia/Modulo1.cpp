#include <bits/stdc++.h>
#include "header.h"
#include <windows.h>


using namespace std;

int intervalo = 1000;


void Busca_Texto (){
    introducao_3();

    string armazem = "resistorcapacitorresistordiodotransistorresistorindutor";
    string parte = "resistor";
    string substring[2];

    int n = armazem.length();
    int m = parte.length();
    int p = 0;
    int t = 0;
    int h = 1;
    int q = 13;
    int d = 256;

    int input;

    bool busca = true;
    bool resultado;

    for (int i = 0; i < m - 1; i++)
        h = (h * d) % q;

    for (int i = 0; i < m; i++) {
        p = (d * p + parte[i]) % q;
        t = (d * t + armazem[i]) % q;
    }

    do {
        for (int s = 0; s <= n - m; s++) {
            print_falas("Codigo a ser buscado: " + to_string(p));
            print_falas("Codigo atual: " + to_string(t));
            print_falas("Sao iguais?");

            cout << "1. Nao" << endl;
            cout << "2. Sim" << endl;

            cin >> input;

            system("cls");

            substring[0].clear();
            substring[1].clear();

            bool match = true;

            for (int j = 0; j < m; j++) {
                substring[0] += armazem[s+j];
                substring[1] += parte[j];


                if (armazem[s + j] != parte[j]) {
                    match = false;
                }
            }


            switch (input) {
                case 1:
                    if (match)
                        busca = false;

                    break;

                case 2:
                    print_falas("Substring descoberta: " + substring[0]);
                    print_falas("Substring a ser bucada: " + substring[1]);
                    print_falas("Sao iguais?");

                    cout << "1. Nao" << endl;
                    cout << "2. Sim" << endl;

                    cin >> input;

                    system("cls");

                    switch (input) {
                        case 1:
                            if (match)
                                busca = false;
                            break;

                        case 2:
                            if (!match)
                                busca = false;
                            break;

                        default:
                            print_falas("Te darei o beneficio da duvida e nao iremos para a proxima janela");

                            s--;
                            break;
                    }

                    break;

                default:
                    print_falas("Te darei o beneficio da duvida e nao iremos para a proxima janela");

                    s--;
                    break;
            }

            if (s < n - m) {
                t = (d * (t - armazem[s] * h) + armazem[s + m]) % q;

                if (t < 0)
                    t += q; // garante t não negativo
            }
        }

        resultado = busca;

        print_falas("Percorremos todas as janelas, agora o resultado sera revelado: ");

        if (busca) {
            print_falas("Parabens! Voce concluiu com sucesso a busca em texto");
            print_falas("Voce buscou mais resistores em um armazem! So que desta vez codificado");
        }


        else  {
            print_falas("Parabens! Voce falhou!");
            print_falas("Nao se preocupe, nao estamos com pressa!");
            print_falas("Volte e tente novamente!");

            busca = true;
        }

        Sleep(1000);

    } while (!resultado);

}

void Busca_Binaria(){
    introducao_2();

    vector <string> armazem = {"2", "5", "7", "11",
                                        "13", "17", "19", "23", "29",
                                        "31", "37", "41", "47", "53"};

    int comeco = 0;
    int fim = armazem.size() - 1;
    bool coletado = false;

    int input;
    map <string, string> itens;

    itens["2"] = "capacitor";
    itens["5"] = "diodo";
    itens["7"] = "transistor";
    itens["11"] = "indutor";
    itens["13"] = "CI";
    itens["17"] = "LED";
    itens["19"] = "transformador";
    itens["23"] = "potenciometro";

    itens["29"] = "rele";

    itens["31"] = "fusivel";
    itens["37"] = "cristal";

    itens["41"] = "display";

    itens["47"] = "optoacoplador";
    itens["53"] = "fonte";


    do {
        while (comeco <= fim) {
            int meio = (comeco - fim) / 2;

            print_falas("(Voce caminha para a " + to_string(meio) + " gaveta do armazem, ela esta etiquetada com o numero " + armazem[meio] + ")");

            cout << "1. Coletar item" << endl;
            cout << "2. Ir para o metade a esquerda" << endl;
            cout << "3. Ir para a metade a direita" << endl;
            cout << "4. Terminar busca" << endl;

            cin >> input;

            system("cls");

            switch (input) {
                case 1:
                    if (armazem[meio] != "display")
                        print_falas ("Isso nao e um display, é um " + itens[armazem[meio]] + "... O que eu to pensando?");

                    else {
                        print_falas ("(O display foi encontrado)");
                        coletado = true;
                    }

                    break;

                case 2:
                    fim = meio-1;
                    break;

                case 3:
                    comeco = meio+1;
                    break;

                case 4: break;

                default:
                    print_falas ("(Nada ocorreu)");
                    break;

            }

            if (input == 4) break;


        }

        system("cls");

        if (coletado) {
            print_falas ("Parabens a segunda etapa foi concluida, o display foi coletado corretamente");
            print_falas ("O que voce ganha com isso?");
            print_falas ("Oras, conhecimento! Pratica! O que mais voce quer!?");
            Sleep(intervalo);
        }

        else {
            print_falas ("Por algum motivo a busca falhou....");
            print_falas ("Mas relaxe! Descanse as pernas e tente novamente!");
            print_falas ("Bem.... nao e como se voce pudesse reclamar para mim");
            print_falas ("Sem mais conversa, volte e tente de novo");
            print_falas ("Nao e como se tivesse outra opcao mesmo.....");

            comeco = 0;
            fim = armazem.size() - 1;
        }

    } while (!coletado);
}

void Busca_Sequencial (){
    introducao_1();

    vector <string> armazem_original = {"3", "2" , "3" , "5" , "7", "3", "11",
                                        "13", "3" ,"17"};
    int pos = 0;
    pair <bool, int> inventario = {true, 0};
    map <string, string> itens;

    itens["3"] = "resistor";
    itens["2"] = "capacitor";
    itens["5"] = "diodo";
    itens["7"] = "transistor";
    itens["11"] = "indutor";
    itens["13"] = "CI";
    itens["17"] = "LED";

    do {
        vector <string> armazem = armazem_original;
        int input;

        do {
            if (armazem[pos] != "vazio")
                print_falas("(A" + to_string(pos + 1) + " gaveta do armazem esta etiquetada com o numero " + armazem[pos] + ")");

            else
                print_falas("(A " + to_string(pos + 1) + " gaveta do armazem esta vazia)");


            cout << "1. Coletar itens" << endl;
            cout << "2. Ir para o proximo" << endl;
            cout << "3. Ir para o anterior" << endl;
            cout << "4. Terminar busca" << endl;

            cin >> input;

            system("cls");

            switch (input) {
                case 1:
                    if (armazem[pos] == "vazio")
                        cout << "Os itens aqui ja foram coletados" << endl;

                    else {
                        cout << "Voce coletou os itens" << endl;
                        Sleep(intervalo);

                        inventario.second ++;

                        if (armazem[pos] != "3") {
                            inventario.first = false;

                            print_falas("Calma.... Era pra eu ter coletado um " + itens[armazem[pos]] + " mesmo? Acho melhor terminar por aqui e checar se fiz certo");
                        }

                        armazem[pos] = "vazio";
                    }

                    break;

                case 2:
                    if (pos + 1 == armazem.size()) {
                        print_falas("(Sem perceber que voce chegou ao fim do armazem voce acaba batendo de cara na parede)");
                        print_falas("(Por conta do impacto voce cai proximo ao local que estava)");
                    }
                    else
                        pos++;

                    break;

                case 3:
                    if (pos - 1 < 0) {
                        print_falas("(Sem perceber que voce chegou no comeco do armazem voce acaba batendo de cara na parede)");
                        print_falas("(Por conta do impacto voce cai proximo ao local que estava)");
                    }
                    else
                        pos --;

                    break;

                case 4: break;

                default:
                    print_falas("Voce tambem nao acha que a vida seria melhor se os usuarios seguissem o que o programa faz?");
                    break;
            }

            Sleep(intervalo);

        } while (input != 4);

        print_falas("Antes de continuar seu progresso na aplicacao Volt & Cia, vamos verificar se a etapa atual foi feita corretamente");

        if (inventario.first == true && inventario.second < 4)
            print_falas("A quantidade de resistores apresentada foi insuficiente, por favor, volte e pegue os que faltam.");

        else if (inventario.second > 4) {
            print_falas("Voce coletou itens demasiados, por conta disso, seu progresso sera reiniciado.");
            print_falas("Por favor, volte e comece de novo e lembre-se: os resistores sao o de numero 3.");

            inventario = {true, 0};
        }

        else if (inventario.first == false){
            print_falas("Voce coletou itens diferentes de resistores, lembre-se: os resistores equivalem ao numero 3");
            print_falas("Por favor, volte e comece de novo.");

            inventario = {true, 0};
        }

        else if (inventario.second < 4)
            print_falas("Nenhum item coletado. Lembre-se de coletar os resistores de numero 3");

    } while (inventario.first != true && inventario.second != 4);

    print_falas("Parabens! Voce coletou todos os resistores pedidos.");
    print_falas("A primeira etapa foi concluida!");
}

void introducao_1 (){
    int input;

    system("cls");

    print_falas ("Saudacoes, voce esta na aplicacao da empresa Volt & Cia.");
    print_falas ("Aqui voce tera uma introducao de sua funcao na empresa.");

    cout << "1. Nao estou pronto para entrar no mercado de trabalho ainda" << endl;
    cout << "2. Oba amo trabalhar" << endl;
    cout << "3. Quero aumento!" << endl;

    cin >> input;

    system("cls");

    switch (input){
        case 1:
            cout << "- Nao estou pronto para entrar no mercado de trabalho ainda" << endl;
            break;

        case 2:
            cout << "- Oba amo trabalhar" << endl;
            break;

        case 3:
            cout << "- Quero aumento!" << endl;
            break;

        default:
            cout << "(Voce diz coisas que nao foram esperadas pelo sistema)" << endl;
            break;
    }

    Sleep(intervalo);

    print_falas ("ATENCAO! O GUIA DE INTRODUCAO NAO POSSUI COMUNICACAO COM USUARIO!");
    print_falas ("Aguarde um momento enquanto a introducao carrega...");
    print_falas ("Por favor, busque no armazem todos os resistores, eles estao etiquetados com o numero 3");

    cout << "1. (Nao falar nada)" << endl;
    cout << "2. Obrigado chefia!" << endl;

    cin >> input;

    system("cls");

    switch (input) {
        case 1:
            cout << "(Voce decide nao falar nada respeitando a ordem do programa)" << endl;
            break;

        case 2:
            cout << "- Obrigado chefia!" << endl;
            print_falas ("ATENCAO! O GUIA DE INTRODUCAO NAO POSSUI COMUNICACAO COM USUARIO!");
            break;

        default:
            cout << "(Voce digita algo alem do escopo do sistema)" << endl;
            print_falas ("ATENCAO! O GUIA DE INTRODUCAO NAO POSSUI COMUNICACAO COM USUARIO!");
            break;
    }
    Sleep(intervalo);

}

void introducao_2 (){
    int input;

    system("cls");

    print_falas ("Bem vindo a segunda etapa da introducao de Volt & Cia");

    print_falas ("Antes de comecar tenho alguns avisos, como o tempo de desenvolvimento da aplicacao foi reduzido, algumas features foram afetadas...");
    print_falas ("Sao elas: Comunicacao com usuario");

    cout << "1. Mas nem tinha antes!" << endl;
    cout << "2. Mas o projeto nem comecou direito e ja ta indo pro fundo do poco?" << endl;
    cout << "3. ?" << endl;

    cin >> input;

    system("cls");

    cout << "Bem vindo a segunda etapa da introducao de Volt & Cia" << endl;
    cout << "Antes de comecar tenho alguns avisos, como o tempo de desenvolvimento da aplicacao foi reduzido, algumas features foram afetadas..." << endl;
    cout << "Sao elas: Comunicacao com usuario" << endl;

    print_falas("Desing de cada fase introdutoria");
    print_falas("Resumindo: comunicacao 0 com usuario e reutilizacao de partes");
    print_falas("Boa sorte!");
    print_falas ("Algumas modificacoes foram feitas no armazem que sera buscado");
    print_falas ("Modificacao numero 1: o armazem esta organizado em ordem crescente");
    print_falas ("Modificacao numero 2: os seus passos serao contados e serao mostrados para toda empresa");
    print_falas ("Entao o recomendado e fazer algo similar a uma busca binaria, ja que nao nos responsabilizamos por qualquer criticas direcionadas ao intelecto");
    print_falas("Sem mais conversas, encontre um display para mim, ele esta no numero 41, nao precisa coleta-lo");

    Sleep(intervalo*5);
}

void introducao_3 (){
    int input;

    system("cls");

    print_falas ("...");

    cout << "1. Eu posso falar dessa vez?" << endl;
    cout << "2. O que foi agora?" << endl;
    cout << "3. Vou fazer uma reclamacao sua, cade a comunicacao com usuario??" << endl;

    cin >> input;

    system("cls");

    switch (input) {
        case 1:
            cout << "- Eu posso falar dessa vez?" << endl;

            print_falas ("Pode, o senior reclamou da falta de comunicacao de usuario");
            break;

        case 2:
            cout << "- O que foi agora?" << endl;

            print_falas ("Com o fiasco da ultima fase, recebi muitas criticas");
            print_falas ("Na verdade, das duas ultimas, a segunda recebi mais feedback negativo que nunca");
            break;

        case 3:
            cout << "- Vou fazer uma reclamacao sua, cade a comunicacao com usuario??" << endl;

            print_falas ("Desta vez tem, juro! Pelo menos nesse comeco");
            break;

        default:
            cout << "(Voce decide ser rebelde e apertar o botao " + to_string(input) + ", que nao estava nas opcoes dadas)" << endl;

            print_falas ("Usuarios sendo usuarios... eu acho....");
            break;
    }

    Sleep(intervalo);

    cout << "1. O que eu preciso fazer agora?" << endl;
    cout << "2. A personalidade desse programa ta diferente" << endl;

    cin >> input;

    system("cls");

    switch (input) {
        case 1:
            cout << "- O que eu preciso fazer agora?" << endl;

            print_falas ("Direto ao ponto hein");
            break;

        case 2:
            cout << "- A personalidade desse programa ta diferente" << endl;

            print_falas ("Cansei de ser alguem que nunca fui!");
            break;

        default:
            cout << "(Tive uma ideia! apertarei " + to_string(input) + ")" << endl;

            print_falas ("Isso usuario! De o seu melhor!!");
            break;
    }

    Sleep(intervalo);

    print_falas ("Agora o tema da busca sera pesquisa em texto");
    print_falas ("A grosso modo, iremos compactar o texto e a parte procurada");
    print_falas ("Depois disso, procuraremos padroes que podem ou nao corresponder ao que queremos");
    print_falas ("Eu digo iremos e procuraremos, mas quem vai fazer isso é vc :)");
    print_falas ("Bem nao e bem um texto que iremos buscar....");
    print_falas ("Voce vai entender melhor quando comecar");
    print_falas ("Sem corpo mole vamos, la!");
}
