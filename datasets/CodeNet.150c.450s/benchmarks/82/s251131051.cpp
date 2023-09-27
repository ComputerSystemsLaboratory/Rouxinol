#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define fin(ans) cout << (ans) << endl;
#define blank(ans) cout << (ans) << " ";
#define mp(p, q) make_pair(p, q)
#define mt(p, q, r) make_tuple(p, q.r)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()

typedef long long ll;
typedef long long lli;
typedef unsigned long long ull;
typedef long double ld;
typedef string str;

typedef vector<ll> vll;

const ld PI = acos(-1.0);
const ll MAX = 9000000000000000000;
const ll MIN = -9000000000000000000;
const ld DMAX = 4500;
const ld DMIN = -4500;
const ll MOD = 1000000007;

struct Cube
{
    ll f[6];
    //0 top
    //1 front
    //2 right
    //3 left
    //4 back
    //5 bottom
};

//実行部
void Main()
{
    Cube saikoro;
    rep(i, 6)
    cin >> saikoro.f[i];
    ll n;
    cin >> n;
    for(ll i = 0;i < n;i++)
    {
        ll a, b;
        cin >> a >> b;
        if(a == b) break;
        else if(saikoro.f[1] == a&&saikoro.f[5] == b || saikoro.f[5] == a&&saikoro.f[4] == b || saikoro.f[4] == a&&saikoro.f[0] == b || saikoro.f[0] == a&&saikoro.f[1] == b) fin(saikoro.f[2])
        else if(saikoro.f[1] == b&&saikoro.f[5] == a || saikoro.f[5] == b&&saikoro.f[4] == a || saikoro.f[4] == b&&saikoro.f[0] == a || saikoro.f[0] == b&&saikoro.f[1] == a) fin(saikoro.f[3])

        else if(saikoro.f[2] == a&&saikoro.f[0] == b || saikoro.f[0] == a&&saikoro.f[3] == b || saikoro.f[3] == a&&saikoro.f[5] == b || saikoro.f[5] == a&&saikoro.f[2] == b) fin(saikoro.f[1])
        else if(saikoro.f[2] == b&&saikoro.f[0] == a || saikoro.f[0] == b&&saikoro.f[3] == a || saikoro.f[3] == b&&saikoro.f[5] == a || saikoro.f[5] == b&&saikoro.f[2] == a) fin(saikoro.f[4])

        else if(saikoro.f[3] == a&&saikoro.f[1] == b || saikoro.f[1] == a&&saikoro.f[2] == b || saikoro.f[2] == a&&saikoro.f[4] == b || saikoro.f[4] == a&&saikoro.f[3] == b) fin(saikoro.f[0])
        else if(saikoro.f[3] == b&&saikoro.f[1] == a || saikoro.f[1] == b&&saikoro.f[2] == a || saikoro.f[2] == b&&saikoro.f[4] == a || saikoro.f[4] == b&&saikoro.f[3] == a) fin(saikoro.f[5])
    }
    return;
}

//前処理
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(20); //高精度少数表示
    Main();
    return 0;
}

