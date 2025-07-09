#include <iostream>
#include "Modulo1.cpp"

using namespace std;

int main()
{
    int ops;
    do {
        cout << "Menu:" << endl;
        cout << "1. Busca sequencial" << endl;
        cout << "2. Busca binaria" << endl;
        cout << "3. Busca em texto" << endl;
        cout << "4. Sair" << endl;

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

            case 4: break;

            default: break;
        }



    while (ops != 4);

    return 0;
}
