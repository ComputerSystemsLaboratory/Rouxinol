
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<string>
#include<iostream>
using namespace std;

int n,m,q;
static const int N=100005;
vector<int> G[N];
void branch(int a,int b){
    G[a].push_back(b);
    G[b].push_back(a);
}
int color[N];
void dfs(int r,int c){
    stack<int>s;
    s.push(r);
    while(!s.empty()){
        int u=s.top();s.pop();color[u]=c;
        for(int i=0;i<G[u].size();i++){
            if(color[G[u][i]]==0)s.push(G[u][i]);
        }
    }
}
void assigncolor(){
    int id=1;
    for(int u=0;u<n;u++){
        if(color[u]==0){
            dfs(u,id);
            id++;
        }
    }
}
void check(int a,int b){
    if(color[a]==color[b])printf("yes");
    else printf("no");
    printf("\n");
}
int main() {
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int a,b;cin>>a>>b;
        branch(a,b);
    }
    assigncolor();
    cin>>q;
    for(int i=1;i<=q;i++){
        int a,b;cin>>a>>b;check(a,b);
    }
    return 0;
}