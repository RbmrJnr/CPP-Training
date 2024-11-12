#include <iostream>
#include <iomanip>

using namespace std;

double fatorial(int n){
    double fatorial = 1.0;
    for(int i = 1; i <= n ; i++){
        fatorial = fatorial * i;
    }
    return fatorial;
}

double euler(int n){
    double euler = 1.0;
    for(int i = 1; i <= n; i++){
        euler += 1/fatorial(i);
    }
    return euler;
}

int main(){
    int n;
    cin >> n;
    cout << fixed << setprecision(6) << euler(n);
}