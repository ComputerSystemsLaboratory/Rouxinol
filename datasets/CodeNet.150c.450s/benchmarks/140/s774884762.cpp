#include <bits/stdc++.h>
using namespace std;

#define rep(i,x,y) for(int i=(x);i<(y);++i)
#define debug(x) #x << "=" << (x)

#ifdef DEBUG
#define _GLIBCXX_DEBUG
#define show(x) std::cerr << debug(x) << " (L:" << __LINE__ << ")" << std::endl
#else
#define show(x)
#endif

typedef long long int ll;
typedef pair<int,int> pii;
template<typename T> using vec=std::vector<T>;

const int inf=1<<30;
const long long int infll=1LL<<62;
const double eps=1e-9;
const int dx[]={1,0,-1,0},dy[]={0,1,0,-1};

template <typename T> ostream &operator<<(ostream &os, const vector<T> &vec){
    os << "[";
    for (const auto &v : vec) {
    	os << v << ",";
    }
    os << "]";
    return os;
}

int prim(const vector<vector<pair<int,int>>> &graph){
    typedef pair<int,int> pii; //(cost,to)
    int res=0;
    priority_queue<pii,vector<pii>,greater<pii>> que;
    vector<bool> used(graph.size());
    que.push(make_pair(0,0));
    while(!que.empty()){
        auto cost=que.top().first;
        auto v=que.top().second;
        que.pop();
        if(used[v]) continue;
        res+=cost;
        used[v]=true;
        for(auto &e:graph[v]){
            if(used[e.second]) continue;
            que.push(e);
        }
    }
    return res;
}

void solve(){
    int size_v,size_e;
    cin >> size_v >> size_e;
    vector<vector<pii>> graph(size_v);
    rep(i,0,size_e){
        int s,t,w;
        cin >> s >> t >> w;
        graph[s].push_back(make_pair(w,t));
        graph[t].push_back(make_pair(w,s));
    }
    cout << prim(graph) << endl;
}

int main(){
    std::cin.tie(0);
    std::ios::sync_with_stdio(false);
    cout.setf(ios::fixed);
    cout.precision(10);
    solve();
    return 0;
}