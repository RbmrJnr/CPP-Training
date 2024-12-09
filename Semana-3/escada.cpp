#include <iostream>

using namespace std;

int escada(int n){
    if(n == 1){
        return 1;
    }else if(n == 2){
        return 1;
    }else if(n == 3){
        return 2;
    }
    return escada(n - 1) + escada(n - 3);
}

int main(){
    int n;
    cin >> n;
    cout << escada(n) << endl;
}