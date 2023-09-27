#include<iostream>
#include<queue>
#include<vector>
using namespace std;
vector<vector<int>> G(100);
vector<int> d(100);
const int INF = 1<<28;
void bfs(){
    queue<int> Q;
    Q.push(0);
    fill(d.begin(),d.end(),INF);
    d[0]=0;
    while(!Q.empty()){
        int u=Q.front();
        Q.pop();
        for(auto a:G[u]){
            if(d[a]!=INF) continue;
            d[a]=d[u]+1;
            Q.push(a);
        }
    }
}
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        int u,k;
        cin>>u>>k;
        for(int j=0;j<k;++j){
            int v;
            cin>>v;
            G[u-1].push_back(v-1);
        }
    }
    bfs();
    for(int i=0;i<n;++i)
        cout<<i+1<<' '<<(d[i]==INF?-1:d[i])<<endl;
}