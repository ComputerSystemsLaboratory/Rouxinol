#include <vector>
#include <list>
#include <map>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <queue>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <fstream>
#include <cstdio>
#include <climits>
#include <complex>
#include <cstdint>
#include <tuple>

#define M_PI       3.14159265358979323846

using namespace std;

//conversion
//------------------------------------------
inline int toInt(string s) { int v; istringstream sin(s); sin >> v; return v; }
template<class T> inline string toString(T x) { ostringstream sout; sout << x; return sout.str(); }
inline int readInt() { int x; scanf("%d", &x); return x; }

//typedef
//------------------------------------------
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef pair<int, PII> TIII;
typedef long long LL;
typedef unsigned long long ULL;
typedef vector<LL> VLL;
typedef vector<VLL> VVLL;

//container util

//------------------------------------------
#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define SZ(a) int((a).size())
#define SQ(a) ((a)*(a))
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())

//repetition
//------------------------------------------
#define FOR(i,s,n) for(int i=s;i<(int)n;++i)
#define REP(i,n) FOR(i,0,n)
#define MOD 1000000007

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int N, K;

struct Edge {
    int to, cost;
    Edge(int to, int cost): to(to), cost(cost) {}
};

typedef vector<vector<Edge>> AdjList;
AdjList graph;

const int INF = 100000000;

vector<int> dist;

bool bellman_ford(int n, int s) {
    dist = vector<int>(n, INF);
    dist[s] = 0;
    REP(i, n){
        REP(v, n){
            REP(k, graph[v].size()) {
                Edge e = graph[v][k];

                if(dist[v] != INF && dist[e.to] > dist[v] + e.cost) {
                    dist[e.to] = dist[v] + e.cost;
                    if(i == n-1) return true;
                }
            }
        }
    }
    return false;
}

int main() {
    //cout << fixed << setprecision(15);

    int V, E, r; cin >> V >> E >> r;

    graph = AdjList(V);

    REP(i, E){
        int s, t, d;
        cin >> s >> t >> d;
        graph[s].push_back(Edge(t, d));
    }

    if(bellman_ford(V, r)){
        cout << "NEGATIVE CYCLE" << endl;
    }else{
        for(int i=0; i<V; ++i){
            if(dist[i]==INF){
                cout << "INF" << endl;
            }else
                cout << dist[i] << endl;
        }
    }


    return 0;
}
