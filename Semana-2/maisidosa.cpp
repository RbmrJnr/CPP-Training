#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Pessoa{
    string nome;
    int idade;
    char sexo;
};

Pessoa pessoa(){
    Pessoa p;
    cin >> p.nome >> p.idade >> p.sexo;
    return p;
}

int main() {
    int n, maisvelha = -1, aux = -1;
    cin >> n;
    vector<Pessoa> pessoas(n);
    for (int i = 0; i < n; i++) {
        pessoas[i] = pessoa();
    }
    for (int i = 0; i < n; i++) {
        if (pessoas[i].sexo == 'f' && pessoas[i].idade > maisvelha) {
            maisvelha = pessoas[i].idade;
            aux = i;
        }
    }

    if (aux == -1) {
        cout << "nao tem mulher" << endl;
    } else {
        cout << pessoas[aux].nome << endl;
    }
}