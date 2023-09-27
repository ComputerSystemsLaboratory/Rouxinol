#include <bits/stdc++.h>
using namespace std;
using ll = long long; using ull = unsigned long long;
//#define int ll
using vb = vector<bool>; using vvb = vector<vb>;
using vi = vector<int>; using vvi = vector<vi>;
using vl = vector<ll>; using vvl = vector<vl>;
template<class T> using V = vector<T>;
template<class T> using VV = vector<V<T>>;
#define fi first
#define se second
#define maxs(x,y) (x=max(x,y))
#define mins(x,y) (x=min(x,y))
using pii = pair<int,int>; using pll = pair<ll,ll>;
#define FOR(i,a,b) for(ll i = (a); i < (ll)(b); ++i)
#define REP(i,n) FOR(i,0,n)
#define RFOR(i,a,b) for(ll i = (ll)(b)-1;i >= a;--i)
#define RREP(i,n) RFOR(i,0,n)
#define ALL(obj) (obj).begin(), (obj).end()
#define rALL(obj) (obj).rbegin(), (obj).rend()
#define eb(val) emplace_back(val)
const double PI = acos(-1), EPS = 1e-10;
const ll MOD = 1e9+7;
struct union_find_tree1{
    vector<int> par;//0-indexed
    union_find_tree1(int sz){ //コンストラクタ
        par.resize(sz); //サイズをszに変更
        for(int i=0;i<sz;++i) par[i] = i; //最初は自分が根
    }
    int find(int a){
        while(a!=par[a]){ //親が自分自身の時、自分が根である
            a = par[a];   //そうでないなら自分に親を代入して辿る
        }
        return a;         //引数aの根が計算されたのでそれを返す。
    }
    void unite(int a,int b){
        int root_a = find(a),root_b = find(b);  //aの根,bの根を調べて代入。
        par[root_a] = root_b;       //根aの親をbにする
    }
    bool same(int a,int b){  //aとbが同じ集合なら1,違うなら0
        return find(a)==find(b);
    }
};

signed main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n,q;
  cin >> n >> q;
  union_find_tree1 uf(n);
  REP(i,q){
    int com,x,y;
    cin >> com >> x >> y;
    if(com==0){
      uf.unite(x,y);
    }else{
      cout << uf.same(x,y) << endl;
    }
  }
}

