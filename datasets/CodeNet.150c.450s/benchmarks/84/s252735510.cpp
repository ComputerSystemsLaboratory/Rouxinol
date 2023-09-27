#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const int inf = 1e9;
double pi = 3.14159265359;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define per(i, b, a) for (int i = a - 1; i >= b; i--)
using Graph = vector<vector<int>>;
using pint = pair<int, int>;
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
int dxx[8] = {1, 1, 1, 0, 0, -1, -1, -1}, dyy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

// mergeの応用
ll merge (int a[], int n, int left, int mid, int right) {
    int n1 = mid - left, n2 = right - mid;
    ll cnt = 0;
    int l[n1 + 1], r[n2 + 1];
    rep (i, 0, n1) l[i] = a[left + i];
    rep (i, 0, n2) r[i] = a[i + mid];
    l[n1] = inf, r[n2] = inf;
    int i = 0, j = 0;
    rep (k, left, right) {
        if (l[i] < r[j]) {
            a[k] = l[i++];
        } else {
            a[k] = r[j++];
            cnt += n1 - i;
        }
    }
    return cnt;
}

ll mergesort (int a[], int n, int left, int right) {
    if (right - left > 1) {
        int mid = (left + right) / 2;
        ll v1 = mergesort (a, n, left, mid);
        ll v2 = mergesort (a, n, mid, right);
        ll v3 = merge (a, n, left, mid, right);
        return v1 + v2 + v3;
    } else
        return 0;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    rep (i, 0, n) cin >> a[i];
    cout << mergesort (a, n, 0, n) << "\n";
}
