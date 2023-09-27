#include <bits/stdc++.h>
using namespace std;

#define rep(i,x,y) for(int i=(x);i<(y);++i)
#define debug(x) #x << "=" << (x)

#ifdef DEBUG
#define _GLIBCXX_DEBUG
#define print(x) std::cerr << debug(x) << " (L:" << __LINE__ << ")" << std::endl
#else
#define print(x)
#endif

const int inf=1e9;
const int64_t inf64=1e18;
const double eps=1e-9;

template <typename T> ostream &operator<<(ostream &os, const vector<T> &vec){
    os << "[";
    for (const auto &v : vec) {
    	os << v << ",";
    }
    os << "]";
    return os;
}

template<class graph_type,class T> std::vector<T> spfa(const graph_type &graph,const int start){
    std::vector<T> dist(graph.size(),std::numeric_limits<T>::max());
    std::queue<int> queue;
    std::vector<bool> in_q(graph.size(),false);
    dist[start]=0;
    queue.push(start);
    in_q[start]=true;
    while(!queue.empty()){
        const int u=queue.front();
        queue.pop();
        in_q[u]=false;
        for(const auto &edge:graph[u]){
            const int v=edge.first;
            if(dist[v]>dist[u]+edge.second){
                dist[v]=dist[u]+edge.second;
                if(!in_q[v]){
                    queue.push(v);
                    in_q[v]=true;
                }
            }
        }
    }
    return dist;
}

void solve(){
    int v,e,r;
    cin >> v >> e >> r;
    vector<vector<pair<int,int>>> graph(v);
    rep(i,0,e){
        int s,t,d;
        cin >> s >> t >> d;
        graph[s].push_back(make_pair(t,d));
    }
    vector<int> dist=spfa<vector<vector<pair<int,int>>>,int>(graph,r);
    rep(i,0,v){
        if(dist[i]==std::numeric_limits<int>::max()) cout << "INF" << endl;
        else cout << dist[i] << endl;
    }
}

int main(){
    std::cin.tie(0);
    std::ios::sync_with_stdio(false);
    cout.setf(ios::fixed);
    cout.precision(10);
    solve();
    return 0;
}