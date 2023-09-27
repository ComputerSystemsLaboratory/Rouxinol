/* Author : Aaryan Srivastava ^__^ */ 
#include <bits/stdc++.h>
#include <random>
#include <chrono>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
#define pb push_back
#define mp make_pair
#define ff first
#define ss second   
#define rep(i,n) for(int i = 0 ; i < (n) ; i++)
#define repA(i,x,y) for(int i = (x) ; i <= (y) ; i++)
#define repD(i,x,y) for(int i = (x) ; i >= (y) ; i--)
#define all(c) (c).begin(),(c).end()
#define rall(c) (c).rbegin(),(c).rend()
#define setval(a,val) memset(a,val,sizeof(a))
#define Randomize mt19937 rng(chrono::steady_clock::now().time_since_epoch().count())
#define trav(x , a) for(auto &x : a)
#define sz(a) ((int)a.size())
typedef long long ll ; 

#define int ll

using namespace std;

const int N = 3e5 +5 ;
const int mod = 1e9 + 7 ;
const ll inf = 1e18 ;
const int SZ = 101 ;
const double eps = 1e-9 ;
using namespace __gnu_pbds;
using ordered_set =  tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ;

typedef pair<int, int> pii; 
typedef pair<int , pii> ipii ;
typedef pair<pii , int> piii ; 
typedef unsigned long long ull ;
typedef long double ld;

ll po(ll x,ll y,ll p = mod) {ll res=1;x%=p;while(y>0){if(y&1)res=(res*x)%p;y=y>>1;x=(x*x)%p;}return res;}

const int LG = 60;
int basis[LG + 1];

bool check_basis(int msk){
    for(int b = LG ; b >= 0 ; --b){
        if(msk >> b & 1LL){
            if(!basis[b]){
                return false;
            }
            msk ^= basis[b];
        }
    }    
    return true;
}


void insertVec(int msk){
    for(int b = LG ; b >= 0 ; --b){
        if(msk >> b & 1LL){
            if(!basis[b]){
                basis[b] = msk;
                return ;
            }
            msk ^= basis[b];
        }
    }    
}

void reset(){
    for(int b = LG ; b >= 0 ; --b)
        basis[b] = 0;
}


void solve()
{
    reset();
    int n ;
    cin >> n; 
    int a[n];
    string s;
    rep(i , n) cin >> a[i];
    cin >> s;
    for(int i = n - 1 ; i >= 0 ; --i){
        if(s[i] == '0')
            insertVec(a[i]);
        else{
            if(!check_basis(a[i])){
                cout << "1";
                return;
            }
        }
    }
    cout << "0";
}   

     
int32_t main(int32_t argc, char *argv[])
{
    ios::sync_with_stdio(0);    
    cin.tie(0); cout.tie(0);
    int TC = 1, t = 0;
    cin >> TC ;
    while(t++ < TC)
    {
        //cout << "Case #" << t << ": " ;
        solve();
        cout << "\n" ;
    }
    return 0;
}