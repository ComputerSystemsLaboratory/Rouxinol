#include <iostream>
#include <vector>
using namespace std;

int main(){
    int owan;
    int n;
    int p;
    int turn;

    while(cin >> n >> p, n != 0 && p != 0){
        turn = 0;
        vector<int> hand(n);

        for(int i=0; i<n; i++){
            hand[i] = 0;
        }

        owan = p;

        for(int i=0; i<1000000; i++){
            if(owan != 0){
                owan--;
                hand[turn]++;
            }else if(owan == 0){
                owan = hand[turn];
                hand[turn] = 0;
            }

            if(hand[turn] == p){
                break;
            }

            turn++;

            if(turn == n){
                turn = 0;
            }
        }

        cout << turn << endl;
    }
    return 0;
}