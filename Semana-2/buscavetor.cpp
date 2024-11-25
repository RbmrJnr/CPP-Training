#include <iostream>
#include <iomanip>

using namespace std;

struct Aluno{
    int matricula;
    string nome;
    double media;
};

Aluno dados(){
    Aluno aluno;
    cin >> aluno.matricula;
    cin.ignore();
    getline(cin, aluno.nome);
    cin >> aluno.media;
    return aluno;
}

int main(){
    int n, m;
    cin >> n;
    Aluno aluno[n];
    
    for(int i = 0; i < n; i++){
        aluno[i] = dados();
    }
    
    cout << fixed << setprecision(1);
    
    cin >> m;
    bool aux = false;
    for(int i = 0; i < n; i++){
        if(aluno[i].matricula == m){
            cout << aluno[i].nome << "\n" << aluno[i].media;
            aux = true;
            break;
        }
    }
    if(aux == false){
        cout << "NAO ENCONTRADA";
    }
}