#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
#define rep(i,n) for(int i=0; i<(n); ++i)

int stones[11][5];
int main(void){
    int H;
    while(cin >> H && H) {
        rep(i, H) rep(j, 5) cin >> stones[H-i-1][j];
        bool isFinished = false;
        int score = 0;
        while(!isFinished) {
            isFinished = true;
            rep(i, H) {
                rep(j, 3) {
                    if(stones[i][j]!=-1 &&
                       stones[i][j]==stones[i][j+1] &&
                       stones[i][j]==stones[i][j+2]) {
                        isFinished = false;
                        int d = stones[i][j];
                        for(; stones[i][j]==d && j<5; ++j) {
                            stones[i][j] = -1;
                            score += d;
                        }
                    }
                }
            }
            rep(column, 5) {
                for(int row=1; row<H; ++row) {
                    if(stones[row-1][column]==-1 && stones[row][column]!=-1) {
                        for(int i=row; i>0&&stones[i-1][column]==-1; --i) {
                            swap(stones[i-1][column], stones[i][column]);
                        }
                    }
                }
            }
        }
        cout << score << endl;
    }
}