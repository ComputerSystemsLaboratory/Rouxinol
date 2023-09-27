#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
#define rep(i, n) for (int i = 0; i < n; i++)
using Graph = vector<vector<int>>;
using pint = pair<int, int>;
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
int dxx[8] = {1, 1, 1, 0, 0, -1, -1, -1}, dyy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int n;
void maxheapify (vector<int> &a, int i) {
    int l = i * 2 + 1 < n ? i * 2 + 1 : i;
    int r = i * 2 + 2 < n ? i * 2 + 2 : i;
    int large;
    if (a[l] > a[i] && a[l] > a[r]) {
        large = l;
    } else if (a[r] > a[i] && a[r] > a[l]) {
        large = r;
    } else {
        large = i;
    }
    if (large != i) {
        swap (a[i], a[large]);
        maxheapify (a, large);
    }
}
int main() {
    cin >> n;
    vector<int> a (n);
    rep (i, n) cin >> a[i];
    for (int i = n / 2; i >= 0; i--) {
        maxheapify (a, i);
    }
    rep (i, n) cout << " " << a[i];
    cout << "\n";
}

