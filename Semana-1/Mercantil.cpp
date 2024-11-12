#include <iostream>
#include <vector>

using namespace std;

int main(){
    int np;
    cin >> np;
    
    vector<float> val(np);
    vector<float> chutesp(np);
    vector<char> Mm(np);
    
    for(int i = 0; i < np; i++){
        cin >> val[i];
    }
    for(int i = 0; i < np; i++){
        cin >> chutesp[i];
    }
    for(int i = 0; i < np; i++){
        cin >> Mm[i];
    }
    int player1 = 0;
    int player2 = 0;
    for (int i = 0; i < np; i++) {
        if (val[i] == chutesp[i]) {
            player1++;
        }
        else{
            if((Mm[i] == 'M' && val[i] > chutesp[i] || (Mm[i] == 'm' && val[i] < chutesp[i]))) {
                player2++;
            }
            else{
                player1++;
            }
        }
    }
    if(player1 > player2){
        cout << "primeiro\n";
    }else if(player2 > player1){
        cout << "segundo\n";
    }else cout << "empate\n";
}