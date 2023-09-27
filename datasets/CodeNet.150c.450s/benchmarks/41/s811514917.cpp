#include <bits/stdc++.h>
using namespace std;

//using Graph = vector<vector<edge>>;
using dou =long double;
string yes="yes";
string Yes="Yes";
string YES="YES";
string no="no";
string No="No";
string NO="NO";

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
#define rep(i, n)         for(int i = 0; i < (int)(n); i++)
#define brep(n)           for(int bit=0;bit<(1<<n);bit++)
#define erep(i,container) for (auto i : container)
#define irep(i, n)        for(int i = n-1; i >= (int)0; i--)
#define rrep(i,m,n) for(ll i = m; i < (ll)(n); i++)
#define reprep(i,j,h,w) rep(i,h)rep(j,w)
#define all(x) (x).begin(),(x).end()
#define VEC(type,name,n) std::vector<type> name(n);rep(i,n)std::cin >> name[i];
#define pb push_back
#define pf push_front
#define query int qq;std::cin >> qq;rep(qqq,qq)
#define lb lower_bound
#define ub upper_bound
#define fi first
#define se second
#define itn int
#define mp make_pair
#define sum(a) accumulate(all(a),0ll)
#define keta fixed<<setprecision
#define vvector(name,typ,m,n,a)vector<vector<typ> > name(m,vector<typ> (n,a))
#define vvvector(name,t,l,m,n,a) vector<vector<vector<t> > > name(l, vector<vector<t> >(m, vector<t>(n,a)));
#define vvvvector(name,t,k,l,m,n,a) vector<vector<vector<vector<t> > > > name(k,vector<vector<vector<t> > >(l, vector<vector<t> >(m, vector<t>(n,a)) ));
#define case std::cout <<"Case #" <<qqq+1<<": "
#define res resize
#define as assign
#define ffor for(;;)
#define ppri(a,b) std::cout << a<<" "<<b << std::endl
#define pppri(a,b,c) std::cout << a<<" "<<b <<" "<< c<<std::endl
#define aall(x,n) (x).begin(),(x).begin()+(n)
#define ssum(a) accumulate(a,0ll) 
#define gre(n) greater<n>()

typedef long long ll;
typedef pair<int,int> P;
typedef pair<ll,ll> PL;
//typedef long long T;
const int INF = 1000000000;
const ll INF64 = 922337203685477580ll;
const ll MOD = 1000000007ll;
const dou pi=3.141592653589793;
//メモ
//二次元配列のresizeのしかた
//vv.resize(n);
//for(size_t i=0; i<n; i++){
// vv[i].resize(n);
//}

std::vector<vector<ll>> d;
void warshall_floyd(int n) { // ワーシャルフロイド nは頂点数
  for (int i = 0; i < n; i++)      // 経由する頂点
    for (int j = 0; j < n; j++)    // 開始頂点
      for (int k = 0; k < n; k++)  // 終端
        d[j][k] = min(d[j][k], d[j][i] + d[i][k]);
}

int main(){
    int v,e;
    std::cin >> v>>e;
    d.resize(v);
    rep(i,v){
        d[i].resize(v);
    }
    reprep(i,j,v,v)d[i][j]=INF64;
    rep(i,v)d[i][i]=0;
    rep(i,e){
        int a,b,c;
        std::cin >> a>>b>>c;
        d[a][b]=c;
    }
    warshall_floyd(v);
    reprep(i,j,v,v){
        if(d[i][j]+d[j][i]<0){
            std::cout << "NEGATIVE CYCLE" << std::endl;
            exit(0);
        }
    }
    rep(i,v){
        rep(j,v){
            if(d[i][j]<=INF64/10)std::cout << d[i][j] <<((j==v-1)?"":" ");
            else std::cout << "INF" <<((j==v-1)?"":" ");
        }
        std::cout  << std::endl;
    }
    
    
}
