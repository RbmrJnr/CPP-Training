#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace std;

struct Alunos{
    string nome;
    double n1, n2, n3;
};

Alunos dados(){
    Alunos p;
    getline(cin, p.nome);
    cin >> p.n1;
    cin >> p.n2;
    cin >> p.n3;
    
    cin.ignore();
    return p;
}

int main(){
    int n;
    cin >> n;
    cin.ignore();
    vector<Alunos> alunos(n);
    for(int i = 0; i < n; i++){
        alunos[i] = dados();
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
        double media_j = (alunos[j].n1 + alunos[j].n2 + alunos[j].n3) / 3.0;
        double media_jp1 = (alunos[j + 1].n1 + alunos[j + 1].n2 + alunos[j + 1].n3) / 3.0;
        if (media_j < media_jp1) {
            Alunos key = alunos[j];
            alunos[j] = alunos[j + 1];
            alunos[j + 1] = key;
        }
    }
}
    for(int i = 0; i < n; i++){
        double media = (alunos[i].n1 + alunos[i].n2 + alunos[i].n3) / 3.0;
        cout << i << ": " << alunos[i].nome << endl;
        cout << "   Media: " << fixed<< setprecision(2) << media << endl;
        cout << fixed << setprecision(2) << "   N1: " << alunos[i].n1 << "," << " N2: " << alunos[i].n2 << "," <<" N3: " << alunos[i].n3  << endl;
    }
}