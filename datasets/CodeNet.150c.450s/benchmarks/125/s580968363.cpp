#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> G(100);
vector<pair<int,int>> D(100);
bool visited[100];
int elapse = 1;
void dfs(int x){
    if(visited[x]) return;
    visited[x] = true;
    D[x].first = elapse;
    elapse++;
    for(auto &a:G[x]) dfs(a);
    D[x].second = elapse;
    elapse++;
}
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N;
    cin>>N;
    for(int i=0;i<N;++i){
        int u,k;
        cin>>u>>k;
        for(int j=0;j<k;++j){
            int v;
            cin>>v;
            G[u-1].push_back(--v);
        }
    }
    for(int i=0;i<N;++i) dfs(i);
    for(int i=0;i<N;++i) cout<<i+1<<' '<<D[i].first<<' '<<D[i].second<<endl;
}