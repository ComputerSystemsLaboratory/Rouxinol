//#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC optimization ("unroll-loops")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx2,tune=native") // Auto-Vectorisation

#include "bits/stdc++.h"
#include "chrono"
#include "random"
using namespace std;

/*
//large integers
#include <boost/multiprecision/cpp_int.hpp>
__int128 s128; // pollard rho
__uint128_t u128;

//policy based data structures
#include "ext/pb_ds/assoc_container.hpp"
#include "ext/pb_ds/tree_policy.hpp"
using namespace boost::multiprecision; 
using namespace __gnu_pbds;
*/

typedef long long int ll;
typedef long double ld;
typedef double db;
typedef pair<ll,ll> pll;
typedef unsigned long long u64;
typedef vector<ll> vl;
typedef vector<pll> vpl;
typedef vector<vl> vvl;
typedef vector<vvl> vvvl;
typedef unordered_set<ll> usl;
typedef set<ll> sl;
typedef multiset<ll> mul;
typedef unordered_map<ll,ll> umll;
typedef map<ll,ll> mll;

#define int long long int
#define sz(a) (ll)a.size()
#define lt(a) (ll)a.length()
#define tc(x) ll x; cin>>x; while(x--)
#define f(i,a,b) for(ll i=(ll)a;i<(ll)b;i++)
#define bac(i,a,b) for(ll i=(ll)a;i>=(ll)b;i--)
#define print(a)  for (auto x : a) cout << x << " "; cout << endl
#define mt make_tuple
#define eb emplace_back
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define endl '\n'
#define all(a) a.begin(),a.end()
#define Sort(x) sort(all((x)))
#define setbits(a) __builtin_popcountll(a)
#define ps(x,y) fixed<<setprecision(y)<<x;
#define hell cout<<"hello"<<'\n'
#define deb(x) cerr<<#x<<" = "<<x<<'\n'
#define F first
#define S second
#define teevra_gati ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); //shuffle(all(v), rng);

const string alpha   =   "zabcdefghijklmnopqrstuvwxyz";
const ld PI          =   ld(3.14159265359);
const ll P           =   1e9 + 7; // 998244353; // 1e9 + 9 // 7340033 // 4294967296;
const ll Q           =   1e9 + 6; // 998244352; // 1e9 + 8 // 7340032;
const ll ninf        =   LONG_MIN;
const ll inf         =   8e18;
const ll M           =   2e3 + 5;
const ll N           =   2e5 + 5;

void solve(){
    ll n,q,sum=0;
    cin>>n;
    vl a(n);
    umll m;
    f(i,0,n){
        cin>>a[i];
        sum += a[i];
        m[a[i]]++;
    }
    cin>>q;
    f(i,0,q){
        ll b,c;
        cin>>b>>c;
        ll cnt = m[b];
        sum += cnt*(c-b);
        m[b]=0;
        m[c]+=cnt;
        cout<<sum<<endl;
    }

}
signed main(){
    teevra_gati
    
    solve();

    //cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}