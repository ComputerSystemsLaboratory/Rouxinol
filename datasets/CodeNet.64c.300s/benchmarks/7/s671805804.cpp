#include <cstdio>
#include <iostream>
using namespace std;
 
int main(){
    int card[4][13] = { 0 };
    int n;  //枚数
    char k; //絵柄
    int t;  //数字
    int p;  //絵柄操作用変数
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> k >> t;
        if (k == 'S') p = 0;
        if (k == 'H') p = 1;
        if (k == 'C') p = 2;
        if (k == 'D') p = 3;
        card[p][t-1] = 1;
    }
     
    for (int i = 0; i < 4; i++){
        if (i == 0) k = 'S';
        if (i == 1) k = 'H';
        if (i == 2) k = 'C';
        if (i == 3) k = 'D';
        for (int j = 0; j < 13; j++){
            if (card[i][j] == 0){
                cout << k <<" "<< j + 1<< endl;
            }
        }
    }
     
    return 0;
}