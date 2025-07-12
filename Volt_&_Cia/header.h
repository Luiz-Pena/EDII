#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <bits/stdc++.h>
#include <windows.h>

using namespace std;

void print_falas (string s) {
    for (char c: s) {
        cout << c;
        Sleep(30);
    }
    cout << endl;
    Sleep(1000);
}

void Busca_Sequencial();

void Busca_Binaria();

void Busca_Texto();

void introducao_1();

void introducao_2();

void introducao_3();

void introducao_4();

void introducao_5();

struct HuffmanNode;

struct Compare;


#endif // HEADER_H_INCLUDED
