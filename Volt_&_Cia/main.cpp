#include "Modulo1.cpp"
#include "Modulo2.cpp"
#include "Modulo3.cpp"

int main()
{
    int ops;
    do {
        cout << "Menu:" << endl;
        cout << "0. Sair" << endl;
        cout << "1. Busca sequencial" << endl;
        cout << "2. Busca binaria" << endl;
        cout << "3. Busca em texto" << endl;
        cout << "4. Compressao" << endl;
        cout << "5. Hashing" << endl;
        cout << "6. Grafos" << endl;
        cout << "7. Navegacao em grafos" << endl;
        cout << "8. Otimizacao de caminho" << endl;

        cin >> ops;

        switch (ops) {
            case 1:
                Busca_Sequencial();
                break;

            case 2:
                Busca_Binaria();
                break;

            case 3:
                Busca_Texto ();
                break;

            case 4:
                Compressao();
                break;

            case 5:
                Hashing();
                break;

            case 6:
                Sub_Modulo1();
                break;

            case 7:
                Sub_Modulo2();
                break;

            case 8:
                Sub_Modulo3();
                break;

            default: break;
        }

    } while (ops != 0);

    return 0;
}
