#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int NIL=-1;
const int MAX=100000;

int n, color[MAX];
vector<int> G[MAX];

void dfs(int v, int id){
    stack<int> s;
    s.push(v);
    color[v]=id;

    while(!s.empty()){
        int u=s.top(); s.pop();
        for(int i=0; i<G[u].size(); i++){
            int v1=G[u][i];
            if(color[v1]==NIL){
                color[v1]=id;
                s.push(v1);
            }    
        }
    }
}

void assignColor(){
    int id=1;

    for(int i=0; i<n; i++) color[i]=NIL;
    for(int i=0; i<n; i++){
        if(color[i]==NIL){
            dfs(i,id++);
        }
    }
}

int main(void){
    int m; cin >> n >> m;

    for(int i=0; i<m; i++){
        int s,t; scanf("%d %d", &s, &t);
        G[s].push_back(t);
        G[t].push_back(s);
    }

    assignColor();

    int q; cin >> q;
    for(int i=0; i<q; i++){
        int s,t; scanf("%d %d", &s, &t);
        if(color[s]==color[t]) printf("yes\n");
        else printf("no\n");
    }

    return 0;
}
