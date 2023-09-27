#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
using namespace std;
using cost_t=int;
struct Edge {
    int from, to;
    int cost;
    Edge(int from, int to, int cost) : from(from), to(to), cost(cost) {}
};
using Edges = vector<Edge>;
using Graph = vector<Edges>;
const int INF=1e9;
bool bellman_ford(int s,Graph& g,vector<int>& d){
    int n = g.size();
    d.assign(n,INF);
    d[s] = 0;
    bool update=true;
    for(int i=0;update;i++){
        if(i==n){
            return false;
        }
        update=false;
        for(int i=0;i<n;i++){
            if(d[i]==INF) continue;
            for(auto &e:g[i]){
                int tmp = d[i] + e.cost;
                if(tmp<d[e.to]){
                    d[e.to]=tmp;
                    update=true;
                }
            }
        }
    }
    return true;
}
int main(){
    int V,E,r;
    cin>>V>>E>>r;
    Graph g(V);
    for(int i=0;i<E;i++){
        int s,t,d;
        cin>>s>>t>>d;
        g[s].push_back(Edge(s,t,d));
    }
    vector<int> d;
    auto ret = bellman_ford(r,g,d);
    if(ret){
        for(int i=0;i<V;i++){
            if(d[i]==INF) cout<<"INF"<<endl;
            else cout<<d[i]<<endl;
        }
    }
    else{
        cout<<"NEGATIVE CYCLE"<<endl;
    }
}
