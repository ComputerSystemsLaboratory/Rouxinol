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

vector<int> V[100];//0 origin
bool complete[100] = {};
stack<int> S;
int time_ = 1;
int NodeStump[100][2] = {};//find,end

void DFS(){
    if (S.empty()) return;
    NodeStump[S.top()][0] = time_;
    time_++;
    
    REP1(i,V[S.top()].size()){
        if (NodeStump[V[S.top()][i]][0] == 0){
            S.push(V[S.top()][i]);
            DFS();
        }
    }
    
    complete[S.top()] = true;
    NodeStump[S.top()][1] = time_;
    S.pop();
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
    
    REP1(i,N){
        if(!complete[i]){
        S.push(i);
        DFS();
        }
    }
    
    REP1(i,N) printf("%d %d %d\n",i+1,NodeStump[i][0],NodeStump[i][1]);
    
    return 0;
}