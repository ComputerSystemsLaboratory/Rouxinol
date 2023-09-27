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
int roll_check(int a, int b){
    if(a == 1 && b == 2) return 3;
    if(a == 1 && b == 3) return 5;
    if(a == 1 && b == 4) return 2;
    if(a == 1 && b == 5) return 4;
    if(a == 2 && b == 1) return 4;
    if(a == 2 && b == 3) return 1;
    if(a == 2 && b == 4) return 6;
    if(a == 2 && b == 6) return 3;
    if(a == 3 && b == 1) return 2;
    if(a == 3 && b == 2) return 6;
    if(a == 3 && b == 5) return 1;
    if(a == 3 && b == 6) return 5;
    if(a == 4 && b == 1) return 5;
    if(a == 4 && b == 2) return 1;
    if(a == 4 && b == 5) return 6;
    if(a == 4 && b == 6) return 2;
    if(a == 5 && b == 1) return 3;
    if(a == 5 && b == 3) return 6;
    if(a == 5 && b == 4) return 1;
    if(a == 5 && b == 6) return 4;
    if(a == 6 && b == 2) return 4;
    if(a == 6 && b == 3) return 2;
    if(a == 6 && b == 4) return 5;
    if(a == 6 && b == 5) return 3;
}
int main(void){
    for(int i=0; i<6; i++){
        cin >> dice[i];
    }
    int N; cin >> N;
    int a, b; //a????????¢???b????????¢?????????    
    for(int i=0; i<N; i++){
        int temp_a = 0, temp_b = 0;
        cin >> a >> b;
        for(int i=0; i<6; i++){
            if(dice[i] == a){
                temp_a = i+1;
            }
            if(dice[i] == b){
                temp_b = i+1;
            }
        }
        cout << dice[roll_check(temp_a, temp_b) -1] << endl;
    }        
    return 0;
}
    