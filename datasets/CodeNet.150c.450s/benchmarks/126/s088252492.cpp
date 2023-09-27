#include<iostream>
#include<cstdio>
using namespace std;

void setCnt(int n);
void clearCnt();
void loop(int x, int y);

const int MAX = 16;
int a, b, cnt[MAX][MAX][1];

int main(){
    while(cin >>a >>b){
        if(a == 0 && b == 0) break;
        int n;
        cin >>n;
        clearCnt();
        setCnt(n);
        loop(1, 1);
        cout <<cnt[a][b][0] <<endl;
    }
    return 0;
}
void clearCnt(){
    for(int i = 0; i < MAX; i++){
        for(int j = 0; j < MAX; j++){
            cnt[i][j][0] = 0;
        }
    }
}
void setCnt(int n){
    for(int i = 0; i < n; i++){
        int x, y;
        cin >>x >>y;
        cnt[x][y][0] = -1;
    }
}
void loop(int x, int y){
    int goX[2] = {0, 1}, goY[2] = {1, 0};
    for(int i = 0; i < 2; i++){
        int nextX = x + goX[i], nextY = y + goY[i];
        if(nextX <= a && nextY <= b && cnt[nextX][nextY][0] >= 0){
            cnt[nextX][nextY][0]++;
            loop(nextX, nextY);
        }
    }
}