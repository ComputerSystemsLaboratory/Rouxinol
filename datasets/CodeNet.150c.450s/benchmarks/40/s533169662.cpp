#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug" << x << endl;
using namespace std;

int main(){
    int dice[7], temp;
    rep(i,6){
        cin >> dice[i + 1];
    }
    char order;
    while(cin >> order){
        if(order == 'E'){
            temp = dice[1];
            dice[1] = dice[4];
            dice[4] = dice[6];
            dice[6] = dice[3];
            dice[3] = temp;
        }else if(order == 'N'){
            temp = dice[1];
            dice[1] = dice[2];
            dice[2] = dice[6];
            dice[6] = dice[5];
            dice[5] = temp;
        }else if(order == 'W'){
            temp = dice[3];
            dice[3] = dice[6];
            dice[6] = dice[4];
            dice[4] = dice[1];
            dice[1] = temp;
        }else{
            temp = dice[5];
            dice[5] = dice[6];
            dice[6] = dice[2];
            dice[2] = dice[1];
            dice[1] = temp;
        }
    }
    cout << dice[1] << endl;
}