#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define per(i, a, b) for (int i = b - 1; i >= a; i--)
#define int long long
using pint = pair<int, int>;
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
int dxx[8] = {1, 1, 1, 0, 0, -1, -1, -1}, dyy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

signed main() {
    int n;
    cin >> n;
    int m = n;
    vector<int> vec;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            n /= i;
            vec.push_back (i);
        }
    }
    if (n != 1) vec.push_back (n);
    printf ("%lld:", m);
    for (int i : vec) printf (" %lld", i);
    cout << "\n";
}
