#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int NIL=-1;
const int MAX=100000;

int n, color[MAX];
vector<int> G[MAX];

void dfs(int v, int id){
    color[v]=id;

    for(int i=0; i<G[v].size(); i++){
        if(color[G[v][i]]==NIL){
            dfs(G[v][i], id);
        }
    }
}

void assignColor(){
    int id=1;

    for(int i=0; i<n; i++) color[i]=NIL;
    for(int i=0; i<n; i++){
        if(color[i]==NIL){
            dfs(i,id); id++;
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
