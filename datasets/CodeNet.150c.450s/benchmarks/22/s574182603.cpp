#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#define all(x) (x).begin(),(x).end()
#define rep(i,n) for(int (i)=0;i<(n);i++)
#define REP(i,m,n) for(int (i)=(m);(i)<(n);(i)++)
#define INF LLONG_MAX - 100
#define MOD 1000000007
#define fcout cout << fixed << setprecision(15)
#define int long long
#define yorn(f) puts((f)?"Yes":"No")
#define YORN(f) puts((f)?"YES":"NO")
#define lower_bound lowb
#define upper_bound upb
typedef long long ll;
typedef pair<int, int> P;
typedef priority_queue<int> pque;
int gcd(int a,int b){return b?gcd(b,a%b):a;};
int lcm(int a,int b){return a*b/gcd(a,b);};
int mod(int a,int b){return (a+b-1)/b;};
template<typename A, size_t N, typename T>
void Fill(A(&array)[N],const T &val){std::fill((T*)array,(T*)(array+N),val);}
template<class T>inline bool chmax(T& a,T b){if(a<b){a=b;return true;}return false;};
template<class T>inline bool chmin(T& a,T b){if(a>b){a=b;return true;}return false;};

const int MAX_V = 1010;
const int MAX_E = 2020;
bool negative = false;

struct edge {
  int from, to, cost;
};

edge es[MAX_E];
int d[MAX_V];
int V, E; // 頂点数、辺数

void bellman_ford(int s) {
  for(int i = 0; i < V; i++) d[i] = INF;
  d[s] = 0;
  int counter = 0;

  for(int i = 0; i < V; i++) {
    bool update = false;
    for(int j = 0; j < E; j++) {
      edge e = es[j];
      if(d[e.from] != INF && d[e.to] > d[e.from] + e.cost) {
        d[e.to] = d[e.from] + e.cost;
        update = true;
      }
    }
    if(!update) break;
    if(i == V - 1) negative = true;
  }
}

signed main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);

    int start;
    cin >> V >> E >> start;
    rep(i, E) {
        cin >> es[i].from >> es[i].to >> es[i].cost;
    }

    bellman_ford(start);

    if(negative) {
        cout << "NEGATIVE CYCLE" << endl;
        return 0;
    }

    rep(i, V) {
        if(d[i] != INF) cout << d[i] << endl;
        else cout << "INF" << endl;
    }
    return 0;
}
