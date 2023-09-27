#include <bits/stdc++.h>
using namespace std;
#define int long long   // <-----!!!!!!!!!!!!!!!!!!!

#define rep(i,n) for (int i=0;i<(n);i++)
#define rep2(i,a,b) for (int i=(a);i<(b);i++)
#define rrep(i,n) for (int i=(n)-1;i>=0;i--)
#define rrep2(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define all(a) (a).begin(),(a).end()

typedef long long ll;
typedef pair<int, int> P;
typedef tuple<int, int, int> TUPLE;
typedef vector<int> V;
typedef vector<V> VV;
typedef vector<VV> VVV;

bool isPrime(int x) {
    // x > 0
    if (x == 1) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int a, d, n;
    while (cin >> a >> d >> n, n) {
        while (true) {
            n -= isPrime(a);
            if (n == 0) break;
            a += d;
        }
        cout << a << endl;
    }
}