#include <iostream>
#include <string>

using namespace std;

bool vogais(char verificador){
    return verificador == 'a' || verificador == 'e' || verificador == 'i' || verificador == 'o' || verificador == 'u';
}

int main(){
    string frase;
    getline(cin, frase);
    for(int i = 0; i < 100; i++){
        if(vogais(frase[i]) && frase[i + 1] == ' ' && (frase[i] == frase[i + 2])){
            frase.erase(i + 1, 2);
            i--;
        }
    }
    cout << frase;
}