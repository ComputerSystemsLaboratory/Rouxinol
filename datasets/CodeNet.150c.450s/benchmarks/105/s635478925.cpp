#include <bits/stdc++.h>
using namespace std;
const auto start_time = std::chrono::high_resolution_clock::now();
void timecalculater(){
    #ifndef ONLINE_JUDGE
    auto end_time = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff = end_time-start_time;
    cerr<<"Time Taken : "<<diff.count()<<"\n";
    #endif
}
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
void __print(int x) {cout << x;}
void __print(long x) {cout << x;}
void __print(long long x) {cout << x;}
void __print(unsigned x) {cout << x;}
void __print(unsigned long x) {cout << x;}
void __print(unsigned long long x) {cout << x;}
void __print(float x) {cout << x;}
void __print(double x) {cout << x;}
void __print(long double x) {cout << x;}
void __print(char x) {cout << '\'' << x << '\'';}
void __print(const char *x) {cout << '\"' << x << '\"';}
void __print(const string &x) {cout << '\"' << x << '\"';}
void __print(bool x) {cout << (x ? "true" : "false");}
template<typename T, typename V>
void __print(const pair<T, V> &x) {cout << '{'; __print(x.first); cout << ','; __print(x.second); cout << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cout << '{'; for (auto &i: x) cout << (f++ ? "," : ""), __print(i); cout << "}";}
void _print() {cout << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cout << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define dbg(x...) cout << "[" << #x << "] = ["; _print(x)
#else
#define dbg(x...)
#endif
#define fastio  cin.sync_with_stdio(0); cin.tie(0);cin.exceptions(cin.failbit);
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repA(i, a, n) for(int  i = a; i <= (n); ++i)
#define all(x) x.begin(), x.end()
#define sz(x) (int) (x).size()
#define fill(a,v) memset(a, v, sizeof(a))
#define fst first
#define snd second
#define mp make_pair
#define pb push_back
#define endl '\n'
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<long long int> vll;
typedef vector<pii> vii;
ll p=1e9+7;
const int N=2e5+5;
int main() {

    fastio;
    int T=1;
    cin>>T;
    while(T--){
        int n;cin>>n;
        ll a[n];rep(i,n)cin>>a[i];
        vector<ll> basis;
        string s;cin>>s;
        int ans=0;
        for(int i=n-1;i>=0;i--){
        	for(auto j:basis){
        		a[i]=min(a[i],a[i]^j);
        	}
        	if(a[i]==0)continue;
        	if(s[i]=='1'){
        		ans=1;break;
        	}	
        	else{
        		basis.pb(a[i]);
        	}
        }
        cout<<ans<<endl;
    }   
    timecalculater();
    return 0;   
} 