#include <iostream>

using namespace std;

int main(){
    int matriz[3][3];
    int res = 0;
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3 ; j++){
            cin >> matriz[i][j];
        }
    }
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            if(matriz[j][i] > matriz[j+1][i]){
                res++;
            }
        }
    }
    cout << res << "\n";
    
}