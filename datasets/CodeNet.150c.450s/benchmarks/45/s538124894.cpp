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

    ll a, b, m, n, x = 1, y=1;
    cin >> m >> n;

    if (n >= 1000) {
        rep(i, 1000) {
            y = y * m % 1000000007;
        }
        a = n / 1000;
        b = n % 1000;
        rep(i, a) {
            x = x * y % 1000000007;
        }
        rep(i, b) {
            x = x * m % 1000000007;
        }
    }
    else {
        rep(i, n) {
            x = x * m % 1000000007;
        }
    }

    cout << x << endl;

}
