#include<bits/stdc++.h>
using namespace std;
#define DICE 6
int dice[DICE];

void N_move(){
    int temp;
    temp = dice[0]; dice[0] = dice[1]; dice[1] = dice[5]; dice[5] = dice[4]; dice[4] = temp;
}
void E_move(){
    int temp;
    temp = dice[0]; dice[0] = dice[3]; dice[3] = dice[5]; dice[5] = dice[2]; dice[2] = temp;
}
void S_move(){
    int temp;
    temp = dice[0]; dice[0] = dice[4]; dice[4] = dice[5]; dice[5] = dice[1]; dice[1] = temp;
}
void W_move(){
    int temp;
    temp = dice[0]; dice[0] = dice[2]; dice[2] = dice[5]; dice[5] = dice[3]; dice[3] = temp;
}
int main(void){
    for(int i=0; i<6; i++){
        cin >> dice[i];
    }
    string S; cin >> S;
    for(int i=0; i<S.size(); i++){
        if(S[i] == 'N') N_move();
        if(S[i] == 'E') E_move();
        if(S[i] == 'S') S_move();
        if(S[i] == 'W') W_move();
    }
    cout << dice[0] << endl;
            
    return 0;
}
    