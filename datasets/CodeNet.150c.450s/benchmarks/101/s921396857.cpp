#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int>cc;
void dfs(vector<vector<int>> &g,int v,int id){
    cc[v]=id;
    for(auto e:g[v]){
        if(cc[e]==-1){
            dfs(g,e,id);
        }
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> g(n);
    for(int i=0;i<m;++i){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    int q;
    cin>>q;
    vector<int> s(q),t(q);
    for(int i=0;i<q;++i){
        cin>>s.at(i)>>t.at(i);
    }
    cc.assign(n,-1);
    int id=0;
    for(int i=0;i<n;++i){
        if(cc[i]==-1){
            dfs(g,i,id);
            id++;
        }
    }
    for(int i=0;i<q;++i){
        if(cc[s[i]]==cc[t[i]])cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}
