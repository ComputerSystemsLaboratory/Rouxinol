#include <bits/stdc++.h>
using namespace std;
/*{{{*/  //template
#define REP(i,n) for(int i=0;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 1<<29
#define LINF LLONG_MAX/3
#define MP make_pair
#define PB push_back
#define EB emplace_back
#define ALL(v) (v).begin(),(v).end()
#define all(v) ALL(v)
#define debug(x) cerr<<#x<<":"<<x<<endl
#define debug2(x,y) cerr<<#x<<","<<#y":"<<x<<","<<y<<endl
#define CININIT cin.tie(0),ios::sync_with_stdio(false)
struct fin{ fin(){ cin.tie(0); ios::sync_with_stdio(false); } } fin_;
struct Double{ double d; explicit Double(double x) : d(x){} };
ostream& operator<<(ostream& os,const Double x){ os << fixed << setprecision(20) << x.d; return os; }
template<typename T> ostream& operator<<(ostream& os,const vector<T>& vec){ os << "["; for(const auto& v : vec){ os << v << ","; } os << "]"; return os; }
template<typename T,typename U> ostream& operator<<(ostream& os,const pair<T,U>& p){ os << "(" << p.first << ","<< p.second <<")"; return os; }
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
ll gcd(ll a,ll b){ if(b==0) return a; else return gcd(b,a%b); }
 
constexpr ll mod = 1e9+7;
const int dx[]={1,0,-1,0} ,dy[] = {0,1,0,-1};
/*}}}*/


void solve(int W,int N){
//    cout << w << " " << n << endl;
    vector<int> v(N),w(N);
    char c;
    rep(i,N) cin>>v[i]>>w[i];

    vector<vector<int>> dp(N+10,vector<int>(W+10,0));
    for(int i=0;i<N;i++){
        // use v[i],w[i]
        for(int j=0;j<=W;j++){
            if(j+w[i]<=W){
                dp[i+1][j+w[i]] = max(dp[i+1][j+w[i]],dp[i][j]+v[i]);
                dp[i+1][j] = max(dp[i+1][j],dp[i][j]);
            }else{
                dp[i+1][j] = max(dp[i+1][j],dp[i][j]);
            }
        }
    }

//    for(int i=0;i<=w;i++) if(dp[n][i]==dp[n][w]){
//        printf("%d\n%d\n",dp[n][w],i);
//        return;
//    }
//    for(int i=0;i<=n;i++){
//        for(int j=0;j<=w;j++){
//            printf("%2d ",dp[i][j]);
//        }
//        cout << endl;
//    }
    cout << dp[N][W] << endl;
    //assert(false);
}

int main(){
    int w,n;
    int cnt=0;
    while(1){
        cin>>w;
        if(w==0) break;
        cin>>n;
//        printf("case %d:\n",++cnt);
        solve(n,w);
        break;
    }
}