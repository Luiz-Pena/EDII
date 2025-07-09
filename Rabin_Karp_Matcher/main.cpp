#include <bits/stdc++.h>

using namespace std;

void RabinKarp(string &T, string &P, int q, int d) {
    int n = T.length();
    int m = P.length();
    int p = 0; // hash do padrao
    int t = 0; // hash do original
    int h = 1;

    for (int i = 0; i < m - 1; i++)
        h = (h * d) % q;

    for (int i = 0; i < m; i++) {
        p = (d * p + P[i]) % q;
        t = (d * t + T[i]) % q;
    }

    for (int s = 0; s <= n - m; s++) {
        // Verifica hash
        if (p == t) {
            // Verifica caractere por caractere
            bool match = true;
            for (int j = 0; j < m; j++) {
                if (T[s + j] != P[j]) {
                    match = false;
                    break;
                }
            }
            if (match)
                cout << "Padrao ocorre com deslocamento " << s << endl;
        }

        // Calcula hash para próxima janela
        if (s < n - m) {
            t = (d * (t - T[s] * h) + T[s + m]) % q;

            if (t < 0)
                t += q; // garante t não negativo
        }
    }


}

int main()
{
    int primo = 13, tamanho_alfabeto = 256;
    string original = "ABCCDDAEFGABCDABC", parte = "ABC";

    RabinKarp(original, parte, primo, tamanho_alfabeto);

    return 0;
}
