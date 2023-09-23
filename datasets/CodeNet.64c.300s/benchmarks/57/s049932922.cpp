#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

const int MAX_R = 10, MAX_C = 10000;
int osenbei[MAX_R][MAX_C];
int tosenbei[MAX_R][MAX_C];
int R, C;
int A;

void dfs(int depth, int turn){
    if(depth == R){
        int a = 0;
        memcpy(tosenbei, osenbei, sizeof(osenbei));
        for(int i=0; i<R; i++){
            if(turn & 1<<i){
                int *row = tosenbei[i];
                for(int j=0; j<C; j++)
                    row[j] ^= 1;
            }
        }
        for(int i=0; i<C; i++){
            int s = 0;
            for(int j=0; j<R; j++)
                s += tosenbei[j][i];
            a += max(s, R-s);
        }
        A = max(a, A);
    }else{
        dfs(depth + 1, turn);
        dfs(depth + 1, turn ^ (1<<depth));
    }
}

void solve(){
    A = 0;
    dfs(0, 0);
    cout << A << endl;
}

int main(){
    while(scanf("%d %d", &R, &C), R|C){
        for(int i=0; i<R; i++)
            for(int j=0; j<C; j++)
                scanf("%d", &osenbei[i][j]);
        solve();
    }
    return 0;
}