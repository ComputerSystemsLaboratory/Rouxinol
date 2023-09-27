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
    std::deque<int> dq;
    std::vector<bool> in_dq(graph.size(),false);
    dist[start]=0;
    dq.push_back(start);
    in_dq[start]=true;

    int64_t denom=1,numer=0;
    auto small_label_first=[&](){
        const int u=dq.front(),v=dq.back();
        if(dist[u]>dist[v]){
            dq.pop_back();
            dq.push_front(v);
        }
    };
    auto large_label_last=[&](){
        while(dist[dq.front()]*denom>numer){
            dq.push_back(dq.front());
            dq.pop_front();
        }
    };
    while(!dq.empty()){
        const int u=dq.front();
        dq.pop_front();
        in_dq[u]=false;
        --denom;
        numer-=dist[u];
        for(const auto &edge:graph[u]){
            const int v=edge.first;
            if(dist[v]>dist[u]+edge.second){
                dist[v]=dist[u]+edge.second;
                if(!in_dq[v]){
                    dq.push_back(v);
                    in_dq[v]=true;
                    ++denom;
                    numer+=dist[v];
                    small_label_first();
                    large_label_last();
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