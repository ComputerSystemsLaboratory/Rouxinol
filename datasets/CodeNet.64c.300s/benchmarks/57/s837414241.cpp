#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
#define MAX_R 10
#define MAX_C 10000
int R,C;
int res;
int G[MAX_R + 1][MAX_C + 1];
int main(){
    while(cin >> R >> C){
        if(!(R || C)) break;
        for(int i = 0 ; i < R ; i++)
            for(int j = 0 ; j < C ; j++)
                cin >> G[i][j];
        int BIT_SIZE = 1 << R;
        res = 0;
        for(int j = 0 ; j < BIT_SIZE ; j++){
            int total = 0;
            for(int cc = 0 ; cc < C ; cc++){
                int k = j;
                int num0 = 0,num1 = 0;
                for(int rr = 0 ; rr < R ; rr++){
                    if(k & 1) G[rr][cc] ? num1++ : num0++;
                    else G[rr][cc] ? num0++ : num1++;
                    k >>= 1;
                }
                total += max(num0,num1);
            }
            res = max(res,total);
        }
        cout << res << endl;
    }
    return 0;
}