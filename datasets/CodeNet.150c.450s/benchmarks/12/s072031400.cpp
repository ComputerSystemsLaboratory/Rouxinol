#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define ll long long
#define ld long double
#define INF 1000000000000000000
typedef pair<ll, ll> pll;

struct node {
    ll k;
    ll p = -1;
    ll l = -1;
    ll r = -1;
};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int H;
    cin >> H;
    vector<ll> T(3 * H, -INF);
    vector<node> G(H + 5);
    for (int i = 1; i <= H; i++) {
        cin >> T[i];
    }

    for (int i = 1; i <= H; i++) {
        G[i].k = T[i];
        G[i].p = T[i / 2];
        G[i].l = T[2 * i];
        G[i].r = T[2 * i + 1];
    }

    for (int i = 1; i <= H; i++) {
        cout << "node " << i << ": ";
        cout << "key = " << G[i].k << ", ";
        if (G[i].p != -INF)
            cout << "parent key = " << G[i].p << ", ";
        if (G[i].l != -INF)
            cout << "left key = " << G[i].l << ", ";
        if (G[i].r != -INF)
            cout << "right key = " << G[i].r << ", ";
        cout << endl;
    }
}
