#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n <= 50){
        vector<int> vetor(n);
        for (int i = 0; i < n; i++) {
            cin >> vetor[i]; 
        }
        if(is_sorted(vetor.begin(), vetor.end())){
            cout << "ok\n";
        }else{
            cout << "precisa de ajuste\n";
        }
    }
}