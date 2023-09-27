#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <stack>
using namespace std;

int N,M;
const int maxn = 100000+5;
const int WHITE = 0;
vector<int> G[maxn];
vector<int> nodeColor;

void DFS(int u,int color){
    stack<int> nodeStack;
    nodeStack.push(u);
    while(!nodeStack.empty()){
        int u = nodeStack.top();
        nodeStack.pop();
        nodeColor[u] = color;
        for(int i = 0;i<G[u].size();i++){
            int v = G[u][i];
            if(nodeColor[v]==0) nodeStack.push(v);
        }
    }
}

int main(){
    //freopen("data2.txt","r",stdin);
    cin >> N >> M;
    nodeColor.resize(N,0);
    int u,v;
    for(int i = 0;i<M;i++){
        scanf("%d %d",&u,&v);
        G[u].push_back(v);
        G[v].push_back(u);
    }
    int color = 1;
    for(int i = 0;i<N;i++) if(nodeColor[i]==0) DFS(i,color++);
    int q;
    scanf("%d",&q);
    for(int i = 0;i<q;i++){
        scanf("%d %d",&u,&v);
        if(nodeColor[u]==nodeColor[v]) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}



