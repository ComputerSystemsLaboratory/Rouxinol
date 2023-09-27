#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug" << x << endl;
using namespace std;

void role(int dice[7], char order){
    int temp;
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

int main(){
    int dice[7], n;
    rep(i,6) cin >> dice[i + 1];

    cin >> n;
    rep(i,n){
        int a, b;
        char order;
        cin >> a >> b;
        rep(k,4){
            bool c = false;
            role(dice, 'E');
            rep(i,4){
                role(dice, 'N');
                rep(j,4){
                    role(dice, 'E');
                    if(dice[1] == a && dice[2] == b){
                        c = true;
                        break;
                    }
                }
                if(c) break;
            }
            if(c) break;
        }
        cout << dice[3] << endl;
    }
}