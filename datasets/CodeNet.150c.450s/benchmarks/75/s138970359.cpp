#include <bits/stdc++.h>

#define rep(i, a, b) for (int i = a; i < (int)(b); ++i)
#define rrep(i, a, b) for (int i = b - 1; i >= (int)(a); --i)

using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void max_heapify(vi& a, int i) {
    int h = a.size() - 1;
    int l = 2 * i;
    int r = 2 * i + 1;
    int max_index = i;

    if (l <= h && a[max_index] < a[l]) { max_index = l; }
    if (r <= h && a[max_index] < a[r]) { max_index = r; }

    if (max_index != i) {
        swap(a[i], a[max_index]);
        max_heapify(a, max_index);
    }
}

void build_maxheap(vi& a) {
    rrep(i, 1, (a.size() - 1) / 2 + 1) { max_heapify(a, i); }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int h;
    cin >> h;

    vi a(h + 1);
    rep(i, 1, h + 1) { cin >> a[i]; }

    build_maxheap(a);

    rep(i, 1, h + 1) { cout << " " << a[i]; }
    cout << endl;

    return 0;
}
