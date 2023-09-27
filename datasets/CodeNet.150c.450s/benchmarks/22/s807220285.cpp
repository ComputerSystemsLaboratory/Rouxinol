#include<vector>
#include<iostream>


#include<vector>

namespace ProconLib{

    template<typename cost_t>
    constexpr cost_t INF(){return cost_t(1e15);}
    template<class graph_t,class cost_t,cost_t INF=INF<cost_t>()>
    bool BellmanFord(int s,graph_t& g,std::vector<cost_t> &d){
        int n=g.size();
        d.assign(n,INF);
        bool update=true;
        d[s]=0;
        for(int loop=0;update;loop++){
            if(loop>=n+1){
                return false;
            }
            update=false;
            for(int i=0;i<n;i++){
                for(int j=0;j<g[i].size();j++){
                    if(d[i]==INF) continue;
                    int to=g[i][j].to;
                    cost_t w=d[i]+g[i][j].cost;
                    if(d[to]>w){
                        update=true;
                        d[to]=w;
                    }
                }
            }
        }
        return true;
    }

    // using Weight=long long;
    // struct Edge{
    //     int to;
    //     Weight cost;
    // };
    // using Edges=std::vector<Edge>;
    // using Graph=std::vector<Edges>;
}



using namespace std;
using Weight=long long;
struct Edge{
    int to;
    Weight cost;
};
using Edges=std::vector<Edge>;
using Graph=std::vector<Edges>;
using namespace ProconLib;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,m,r;
    cin>>n>>m>>r;
    Graph g(n);
    for(int i=0;i<m;i++){
        int u,v;
        Weight d;
        cin>>u>>v>>d;
        g[u].push_back(Edge{v,d});
    }
    vector<Weight> d(n);
    if(BellmanFord<Graph,Weight>(r,g,d)){
        for(int i=0;i<n;i++){
            if(d[i]!=INF<Weight>()) cout<<d[i]<<"\n";
            else cout<<"INF\n";
        }
    }
    else{
        cout<<"NEGATIVE CYCLE\n";
    }
    

    return 0;
}
