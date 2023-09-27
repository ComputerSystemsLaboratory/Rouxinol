#include<stdio.h>
#include<vector>
#include<string>
using namespace std;

vector<vector<int> >g;
int n,m,q,s,t;

vector<bool>visited;
vector<int>color;
void dfs(int s){
    for(int i=0;i<g[s].size();i++){
        if(color[g[s][i]]==-1){
            color[g[s][i]]=color[s];
            dfs(g[s][i]);
        }
    }
}
bool dfs2(int s,int t){
    if(s==t)return true;
    visited[s]=true;
    for(int i=0;i<g[s].size();i++){
        if(!visited[g[s][i]]){
            if(dfs2(g[s][i],t)){
                return true;
            }
        }
    }
    return false;
}
int main() {
    scanf("%d %d",&n,&m);
    g.resize(n);
    color.resize(n,-1);
    for(int i=0;i<m;i++){
        scanf("%d %d",&s,&t);
        g[s].push_back(t);
        g[t].push_back(s);
    }
    for(int i=0;i<n;i++){
        if(color[i]==-1){
            color[i]=i;
            dfs(i);
        }
    }
    scanf("%d",&q);
    for(int i=0;i<q;i++){
        scanf("%d %d",&s,&t);
        visited.resize(n,false);
        string s1=(dfs2(s,t)?"yes":"no");
        string s2=(color[s]==color[t]?"yes":"no");
        if(s1!=s2&&s1=="yes")return 1;
        printf((color[s]==color[t]?"yes\n":"no\n"));
    }
    return 0;
}