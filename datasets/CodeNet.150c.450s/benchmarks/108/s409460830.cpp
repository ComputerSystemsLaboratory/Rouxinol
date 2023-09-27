//1933-
#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<cstring>
#include<vector>
#include<queue>
using namespace std;
#define INT(x) int x; scanf("%d",&x)
#define INPUT(x) scanf("%d",&x)
#define REP1(x,n) for(int x = 0; x < n; x++)
#define REP2(x,s,e) for(int x = s; x <= e; x++)
#define BR printf("\n")
#define INF 2000000000
#define FIND 1
#define END 2

vector<int> V[100];
priority_queue<pair<int,int> > PQ;//distance,id
int d[100];
int StateNode[100] = {};

void BFS(pair<int,int> p){
    if(d[p.second] <= -p.first) {
        PQ.pop();
        if(!PQ.empty()) BFS(PQ.top());
        return;
    }
    d[p.second] = -p.first;
    PQ.pop();
    
    REP1(k,V[p.second].size()){
        if (StateNode[V[p.second][k]] == 0 || (StateNode[V[p.second][k]] == FIND && -p.first+1)) {
            PQ.push(make_pair(p.first-1,V[p.second][k]));
            StateNode[V[p.second][k]] = FIND;
        }
    }
    
    if(!PQ.empty()) BFS(PQ.top());
}

int main(){
    INT(N);
    REP1(i,N){
        int from,n;
        scanf("%d %d",&from,&n);
        REP1(j,n){
            INT(to);
            V[i].push_back(to-1);
        }
        d[i] = INF;
    }
    
    PQ.push(make_pair(0,0));
    BFS(PQ.top());
    
    REP1(i,N){
        if (d[i] != INF) {
            printf("%d %d\n",i+1,d[i]);
        }else{
            printf("%d %d\n",i+1,-1);
        }
    }
    
    return 0;
}