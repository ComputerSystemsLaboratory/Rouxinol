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
vector <pair <int,ll> > edge[MAX_V];//edgeのコスト
bool used[MAX_V];//頂点iがxに含まれているかどうか
int V,E;
ll res;
void Prim(){
  memset(used,0,sizeof(used));
  priority_queue<pair <ll,int> , vector <pair <ll,int> >, greater<pair <ll,int> > > que;
  //集合Xに0を入れる
  que.push(mp(0,0));
  res = 0;
  while(!que.empty()){
    pair <ll,int> now_v = que.top();
    que.pop();
    if(!used[now_v.sec]){
      res += now_v.fir;
      used[now_v.sec] = true;
    }else{
      continue;
    }
    rep(i,sz(edge[now_v.sec])){
      if(!used[edge[now_v.sec][i].fir]){
        que.push(mp(edge[now_v.sec][i].sec,edge[now_v.sec][i].fir));
      }
    }
  }
}
int main(){
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  cin >> V >> E;
  rep(i,E){
    int x,y;
    ll z;
    cin >> x >> y >> z;
    edge[x].pb(mp(y,z));
    edge[y].pb(mp(x,z));
  }
  Prim();
  cout << res << endl;
  
  return 0;
}