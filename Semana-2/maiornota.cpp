#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Aluno{
    string nome;
    int matricula;
    string disciplina;
    double nota;
};

Aluno dados(){
    Aluno aluno;
    cin >> aluno.nome;
    cin >> aluno.matricula;
    cin >>  aluno.disciplina;
    cin >> aluno.nota;
    
    cin.ignore();
    return aluno;
}

void calc(Aluno aluno[]){
    cout << fixed << setprecision(1);
    if(aluno[0].nota > aluno[1].nota){
        cout << aluno[0].nome << " , " << aluno[0].nota;
    }else if(aluno[0].nota == aluno[1].nota){
        cout << aluno[0].nome << " e " << aluno[1].nome << " , " << aluno[0].nota;
    }else cout << aluno[1].nome << " , " << aluno[1].nota;
}

int main(){
    Aluno aluno[2];
    for(int i = 0; i < 2; i++){
        aluno[i] = dados();
    }
    calc(aluno);
}