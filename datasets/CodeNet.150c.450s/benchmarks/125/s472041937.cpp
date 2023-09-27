#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>

using namespace std;

#define FIND 0
#define END 1

int  N;
bool Path[101][101] = {false};
int  TIME[101][2] = {0};
int time_tt;


void DFS(int i){
    if(TIME[i][FIND] != 0) return;
    time_tt++;
    TIME[i][FIND] = time_tt;
    
    for (int p = 1; p <= N; p++) {
        if (Path[i][p]) DFS(p);
    }
    
    time_tt++;
    TIME[i][END] = time_tt;
}

int main(){
    cin >> N;
    int bb;
    for (int i = 1; i <= N; i++) {
        int K;
        scanf("%d %d",&bb,&K);
        for (int k = 0; k < K; k++) {
            int p;
            scanf("%d",&p);
            
            Path[i][p] = true;
        }
    }
    
    time_tt = 0;
    
    for (int i = 1; i <= N; i++) {
        DFS(i);
    }
    for (int i = 1; i <= N; i++) {
        printf("%d %d %d\n",i,TIME[i][FIND],TIME[i][END]);
    }
    
    return 0;
}