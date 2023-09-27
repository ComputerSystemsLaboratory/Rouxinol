// Parasparopagraho Jīvānām

#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")

#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/rope>

using namespace std ;
using namespace  __gnu_pbds ;
using namespace __gnu_cxx ;

typedef long long ll ;
typedef long double ld ;

typedef pair<int, int> pii ;
typedef pair<int, ll> pil ;
typedef pair<ll,ll> pll ;

typedef vector<int> vi ;
typedef vector<ll> vll ;
typedef vector<pii> vpi ;
typedef vector<pll> vpl ;
typedef vector<int,pil> edges ;

template <class T> using Tree = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define rep(i,a,b) for (int i = (a); i <= (b); i++)
#define per(i,b,a) for (int i = (b); i >= (a); i--)

#define mp make_pair
#define eb emplace_back
#define pb push_back
#define fi first
#define se second

#define sz(x) (int)x.size()
#define all(x) begin(x), end(x)

const int mod1 = 1000000007 ;
const int mod2 = 998244353 ;
const ll  infl = 2e18 ;
const int infi = 2e9 ;
const int maxn = 100005 ;
const int block = 500 ;
const int logn = 60 ;
const int alpha = 27 ;
const ld pi = 3.141592653589793238462643383279 ;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()) ;

/* Careful when using long long
__builtin_clz(int x) {} //: the number of zeros at the beginning of the number
__builtin_ctz(int x) {} //: the number of zeros at the end of the number
__builtin_popcount(int x) {} //: the number of ones in the number
__builtin_parity(int x) {} //: the parity (even or odd) of the number of ones*/
ll modpow(ll a, ll b, int MOD) { ll res = 1 ; while(b) { if(b&1) { res = res*a ; res %= MOD ; } a *= a ; a %= MOD ; b >>= 1 ; } return res%MOD ; }
void upmin(int &a, int b) { if(a < b) { a = b ; } }
void relax(int &a, int b) { if(a > b) { a = b ; } }
ll add(ll a, ll b, int MOD) { a += b ; if(a >= MOD) { a -= MOD ; } return  a ; }
ll sub(ll a, ll b, int MOD) { a -= b ; if(a < 0) { a += MOD ; } return a ; }
ll mul(ll a, ll b, int MOD) { b %= MOD ; a *= b ; a %= MOD ; return a ; }
ll inverse(ll a, ll MOD) { a = modpow(a, MOD - 2, MOD) ; return a ; }
ll lcm(ll a, ll b) { ll ret ; ll g = __gcd(a, b) ; ret = a/g ; ret = ret*b ; return ret ; }

ll basis1[logn+5], basis2[logn+5] ;
void addV1(ll mask)
{
    per(i,logn,0)
    {
        if((mask>>i)&1)
        {
            if(!basis1[i])
            {
                basis1[i] = mask ;
                return ;
            }
            else
            {
                mask ^= basis1[i] ;
            }
        }
    }
}
void addV2(ll mask)
{
     per(i,logn,0)
    {
        if((mask>>i)&1)
        {
            if(!basis2[i])
            {
                basis2[i] = mask ;
                return ;
            }
            else
            {
                mask ^= basis2[i] ;
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(false) ;
    cin.tie(NULL) ;
    int tc ;
    cin >> tc ;
    while(tc--)
    {
        int n ;
        cin >> n ;
        ll a[n] ;
        rep(i,0,n-1)
        {
            cin >> a[i] ;
        }
        string s ;
        cin >> s ;
        rep(i,0,logn)
        {
            basis1[i] = basis2[i] = 0 ;
        }
        bool kara = false ;
        per(i,n-1,0)
        {
            ll mask = a[i] ;
            if(s[i] == '0')
            {
                addV1(mask) ;
                if(i + 1 < n && s[i+1] == '1')
                {
                    rep(j,0,logn)
                    {
                        basis2[j] = 0 ;
                    }
                }
            }
            else
            {
                addV2(mask) ;
                bool pehla = false ;
                per(j,logn,0)
                {
                    ll vec = basis2[j] ;
                    bool acha = true ;
                   // cout << j << " " << vec << endl ;
                    if(vec)
                    {
                        per(k,logn,0)
                        {
                            //cout << k << " " << vec << " " << ((vec>>k)&1) << endl ;
                            if((vec>>k)&1)
                            {
                                if(!basis1[k])
                                {
                                    acha = false ;
                                }
                                vec ^= basis1[k] ;
                            }
                        }
                        if(vec)
                        {
                            acha = false ;
                        }
                    }
                    if(!acha)
                    {
                        pehla = true ;
                    }
                }
                if(pehla)
                {
                    cout << "1\n" ;
                    kara = true ;
                    break ;
                }
            }
        }
        if(!kara)
        {
            cout << "0\n" ;
        }
    }

    return 0 ;
}
