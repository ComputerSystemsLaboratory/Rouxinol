#include <bits/stdc++.h>
#include <vector>
#include <numeric>
#define PI 3.14159265358979323846
#define MAXINF (1e18L)
#define INF (1e9L)
#define EPS (1e-9)
#define MOD (1e9+7)
#define REP(i, n) for(int i=0;i<int(n);++i)
#define Rep(i,sta,n) for(int i=sta;i<n;i++)
#define RREP(i, n) for(int i=int(n)-1;i>=0;--i)
#define ALL(v) v.begin(),v.end()
#define FIND(v,x) (binary_search(ALL(v),(x)))
#define SORT(v) sort(ALL(v))
#define RSORT(v) sort(ALL(v));reverse(ALL(v))
#define DEBUG(x) cerr<<#x<<": "<<x<<endl;
#define DEBUG_VEC(v) cerr<<#v<<":";for(int i=0;i<v.size();i++) cerr<<" "<<v[i]; cerr<<endl
#define Yes(n) cout<<((n)?"Yes":"No")<<endl
#define YES(n) cout<<((n)?"YES":"NO")<<endl
#define pb push_back
#define fi first
#define se second
using namespace std;
template<class A>void pr(A a){cout << (a) << endl;}
template<class A,class B>void pr(A a,B b){cout << a << " "  ;pr(b);}
template<class A,class B,class C>void pr(A a,B b,C c){cout << a << " " ;pr(b,c);}
template<class A,class B,class C,class D>void pr(A a,B b,C c,D d){cout << a << " " ;pr(b,c,d);}
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll,ll> pll;


//cost_map pll -> <to, cost>
vector<ll> dijkstra(ll s, vector<vector<pll>>& cost_map){
    vector<ll> d(cost_map.size(), MAXINF);
    priority_queue<pll, vector<pll>, greater<pll>> q;
    q.push(pll(0, s));
    d[s] = 0;
    while(!q.empty()){
        pll f = q.top();q.pop();
        if(d[f.se] < f.fi) continue;
        for(auto&& v : cost_map[f.se]){
            ll value = f.fi + v.se;
            if(value < d[v.fi]) q.push(pll(d[v.fi] = f.fi + v.se, v.fi));
        }
    }
    return d;
}

//cost_map[vertex] pll -> <to, cost>
bool bellman_ford(ll s, vector<vector<pll>>& cost_map, vector<ll>& result){
    ll N = cost_map.size();
    vector<ll> d(N, MAXINF);
    d[s] = 0;
    REP(k, N){
        REP(i, N){
            if(d[i]==MAXINF)continue;
            for(auto&& v : cost_map[i]){
                if(d[v.fi] > d[i] + v.se){
                    d[v.fi] = d[i] + v.se;
                    if(k==N-1) return false;
                }
            }
        }
    }
    result = d;
    return true;
}

int main(void)
{
    int V,E,r;
    cin >> V >> E >> r;
    vector<vector<pll>> cost(V);
    REP(i, E){
        int s,t,d;
        cin >> s >> t >> d;
        cost[s].pb(pll(t,d));
    }

    vector<ll> d;
    if(bellman_ford(r, cost, d)) REP(i,V) {
        if(d[i]>INF)pr("INF");
        else pr(d[i]);
    }
    else pr("NEGATIVE CYCLE");
}
