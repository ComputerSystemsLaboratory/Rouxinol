#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>

#define INF 100000001

using namespace std;

int DP[101][101];
int *p;

int rec(int r,int c){
    int Min = INF;
    int num = c - r;
    
    for (int i = 0; i < num; i++) {
        Min = min(Min , DP[r][r+i] + DP[r+i+1][c] + p[r-1]*p[r+i]*p[c]);
    }
    return Min;
}

int main(){
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) DP[i][i] = 0;
    
    p = (int *)malloc(sizeof(int)* (N+1));
    
    cin >> p[0];
    cin >> p[1];
    int bb;
    for (int i = 2; i <= N; i++) {
        cin >> bb;
        cin >> p[i];
    }
    
    for (int i = 1; i < N; i++) DP[i][i+1] = p[i-1]*p[i]*p[i+1];
    
    
    for (int j = 0; j <= N-3 ; j++) {//?????????????????????
        for (int i = 3+j; i <= N; i++) {//????????°???????????????
            DP[i-2-j][i] = rec(i-2-j,i);
        }
    }
    
    cout << DP[1][N] << endl;
    
    return 0;
}