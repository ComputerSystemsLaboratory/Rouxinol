#include <iostream>
#include <vector>
#include <stack>
using namespace std;
#define maxn 100000
int n,color[maxn];
vector<int> G[maxn];
void dfs(int g,int c){
    stack<int> s;
    s.push(g);
    color[g] = c;
    while(!s.empty()){
        int u = s.top();s.pop();
        for(int i=0;i<G[u].size();i++){
            int v = G[u][i];
            if(!color[v]){
                s.push(v);
                color[v] = c;
            }
        }
    }
}
int main(){
    int m,a,b,q;
    scanf("%d%d",&n,&m);
    while(m--){
        scanf("%d%d",&a,&b);
        G[a].push_back(b);
        G[b].push_back(a);
    }
    int j=1;
    for(int i=0;i<n;i++)
        if(!color[i])
            dfs(i,j++);
    scanf("%d",&q);
    while(q--){
        scanf("%d%d",&a,&b);
        if(color[a]==color[b])
            printf("yes\n");
        else
            printf("no\n");
    }
}
