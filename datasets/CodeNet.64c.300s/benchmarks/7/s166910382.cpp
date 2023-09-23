#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
#include<stack>
#include<climits>
#include<cstring>
#include<queue>
#include<complex>
using namespace std;

int suit2num(string S){
    if(S=="S") return 0;
    if(S=="H") return 1;
    if(S=="C") return 2;
    if(S=="D") return 3;
}

int main(){
    int cards[4][13];
    for (int i=0;i<4;i++){
        for (int j=0;j<13;j++){
            cards[i][j] = 0;
        }
    }

    int n,r, suit;
    string S;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> S >> r;
        cards[suit2num(S)][r-1] = 1;
    }

    for (int i=0;i<4;i++){
        for (int j=0;j<13;j++){
            if(cards[i][j] == 0){
                if(i == 0){
                    cout << "S" << " "<< j+1 << endl;
                }
                if(i == 1){
                    cout << "H" << " "<< j+1 << endl;
                }
                if(i == 2){
                    cout << "C" << " "<< j+1 << endl;
                }
                if(i == 3){
                    cout << "D" << " "<< j+1 << endl;
                }
            }
        }
    }
    return 0;
}