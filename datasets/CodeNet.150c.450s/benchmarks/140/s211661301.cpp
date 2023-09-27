#include <bits/stdc++.h>
#define EPS 1e-9
#define INF 1070000000LL
#define MOD 1000000007LL
#define fir first
#define foreach(it,X) for(auto it=(X).begin();it!=(X).end();it++)
#define numa(x,a) for(auto x: a)
#define ite iterator
#define mp make_pair
#define mt make_tuple
#define rep(i,n) rep2(i,0,n)
#define rep2(i,m,n) for(int i=m;i<(n);i++)
#define pb push_back
#define pf push_front
#define sec second
#define sz(x) ((int)(x).size())
#define ALL( c ) (c).begin(), (c).end()
#define loop(n) for(int xxxxxxxx = 0; xxxxxxxx < (n) ; xxxxxxxx++)
#define gcd(a,b) __gcd(a,b)
#define endl "\n"
using namespace std;
template <int POS, class TUPLE> void deploy(std::ostream &os, const TUPLE &tuple){}
template <int POS, class TUPLE, class H, class ...Ts> void deploy(std::ostream &os, const TUPLE &t){ os << (POS == 0 ? "" : ", ") << get<POS>(t); deploy<POS + 1, TUPLE, Ts...>(os, t); }
template <class ...Ts> std::ostream& operator<<(std::ostream &os, const std::tuple<Ts...> &t){ os << "("; deploy<0, std::tuple<Ts...>, Ts...>(os, t); os << ")"; return os; }
template <class T> std::ostream& operator<<(std::ostream &os, std::vector<T> &v){ int remain = v.size(); os << "{"; for(auto e: v) os << e << (--remain == 0 ? "}" : ", "); return os; }
template <class T> std::ostream& operator<<(std::ostream &os, std::set<T> &v){ int remain = v.size(); os << "{"; for(auto e: v) os << e << (--remain == 0 ? "}" : ", "); return os; }
template <class T> std::ostream& operator<<(std::ostream &os, std::queue<T> q){ os << "{"; for(; !q.empty(); q.pop()){ os << q.front() << (q.size() != 1 ? ", " : "}"); } return os; }
template <class T> std::ostream& operator<<(std::ostream &os, std::priority_queue<T> q){ os << "{"; for(; !q.empty(); q.pop()){ os << q.top() << (q.size() != 1 ? ", " : "}"); } return os; }
template <class T, class K> std::ostream& operator<<(std::ostream &os, std::map<T, K> &mp){ int remain = mp.size(); os << "{"; for(auto e: mp) os << "(" << e.first << " -> " << e.second << ")" << (--remain == 0 ? "}" : ", "); return os; }
template <class T, class K> std::ostream& operator<<(std::ostream &os, std::unordered_map<T, K> &mp){ int remain = mp.size(); os << "{"; for(auto e: mp) os << "(" << e.first << " -> " << e.second << ")" << (--remain == 0 ? "}" : ", "); return os; }
#define DEBUG1(var0) { std::cerr << (#var0) << "=" << (var0) << endl; }
#define DEBUG2(var0, var1) { std::cerr << (#var0) << "=" << (var0) << ", ";DEBUG1(var1); }
#define DEBUG3(var0, var1, var2) { std::cerr << (#var0) << "=" << (var0) << ", ";DEBUG2(var1,var2); }
#define DEBUG4(var0, var1, var2, var3) { std::cerr << (#var0) << "=" << (var0) << ", ";DEBUG3(var1,var2,var3); }
#define DEBUG5(var0, var1, var2, var3, var4) { std::cerr << (#var0) << "=" << (var0) << ", ";DEBUG4(var1,var2,var3,var4); }
#define DEBUG6(var0, var1, var2, var3, var4, var5) { std::cerr << (#var0) << "=" << (var0) << ", ";DEBUG5(var1,var2,var3,var4,var5);}

typedef istringstream iss;
typedef long long ll;
typedef pair<ll,ll> pi;
typedef stringstream sst;
typedef vector<ll> vi;
#define MAX_V 10100

int par[MAX_V];
int myrank[MAX_V];

void init(int n){//要素初期化
  rep(i,n){
    par[i] = i;
    myrank[i] = 0;
  }
}

int find(int x){//木の根を求める
  if(par[x] == x){
    return x;
  }else{
    return par[x] = find(par[x]);
  }
}

void unite(int x,int y){//xとyの属する集合を併合
  x = find(x);
  y = find(y);
  if(x == y){
    return;
  }
  if(myrank[x] < myrank[y]){
    par[x] = y;
  }else{
    par[y] = x;
    if(myrank[x] == myrank[y]){
      myrank[x] += 1;
    }
  }
 
}

bool same(int x,int y){//x,yが同じ集合に属するか否か
  return find(x) == find(y);
}

//Union-find木終わり

vector <pair <pair <int,int>, ll> > edge;
int V,E;
bool comp(const pair <pair <int,int> , ll> &e1, const pair <pair <int,int>, ll> &e2){
  return e1.sec < e2.sec;
}

ll Kruscal(){
  sort(ALL(edge),comp);
  init(V+10);
  ll res = 0;
  rep(i,sz(edge)){
    pair <pair <int,int>,ll> now = edge[i];
    if(!same(now.fir.fir,now.fir.sec)){
      unite(now.fir.fir,now.fir.sec);
      res += now.sec;
    }
  }
  return res;
}

int main(){
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  cin >> V >> E;
  rep(i,E){
    int x,y;
    ll z;
    cin >> x >> y >> z;
    edge.pb(mp(mp(x,y),z));
  }
  cout << Kruscal() << endl;
  return 0;
}