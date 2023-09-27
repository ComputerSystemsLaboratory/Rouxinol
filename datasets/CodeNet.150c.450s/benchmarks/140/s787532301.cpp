#include <bits/stdc++.h>
using ll = long long;
using namespace std;
#define rep(i,n) for(int i=0, i##_len=(int)(n); i<i##_len; i++)
#define reps(i,n) for(int i=1 , i##_len=(int)(n);i<=i##_len;i++)
#define rrep(i,n) for(int i=((int)(n)-1);i>=0;i--)
#define rreps(i,n) for(int i=((int)(n));i>0;i--)
#define all(x) (x).begin(), (x).end()
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define solve(a) ((a)?"Yes":"No")
typedef vector<long long> V;
typedef vector<V> VV;
typedef pair<long long , long long> P;
typedef vector<P> VP;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1;} return 0;}
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1;} return 0;}
const long long INFLL = 1LL<<62;
const int INF = 1<<30;
const double PI=acos(-1);


//union by size + path having
class UnionFind{
    public:
    vector<long long> par; // 各元の親を表す配列
    vector<long long> siz; // 素集合のサイズを表す配列(1 で初期化)


    // Constructor
    UnionFind(long long sz_) : par(sz_), siz(sz_,1LL){
        for (long long i = 0; i < sz_; ++i)
        par[i] = i; // 初期では親は自分自身
    }
    void init(long long sz_){
        par.resize(sz_);
        siz.assign(sz_,1LL); // resize だとなぜか初期化されなかった
        for (long long i = 0; i < sz_; ++i)
            par[i] = i; // 初期では親は自分自身
    }
    // Member Function


    // Find
    long long root(long long x){ // 根の検索
        while (par[x] != x){
            x = par[x] = par[par[x]]; // x の親の親を x の親とする
        }
        return x;
    }
    // 結合(Unite, Merge),結合時にfalse;
    bool merge(long long x, long long y){
        x = root(x);
        y = root(y);
        if (x == y){
            return false;
        }
        // merge technique（データ構造をマージするテク．小を大にくっつける）
        if (siz[x] < siz[y]){
            swap(x, y);
        }
        siz[x] += siz[y];
        par[y] = x;
        return true;
    }


    // 連結判定(つながっているときはture,つながっていなければfalse)
    bool issame(long long x, long long y){ 
        return root(x) == root(y);
    }


    // 素集合のサイズ
    long long size(long long x){ 
        return siz[root(x)];
    }
};

//include UnionFind

//クラスカル法(隣接リストから最小全域木を隣接リストで返す)
//計算量 (辺)log(頂点)
vector<vector<pair<int, ll>>>Kruskal(vector<vector<pair<int,ll>>>pathlist){
    vector<pair<ll, pair<int, int>>> paths;
    int edge=pathlist.size();
    UnionFind conect(edge);
    vector<vector<pair<int, ll>>> res(edge);
    rep(i, edge){
        for (auto itr = pathlist[i].begin(); itr != pathlist[i].end(); itr++){
            paths.emplace_back(itr->S, mp(i, itr->F));
        }
    }
    sort(all(paths));
    for (auto at = paths.begin(); at != paths.end(); at++){
        if (conect.merge(at->S.F, at->S.S)){
            res[at->S.F].emplace_back(at->S.S, at->F);
            res[at->S.S].emplace_back(at->S.F, at->F);
            if (conect.size(0) == edge){
                break;
            }
        }
    }
    return res;
}

int main(){
    int v,e;
    ll ans=0LL;
    cin >>v>>e;

    vector<vector<pair<int,ll>>>path(v);

    int s,t;
    ll w;
    rep(i,e){
        cin>>s>>t>>w;
        path[s].emplace_back(t,w);
        path[t].emplace_back(s, w);
    }

    vector<vector<pair<int, ll>>> res=Kruskal(path);
    for(int i=0;i!=v;i++){
        for(auto j=res[i].begin();j!=res[i].end();j++){
            ans+=(j->S);
        }   
    }


    cout<<ans/2<<endl;
}
