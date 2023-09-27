// CODING BEAST
/*******************************************************************************************************************************************************/
#include<bits/stdc++.h>
using namespace std;
#define sum(a)     ( accumulate ((a).begin(), (a).end(), 0ll))
#define mine(a)    (*min_element((a).begin(), (a).end()))
#define maxe(a)    (*max_element((a).begin(), (a).end()))
#define mini(a)    ( min_element((a).begin(), (a).end()) - (a).begin())
#define maxi(a)    ( max_element((a).begin(), (a).end()) - (a).begin())
#define lowb(a, x) ( lower_bound((a).begin(), (a).end(), (x)) - (a).begin())
#define uppb(a, x) ( upper_bound((a).begin(), (a).end(), (x)) - (a).begin())
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define Precision(a) cout << fixed << setprecision(a)

using ll = long long;
ll inf = 1e18;
using vb = vector<bool>; using vc = vector<char>; using vd = vector<double>; using vi = vector<int>; using vvi = vector<vi>;
using vll = vector<ll>; using vvll = vector<vll>; using pi = pair<int, int>; using pll = pair<ll, ll>;
#define endl "\n"
#define pb push_back
#define mp make_pair
#define rep(i,n) for(ll i = 0; i < n; i++)
#define repc(i,a,n) for(ll i=a;i<n;i++)
#define all(a) a.begin(),a.end()
#define pow2(x) (1ll<<(x))
#define Blazing_fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define trav(a,v) for(auto &a:v)
int a[8] = { -1, -1, -1, 0, 0, 1, 1, 1};
int b[8] = { -1, 0, 1, -1, 1, -1, 0, 1};
inline ll power(ll x, ll y)
{
    ll temp;
    if ( y == 0)
        return 1;
    temp = power(x, y / 2) ;
    if (y % 2 == 0)
        return (temp * temp) ;
    else
        return (x * temp * temp) ;
}
bool sortbysec(pll & a, pll & b) {
    return (a.second < b.second);
}
/*
ll fact(ll n)
{
    ll res = 1;
    for (ll i = 2; i <= n; i++)
        res = (res * i) ;
    return res;
}

ll ncr(ll n, ll r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
bool isprime(ll n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if ((n % 2 == 0) || (n % 3 == 0)) return false;
    for (ll i = 5; i * i <= n; i = i + 6)
        if ((n % i == 0) || (n % (i + 2) == 0)) return false;

    return true;
}*/
/*********************************************************************************************************************************************************/

signed main() {
    ll n; cin >> n;
    unordered_map<string, ll>m;
    rep(i, n) {
        string s; cin >> s;
        m[s]++;
    }
    cout << "AC" << " " << "x" << " " << m["AC"] << endl;
    cout << "WA" << " " << "x" << " " << m["WA"] << endl;
    cout << "TLE" << " " << "x" << " " << m["TLE"] << endl;
    cout << "RE" << " " << "x" << " " << m["RE"] << endl;


}

