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

int main(){
    int n;
    while(cin>>n){
        if(n==0) break;
        map<char,char> mp;
        rep(i,n){
            char a,b;
            cin>>a>>b;
            mp[a]=b;
        }
        int nn;cin>>nn;
        rep(i,nn){
            char c;
            cin>>c;
            if(mp.count(c)){
                cout << mp[c];
            }else{
                cout << c;
            }
        }
        cout << endl;
    }
}