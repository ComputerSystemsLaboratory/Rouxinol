#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <stdio.h>
#include <cmath>
#include <set>
#include <map>
using namespace std;

vector<vector<int> >g;
int n,m,q;

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
int main() {
    cin>>n>>m;
    g.resize(n);
    color.resize(n,-1);
    for(int i=0;i<m;i++){
        int s,t;
        cin>>s>>t;
        g[s].push_back(t);
        g[t].push_back(s);
    }
    for(int i=0;i<n;i++){
        if(color[i]==-1){
            color[i]=i;
            dfs(i);
        }
    }
    cin>>q;
    for(int i=0;i<q;i++){
        int s,t;
        cin>>s>>t;
        cout<<(color[s]==color[t]?"yes":"no")<<endl;
    }
    return 0;
}