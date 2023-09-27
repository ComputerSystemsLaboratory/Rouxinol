
#include<bits/stdc++.h>

using namespace std;

const int maxn=1e5+5;
const int NIL=-1;

int n,color[maxn];
vector<int>g[maxn];

void dfs(int r,int c)
{
    stack<int>s;
    s.push(r);
    color[r]=c;
    while(!s.empty()){
        int u=s.top();
        s.pop();
        for(int i=0;i<g[u].size();i++){
            int v=g[u][i];
            if(color[v]==NIL){
                color[v]=c;
                s.push(v);
            }
        }
    }
}

void assigncolor()
{
    int id=1;
    for(int i=0;i<n;i++){
        color[i]=NIL;
    }
    for(int u=0;u<n;u++){
        if(color[u]==NIL){
            dfs(u,id++);
        }
    }
}

int main()
{
    int s,t,m,q;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>s>>t;
        g[s].push_back(t);
        g[t].push_back(s);
    }
    assigncolor();
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>s>>t;
        if(color[s]==color[t]){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}
/*
10 9
0 1
0 2
3 4
5 7
5 6
6 7
6 8
7 8
8 9
3
0 1
5 9
1 3
*/

