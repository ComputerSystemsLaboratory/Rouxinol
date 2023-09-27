#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
#include<cstdio>
#include<cmath>
#include<deque>
#include<numeric>
#include<queue>
#include<stack>
#include<cstring>
#include<limits>
#include<functional>
#include<unordered_set>
#include<iomanip>
#include<cassert>
#include<regex>
#include<bitset>
#include<complex>
#include<chrono>
#include<random>
#define rep(i,a) for(int i=(int)0;i<(int)a;++i)
#define rrep(i,a) for(int i=(int)a-1;i>=0;--i)
#define REP(i,a,b) for(int i=(int)a;i<(int)b;++i)
#define RREP(i,a,b) for(int i=(int)a-1;i>=b;--i)
#define pb push_back
#define eb emplace_back
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
typedef std::vector<int> vi;
typedef std::vector<std::vector<int>> vvi;
typedef std::vector<long long> vl;
typedef std::vector<std::vector<long long>> vvl;
#define out(x) cout<<x<<"\n";
using ll=long long;
constexpr ll mod = 1e9 + 7;
constexpr ll INF = 1LL << 60;

ll gcd(ll n, ll m) {
    ll tmp;
    while (m!=0) {
        tmp = n % m;
        n = m;
        m = tmp;
    }
    return n;
}

ll lcm(ll n, ll m) {
    return abs(n) / gcd(n, m)*abs(m);//gl=xy
}
 
template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}
 
using namespace std;

//グラフのテンプレート
template<typename T>
struct edge {
	int from, to;
	T cost;

    edge(int to,T cost):from(0),to(to),cost(cost){}
	edge(int from, int to, T cost) :from(from), to(to), cost(cost) {}
};

template<typename T>
T prim(vector<vector<edge<T>>> &g){//プリム法(最小全域木)
    using P=pair<T,int>;//firstがcost,secondが行き先

    T sum=0;
    vector<bool>used(g.size(),false);
    priority_queue<P,vector<P>,greater<P>>pq;
    pq.emplace(0,0);
    while(!pq.empty()){
        auto p=pq.top();
        pq.pop();
        if(used[p.second])continue;
        used[p.second]=true;
        sum+=p.first;
        for(auto &x: g[p.second]){
            pq.emplace(x.cost,x.to);
        }
    }
    return sum;
}

void solve(){
    int v,e;
    cin>>v>>e;
    vector<vector<edge<int>>>g(v);
    rep(i,e){
        int a,b,w;
        cin>>a>>b>>w;
        g[a].eb(b,w);
        g[b].eb(a,w);
    }
    cout<<prim(g)<<endl;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout<<fixed<<setprecision(15);
    solve();
    return 0;
}

