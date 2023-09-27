#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
typedef long long ll;
#define INF 2147483647
const int maxn=110;

int n,m[maxn][maxn];
int d[maxn],vis[maxn];
vector <pair<int ,int> > adj[maxn];
void dijkstra(){

    priority_queue<pair<int ,int> > q;
    int d[maxn];
    int color[maxn];
    for(int i=0;i<n;i++){
        d[i]=INF;
        color[i]=0;
    }
    d[0]=0;
    q.push(make_pair(0,0));
    color[0]=1;
    while(!q.empty()){

        pair<int ,int> f=q.top(); q.pop();
        int u=f.second;

        color[u]=2;

        if(d[u]<f.first*(-1)) continue;

        for(int j=0;j<adj[u].size();j++){

            int v=adj[u][j].first;
            if(color[v]==2) continue;
            if(d[v]>d[u]+adj[u][j].second){

                d[v]=d[u]+adj[u][j].second;
                q.push(make_pair(d[v]*(-1),v));
                color[v]=1;
            }
        }

    }
    for(int i=0;i<n;i++)
        cout<<i<<" "<<(d[i]==INF?-1:d[i])<<endl;

}


int main(){

    cin >>n;
    int k,c,u,v;
    for(int i=0;i<n;i++){
        cin>>u>>k;
        for(int j=0;j<k;j++){
            cin>>v>>c;
            adj[u].push_back(make_pair(v,c));
        }

    }
    dijkstra();

    return 0;
}

