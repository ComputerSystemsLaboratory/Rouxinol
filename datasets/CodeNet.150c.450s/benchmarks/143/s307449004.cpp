#include <bits/stdc++.h>
//#include<fstream>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
#define endl '\n'
#define pb push_back
#define fi first
#define se second
typedef long long ll;
#define double long double
#define pii pair<int,int>
#define pll pair<ll,ll>
#define fr(a,b,c) for(int a=b; a<=c; a++)
#define rep(a,b,c) for(int a=b; a<c; a++)
#define all(con) con.begin(),con.end()
#define w(x) int x; cin>>x; while(x--)
const ll infl=0x3f3f3f3f3f3f3f3fLL;
const int infi=0x3f3f3f3f;
//const int mod=998244353;
const int mod=1000000007;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<bool> vb;
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
//typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

/*ofstream fout("bcount.out");
ifstream fin("bcount.in");*/

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cout<<fixed<<setprecision(8);
    ll n;
    cin>>n;
    vi a(n);
    map<ll,ll>mp;
    ll sum = 0;
    rep(i,0,n)
    {
        cin>>a[i];
        mp[a[i]]++;
        sum += a[i];
    }
    ll q;
    cin>>q;
    rep(i,0,q)
    {
        ll b,c;
        cin>>b>>c;
        sum -= mp[b]*b;
        mp[c] += mp[b];
        sum += mp[b]*c;
        mp[b] = 0;
        cout<<sum<<endl;
    }
    return 0;
}