#include <iostream>
#include <vector>

using namespace std;

int main(){
    float soma = 0, divi = 0, calc = 0;
    vector<int> linha1(3);
    vector<int> linha2(3);
    vector<int> linha3(3);
    
    for(int i = 1; i <= 3; i++){
        cin >> linha1[i];
        cin >> linha2[i];
        cin >> linha3[i];
    }
    
    for(int i = 1; i <= 3; i++){
        soma += linha1[i]+linha2[i]+linha3[i];
        divi += linha1[i];
        
    }  
    calc = soma/divi;
    
    if(calc == 3.0){
        cout << "sim";
    }else cout << "nao";
}