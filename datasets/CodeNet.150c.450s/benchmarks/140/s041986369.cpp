#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define rrep(i,n) for(int (i)=((n)-1);(i)>=0;(i)--)
#define itn int
#define miele(v) min_element(v.begin(), v.end())
#define maele(v) max_element(v.begin(), v.end())
#define SUM(v) accumulate(v.begin(), v.end(), 0LL)
#define lb(a, key) lower_bound(a.begin(),a.end(),key)
#define ub(a, key) upper_bound(a.begin(),a.end(),key)
#define COUNT(a, key) count(a.begin(), a.end(), key) 
#define BITCOUNT(x) __builtin_popcount(x)
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define F first
#define S second
using P = pair <int,int>;
using WeightedGraph = vector<vector <P>>; //to cost
using UnWeightedGraph = vector<vector<int>>;
const long long INF = 1LL << 60;
const int MOD = 1000000007;
void YN(bool flg) {cout<<(flg?"YES":"NO")<<'\n';}
void Yn(bool flg) {cout<<(flg?"Yes":"No")<<'\n';}
void yn(bool flg) {cout<<(flg?"yes":"no")<<'\n';}
template <typename T> 
int getIndexOfLowerBound(vector <T> &v, T x){
    return lower_bound(v.begin(),v.end(),x)-v.begin();
}
template <typename T> 
int getIndexOfUpperBound(vector <T> &v, T x){
    return upper_bound(v.begin(),v.end(),x)-v.begin();
}
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
#define DUMPOUT cerr
#define repi(itr, ds) for (auto itr = ds.begin(); itr != ds.end(); itr++)
template <typename T, typename U>
istream &operator>>(istream &is, pair<T,U> &p_var) {
    is >> p_var.first >> p_var.second;
    return is;
}
template <typename T>
istream &operator>>(istream &is, vector<T> &vec) {
    for (T &x : vec) is >> x;
    return is;
}
template <typename T>
istream &operator>>(istream &is, vector<vector<T>> &df) {
    for(int i=0;i<df.size();i++)for(int j=0;j<df[i].size();j++)
    is >> df[i][j];
    return is;
}
template <typename T, typename U>
ostream &operator<<(ostream &os, pair<T, U> &pair_var) {
    DUMPOUT<<'{';
    os << pair_var.first;
    DUMPOUT<<',';
    os << " "<< pair_var.second;
    DUMPOUT<<'}';
    return os;
}
template <typename T>
ostream &operator<<(ostream &os, vector<T> &vec) {
    DUMPOUT<<'[';
    for (int i = 0; i < vec.size(); i++) 
    os << vec[i] << (i + 1 == vec.size() ? "" : " ");
    DUMPOUT<<']';
    return os;
}
template <typename T>
ostream &operator<<(ostream &os, vector<vector<T>> &df) {
  for (auto& vec : df) os<<vec;
  return os;
}
template <typename T, typename U>
ostream &operator<<(ostream &os, map<T, U> &map_var) {
    DUMPOUT << "{";
    repi(itr, map_var) {
        os << *itr;
        itr++;
        if (itr != map_var.end()) DUMPOUT << ", ";
        itr--;
    }
    DUMPOUT << "}";
    return os;
}
template <typename T>
ostream &operator<<(ostream &os, set<T> &set_var) {
    DUMPOUT << "{";
    repi(itr, set_var) {
        os << *itr;
        itr++;
        if (itr != set_var.end()) DUMPOUT << ", ";
        itr--;
    }
    DUMPOUT << "}";
    return os;
}
void print() {cout << endl;}
template <class Head, class... Tail>
void print(Head&& head, Tail&&... tail) {
  cout << head;
  if (sizeof...(tail) != 0) cout << " ";
  print(forward<Tail>(tail)...);
}
void dump_func() {DUMPOUT << '#'<<endl;}
template <typename Head, typename... Tail>
void dump_func(Head &&head, Tail &&... tail) {
    DUMPOUT << head;
    if (sizeof...(Tail) > 0) DUMPOUT << ", ";
    dump_func(std::move(tail)...);
}
#ifdef DEBUG_
#define DEB
#define dump(...)                                                              \
    DUMPOUT << "  " << string(#__VA_ARGS__) << ": "                            \
            << "[" << to_string(__LINE__) << ":" << __FUNCTION__ << "]"        \
            << endl                                                            \
            << "    ",                                                         \
        dump_func(__VA_ARGS__)
#else
#define DEB if (false)
#define dump(...)
#endif

struct UnionFind {
    vector <int> par; 
    vector <int> siz; 
    UnionFind(int sz): par(sz), siz(sz, 1LL) {
        rep(i, sz) par[i] = i; 
    }
    int root(int x) { 
        while (par[x] != x) x = par[x] = par[par[x]]; 
        return x;
    }
    bool merge(int x, int y) {
        x = root(x);
        y = root(y);
        if (x == y) return false;
        if (siz[x] < siz[y]) swap(x, y);
        siz[x] += siz[y];
        par[y] = x;
        return true;
    }
    bool issame(int x, int y) { 
        return root(x) == root(y);
    }
    int size(int x) { 
        return siz[root(x)];
    }
};
int kruskal(WeightedGraph &g){
    priority_queue <tuple <int,int,int>,vector <tuple<int,int,int>>,greater <tuple<int,int,int>>> q;
    rep(i, g.size()){
        rep(j, g[i].size()){
            if(i <= g[i][j].F) continue;
            q.push(make_tuple(g[i][j].S, i, g[i][j].F));
        }
    }
    struct UnionFind tree(g.size());
    int ret = 0;
    while(!q.empty()){
        auto tmp = q.top(); q.pop();
        if(tree.root(get<1>(tmp)) != tree.root(get<2>(tmp))){
            tree.merge(get<1>(tmp),get<2>(tmp)); ret+= get<0>(tmp);
        }
    }
    return ret;
}
signed main(void){
    int v,e; cin>>v>>e;
    WeightedGraph g(v);
    for(int i=0;i<e;i++){
        int a,b,c; cin>>a>>b>>c;
        g[a].pb({b, c});
        g[b].pb({a, c});
    }
    print(kruskal(g));
    
}
