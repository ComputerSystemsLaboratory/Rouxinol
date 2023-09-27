#include <iostream>
#include <string>
#include <vector>
#include <algorithm> 
#include <utility> 
#include <tuple> 
#include <cstdint> 
#include <cstdio> 
#include <map> 
#include <queue> 
#include <set> 
#include <stack> 
#include <deque> 
#include <unordered_map> 
#include <unordered_set> 
#include <bitset> 
#include <cctype> 
#include <cmath>
#include <iomanip>
#include <ctype.h>
#include <numeric>
#include <iterator>

using namespace std;
using ll = long long;
using vi = vector<int>;
using vvi = vector<vi >;
using vl = vector<ll>;
using vvl = vector<vl >;
using pairi = pair<int, int>;
using pairl = pair<ll, ll>;

#define TR ","
#define TS " "
#define rep(i,N) for(int i=0;i<(int)N;++i)
#define rpt(i,a,b) for(ll i=a;i<(ll)b;++i)
#define all(v) v.begin(), v.end()
#define IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

ll gcd(ll a, ll b) {
    if (a < b) swap(a, b);
    if (b == 0) return a;
    return gcd(b, a % b);
}

ll lcm(ll x, ll y) {
    return x / gcd(x, y) * y;
}

ll waz = 76543217;

void printVector(const vector<int>& vec) {
    for (int value : vec) {
        cout << value << " ";
    }
    cout << endl;
}

int main()
{
    IO;

    ll m; cin >> m;
    cout << m << ":";

    ll x = m;

    vector<ll> p;

    p.push_back(2);
    for (ll n = 3; n <= sqrt(1000000000); ++n) {
        for (ll k = 0; k != p.size(); ++k) {
            if (n % p[k] == 0) { goto xyz; }
            if (p[k] > sqrt(n)) { break; }
        }
        p.push_back(n);
    xyz:;
    }

    rep(i, p.size()) {
        while (x % p[i] == 0) {
            cout << " " << p[i];
            x /= p[i];
        }
        if (x == 1) {
            cout << endl;
            break;
        }
    }

    if (x != 1) {
        cout << " " << x << endl;
    }

}
