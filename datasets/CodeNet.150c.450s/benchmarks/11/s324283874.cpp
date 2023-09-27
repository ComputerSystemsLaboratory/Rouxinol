#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug" << x << endl;
using namespace std;

int main(){
    int n;
    while(cin >> n){
        int cards[4][14] = {{0}};
        char suit;
        int rank;
        rep(i,n){
            cin >> suit >> rank;
            if(suit == 'S') cards[0][rank]++;
            else if(suit == 'H') cards[1][rank]++;
            else if(suit == 'C') cards[2][rank]++;
            else cards[3][rank]++;
        }
        rep(i,4){
            range(j,1,13+1){
                if(!cards[i][j]){
                    if(i == 0) cout << "S " << j << endl;
                    else if(i == 1) cout << "H " << j << endl;
                    else if(i == 2) cout << "C " << j << endl;
                    else cout << "D " << j << endl;
                }
            }
        }
    }
}