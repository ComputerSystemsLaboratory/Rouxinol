#include<iostream>

using namespace std;

int n, p, stone_left, P[50], winner;

int main(){
    while(cin >> n >> p && n*p!=0){
        stone_left = p;
        winner = n;
        for (int i = 0; i < n; i++) {
            P[i] = 0;
        }
        while(1){
            for(int i = 0; i < n; i++){
                if(stone_left != 0){
                    P[i] += 1;
                    stone_left -= 1;
                    if(P[i] == p) {
                        winner = i;
                        cout << winner << endl;
                        break;
                    }
                    if(winner != n) break;
                } else {
                    stone_left = P[i];
                    P[i] = 0;
                }
            }
            if(winner != n) break;
        }
    }
}