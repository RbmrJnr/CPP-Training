#include <iostream>

using namespace std;

void resolverHanoi(int n, int origem, int destino, int aux){
    if(n == 1){
        cout << "Mover o disco " << n << " do Pino " << origem << " para o Pino " << destino << "." << endl;
        return;
    }
    resolverHanoi(n - 1, origem, aux, destino);
    cout << "Mover o disco " << n << " do Pino " << origem << " para o Pino " << destino << "." << endl;
    resolverHanoi(n - 1, aux, destino, origem);
}

int main() {
    int nDiscos;
    cout << "Digite o número de discos: ";
    cin >> nDiscos;
    resolverHanoi(nDiscos, 1, 3, 2);
}

