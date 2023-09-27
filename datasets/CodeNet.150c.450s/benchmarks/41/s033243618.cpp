#include<bits/stdc++.h>
#define fi first
#define se second
typedef long long ll;
using namespace std;

//shortest_path
//BEGIN CUT HERE
//if you can use dijkstra,all edge's cost must be positive
//warshall_floyd vertex<=300
class shortest_path{
public:
    explicit shortest_path(int n):vertex(n),INF(0){}
    shortest_path(int n,ll inf):vertex(n),INF(inf){
        v2.resize(static_cast<unsigned long>(vertex));
        for(int i=0;i<vertex;i++)v2[i].resize(static_cast<unsigned long>(vertex));
        for(int i=0;i<vertex;i++){
            for(int j=0;j<vertex;j++){
                v2[i][j]=INF;
            }
        }
        for(int i=0;i<vertex;i++)v2[i][i]=0;
    }
    void add_edge(int from,int to,ll cost){//dijkstra and bellman_ford
        v1[from].emplace_back(to,cost);
    }
    void add_edge_(int from,int to,ll cost){//warshall_floyd
        v2[from][to]=cost;
    }
    vector<ll> dijkstra(unsigned int start){
        vector<ll> d(static_cast<unsigned long>(vertex),INF);
        priority_queue<pair<ll,int> > q;
        q.push({start,0});
        while(!q.empty()){
            int now=q.top().se;
            ll now_cost=q.top().fi;
            q.pop();
            if(d[now]<now_cost)continue;
            for (auto &i : v1[now]) {
                if(d[i.fi]>now_cost+ i.se){
                    d[i.fi]=now_cost+ i.se;
                    q.push({d[i.fi], i.fi});
                }
            }
        }
        return d;
    }
    tuple<vector<vector<ll> >,bool> warshall_floyd(){
        for(int k=0;k<vertex;k++){
            for(int i=0;i<vertex;i++){
                if(v2[i][k]==INF)continue;
                for(int j=0;j<vertex;j++){
                    if(v2[k][j]==INF)continue;
                    v2[i][j]=min(v2[i][j],v2[i][k]+v2[k][j]);
                }
            }
        }
        bool is_negative_cycle=false;
        for(int i=0;i<vertex;i++){
            if(v2[i][i]<0)is_negative_cycle=true;
        }
        return make_tuple(v2,is_negative_cycle);
    }
    tuple<vector<ll>,bool> bellman_ford(int start){
        vector<ll> d(static_cast<unsigned long>(vertex),INF);
        d[start]=0;
        bool is_negative_cycle=false;
        for(int i=0;i<vertex;i++){
            bool update= false;
            for(int j=0;j<vertex;j++){
                for(int k=0;k<(int)v1[j].size();k++){
                    if(d[v1[j][k].fi]>d[j]+v1[j][k].se){
                        d[v1[j][k].fi]=d[j]+v1[j][k].se;
                        update= true;
                    }
                }
            }
            if(i==0 && update)is_negative_cycle=true;
            else if(!update)break;
        }
        return make_tuple(d,is_negative_cycle);
    }
private:
    ll INF;
    int vertex;
    vector<vector<pair<int,ll> > > v1;
    vector<vector<ll> > v2;
};
//END CUT HERE

int main(){
    int v,e;
    cin>>v>>e;
    shortest_path sp(v,(ll)1e14);
    for(int i=0;i<e;i++){
        int from,to;
        ll cost;
        cin>>from>>to>>cost;
        sp.add_edge_(from,to,cost);
    }
    tuple<vector<vector<ll> >,bool> tp=sp.warshall_floyd();
    if(get<1>(tp)==1){
        cout<<"NEGATIVE CYCLE"<<endl;
    }else{
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                if(j==v-1){
                   if(get<0>(tp)[i][j]==(ll)1e14){
                       cout<<"INF"<<endl;
                   }else{
                       cout<<get<0>(tp)[i][j]<<endl;
                   }
                }else{
                    if(get<0>(tp)[i][j]==(ll)1e14){
                        cout<<"INF ";
                    }else{
                        cout<<get<0>(tp)[i][j]<<" ";
                    }
                }
            }
        }
    }
}
