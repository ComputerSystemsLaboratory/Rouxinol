#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<ll,ll>;
//マクロ
//forループ関係
//引数は、(ループ内変数,動く範囲)か(ループ内変数,始めの数,終わりの数)、のどちらか
//Dがついてないものはループ変数は1ずつインクリメントされ、Dがついてるものはループ変数は1ずつデクリメントされる
#define FOR(i,a,b) for(ll i=a;i<=(ll)(b);i++)
//xにはvectorなどのコンテナ
#define ALL(x) (x).begin(),(x).end() //sortなどの引数を省略したい
#define SIZE(x) ((ll)(x).size()) //sizeをsize_tからllに直しておく
#define MAX(x) *max_element(ALL(x)) //最大値を求める
#define MIN(x) *min_element(ALL(x)) //最小値を求める
//定数
#define INF 1000000000000 //10^12:極めて大きい値,∞
#define inf 2147483647 //int値の最大値
#define MOD 1000000007 //10^9+7:合同式の法
#define MAXR 100000 //10^5:配列の最大のrange(素数列挙などで使用)
//略記
#define PB push_back //vectorヘの挿入
#define MP make_pair //pairのコンストラクタ
#define F first //pairの一つ目の要素
#define S second //pairの二つ目の要素
#define CST(x) cout<<fixed<<setprecision(x)//小数点以下の桁数指定
#define debug(x) cerr << #x << ": " << x << "\n"
template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}
int gcd(int a, int b) {
    if (b==0) return a;
    else return gcd(b, a%b);
}
int lcm(int a, int b) {
    return a * b / gcd(a, b);
}
int two(int n){
	ll ans=1;
	rep(i,n){
		ans*=2;
	}
	return ans;
}


int main() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);

    
    int n,m,l;
    cin >>n>>m>>l;

    ll c[101][101];
    ll a[101][101];
    ll b[101][101];
    rep(i,n)rep(j,m)cin>>a[i][j];
rep(i,m)rep(j,l)cin>>b[i][j];
//rep(i,n)rep(j,l)cin>>c[i][j];

 rep(i,n){rep(j,l){
     c[i][j]=0;
     rep(k,m){
     c[i][j] += a[i][k]*b[k][j];
 }}}
 rep(i,n){

     rep(j,l){
         if(j)cout<<" ";
     cout<<c[i][j];
      }
      cout<<endl;
    }
   // cout<<endl;
    
   
}
