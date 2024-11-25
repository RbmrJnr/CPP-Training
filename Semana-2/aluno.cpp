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
    cin.ignore();
    cin >> aluno.matricula;
    cin.ignore();
    cin >>  aluno.disciplina;
    cin.ignore();
    cin >> aluno.nota;
    return aluno;
}

Aluno verificar(){
    Aluno check = dados();
    cout << fixed << setprecision(1);
    
    if(check.nota >= 7.0){
        cout << check.nome << " aprovado(a) em " << check.disciplina;
    }else cout << check.nome << " reprovado(a) em " << check.disciplina;
    return check;
}

int main(){
    Aluno aluno = verificar();
}