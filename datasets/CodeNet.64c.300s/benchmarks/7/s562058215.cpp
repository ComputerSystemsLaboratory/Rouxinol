#include <utility>
#include <cstdio>
#include <cmath>
#include <climits>
#include <iostream>
using namespace std;


//---- Finding Missing Cards 2
int main(){
    int n, r, cards[4][13]={0};
    char m, marks[4]={'S', 'H', 'C', 'D'};
    cin >> n;
    for(int i=0; i<n; i++){
        scanf("%s %d", &m, &r);
        if(m==marks[0]){cards[0][r-1]=1;}
        if(m==marks[1]){cards[1][r-1]=1;}
        if(m==marks[2]){cards[2][r-1]=1;}
        if(m==marks[3]){cards[3][r-1]=1;}
    }
    for(int i=0; i<4; i++){
        for(int j=0; j<13; j++){
            if(cards[i][j]==0){
                cout << marks[i] << " " << j+1 <<endl;
            }
        }
    }
    return 0;
}