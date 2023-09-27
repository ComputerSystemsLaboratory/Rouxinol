//1908-1930 22m
#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<cstring>
#include<vector>
#include<stack>
using namespace std;
#define INT(x) int x; scanf("%d",&x)
#define INPUT(x) scanf("%d",&x)
#define REP1(x,n) for(int x = 0; x < n; x++)
#define REP2(x,s,e) for(int x = s; x <= e; x++)
#define BR printf("\n")
#define INF 2000000000
#define FIND 0
#define END 1

int TimeStump[100][2] = {};//find,end
vector<int> V[100];
stack<int> S;
int time_ = 1;

void DFS(int i){
    if (TimeStump[i][FIND] != 0) return;
    S.push(i);
    TimeStump[i][0] = time_;
    time_++;
    
    REP1(k,V[i].size()){
        if (TimeStump[V[i][k]][FIND] == 0){DFS(V[i][k]);}
    }
    
    S.pop();
    TimeStump[i][1] = time_;
    time_++;
}

int main(){
    INT(N);
    REP1(i,N){
        int from,n;
        scanf("%d %d",&from,&n);
        REP1(j,n){
            INT(to);
            V[i].push_back(to - 1);
        }
    }
    
    REP1(i,N) DFS(i);
    
    REP1(i,N) printf("%d %d %d\n",i+1,TimeStump[i][0],TimeStump[i][1]);
    return 0;
}