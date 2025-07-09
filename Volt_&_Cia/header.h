#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <bits/stdc++.h>
using namespace std;

void print_falas (string s, int n) {
    for (char c: s) {
        cout << c;
        Sleep(pause);
    }
    cout << endl;
}

void introducao(int n);

void Busca_Sequencial();

void Busca_Binaria();

void Busca_Texto ();


#endif // HEADER_H_INCLUDED
