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
#define MAX_E 20100
vector <pair <pair <int,int>,ll> >edge;
ll dis[MAX_V];
int V,E;
bool negative_cycle = false;

void bellman_ford(int s){
  fill(dis,dis+MAX_V,INF);
  dis[s] = 0;
  int loop_cnt = 0;
  while(true){
    bool update = false;
    rep(i,E){
      pair <pair <int,int>,ll> now = edge[i];
      if(dis[now.fir.fir] != INF && dis[now.fir.sec] > dis[now.fir.fir] + now.sec){
        dis[now.fir.sec] = dis[now.fir.fir] + now.sec;
        update = true;
      }
    }
    if(!update){
      break;
    }
    loop_cnt += 1;
    if(loop_cnt >= V){
      negative_cycle = true;
      break;
    }
  }
}
int main(){
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  int r;
  cin >> V >> E >> r;
  rep(i,E){
    int x,y;
    ll z;
    cin >> x >> y >> z;
    edge.pb(mp(mp(x,y),z));
  }
  bellman_ford(r);
  if(negative_cycle){
    cout << "NEGATIVE CYCLE\n";
    return 0;
  }
  rep(i,V){
    if(dis[i] == INF){
      cout << "INF\n";
    }else{
      cout << dis[i] << endl;
    }
  }
  return 0;
}