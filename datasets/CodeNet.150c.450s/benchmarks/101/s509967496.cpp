#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> G(100000);
vector<int> c(100000);
void dfs(int s, int x){
    if(c[s]) return;
    c[s]=x;
    for(auto a:G[s]) dfs(a,x);
}
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;++i){
        int a,b;
        cin>>a>>b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    for(int i=0;i<n;++i) dfs(i,i+1);
    int q;
    cin>>q;
    for(int i=0;i<q;++i){
        int a,b;
        cin>>a>>b;
        cout<<(c[a]-c[b]?"no":"yes")<<endl;
    }
}