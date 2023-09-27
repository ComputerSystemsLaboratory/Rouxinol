#include <bits/stdc++.h>
#define rep(i, start, end) for (long long i = start; i < end; ++i)
#define all(x) (x).begin(), (x).end()
#define len(x) ((long long)(x).size())
#define srt(x) sort((x).begin(), (x).end())
#define rsrt(x) sort((x).rbegin(), (x).rend())
#define g(a, b) __gcd((a), (b))
#define l(a, b) ((a) / __gcd((a), (b)) * (b))
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<long long>;
using vllvll = vector<vll>;
using vc = vector<char>;
using vs = vector<string>;
using um = unordered_map<long long, long long>;
template<class T>void print(T x) { cout << '\n' << "== " << x << " ==" << '\n'; }
template<class T>void print1d(T x,ll n=-1){if(n==-1)n=x.size();rep(i,0,n){cout<<x[i]<<' ';}cout<<'\n';}
template<class T>void print2d(T x,ll r=-1,ll c=-1){if(r==-1)r=x.size();if(c==-1)c=x[0].size();rep(i,0,r)print1d(x[i],c);}
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }
template<class T, class U>T rem(T a, U b) { return a - b*floor(a/b); }
template<class T>ld deg2rad(T deg) { return M_PI * deg / 180.0; }
template<class T>ld rad2deg(T rad) { return 180.0 * rad / M_PI; }
const long double pi = M_PI;
const long double doublepi = M_PI * 2.0;
const long double halfpi = M_PI / 2.0;
const long long big = 1LL << 50;
const long long inf = 1LL << 60;
const long long MOD = 1e9 + 7;



ll sec(ll h, ll m, ll s)
{
    ll res;
    res = h*60*60;
    res += m*60;
    res += s;
    return res;
}

int main()
{
    //cin.tie(0);
    //ios::sync_with_stdio(true);
    ll n = -1;
    ll tmax = sec(24, 0, 0);
    vll res;
    while(true) {
        //puts("here");
        scanf("%lld", &n);
        if (n == 0) break;
        ll h, m, s, hh, mm, ss;
        vll acc(tmax+2, 0);
        rep(i, 0, n) {
            //rewind(stdin);
            scanf("%lld:%lld:%lld %lld:%lld:%lld", &h, &m, &s, &hh, &mm, &ss);
            acc[sec(h,m,s)] += 1;
            acc[sec(hh,mm,ss)] -= 1;
        }

        rep(i, 0, tmax+1) {
            acc[i+1] += acc[i];
        }
        //for (ll el:acc) {
          //  cout << el << ' ';
        //}
        cout << *max_element(all(acc)) << endl;
    }
}
