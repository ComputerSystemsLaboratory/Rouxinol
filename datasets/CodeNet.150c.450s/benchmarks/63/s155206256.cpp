#include<bits/stdc++.h>

#define rep(i,N) for(int i=0;i<N;i++)
#define rep2(i,N) for(int i=1;i<=N;i++)
using namespace std;
long long  INF=1e18;
long long mod=1e9+7;

typedef pair<long long,long long>P;
int v,e,r;

vector<P>edge[100010];



//practicing
vector<long long>dijkstra(int start){

    vector<long long>dist(v,INF);
    dist[start]=0;

    priority_queue<P,vector<P>,greater<P>>pq;

    pq.push(P(dist[start],start));

    while(!pq.empty()){

    auto now=pq.top();
    pq.pop();
    
    long long d=now.first;
    int from=now.second;
    if(dist[from]<d)continue;

        for(auto nxt:edge[from]){
            int to=nxt.first;
            long long c=nxt.second;

            if(dist[from]+c<dist[to]){
                dist[to]=dist[from]+c;
                pq.push(P(dist[to],to));
            }
        }

    }

    return dist;
}
int main(){
    
    cin>>v>>e>>r;

    for(int i=0;i<e;i++){
        int s,t;
        long long d;
        cin>>s>>t>>d;
        edge[s].push_back(P(t,d));
    }
    auto dist=dijkstra(r);

    for(int i=0;i<v;i++){
        if(dist[i]==INF)cout<<"INF"<<endl;
        else{
            cout<<dist[i]<<endl;
        }
    }

    return 0;

}
/*


*/

