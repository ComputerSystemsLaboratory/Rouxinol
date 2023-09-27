#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;
const int inf = 1e9;
const ll INF = 1e18;
const double pi = 3.14159265358979323846;
#define rep(i, n) for (int i = 0; i < n; i++)
using Graph = vector<vector<int>>;
using pint = pair<int, int>;
int dx[4] = { 1, 0, -1, 0 }, dy[4] = { 0, 1, 0, -1 };
int dxx[8] = { 1, 1, 1, 0, 0, -1, -1, -1 }, dyy[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };

//int par[100], l[100], r[100]; //lは左の子、rは右の子
struct node {
    int p, l, r; /* data */
};

node t[100];
void pre (int u) {
    if (u == -1) return;
    printf (" %d", u);
    pre (t[u].l);
    pre (t[u].r);
}
void in (int u) {
    if (u == -1) return;
    in (t[u].l);
    printf (" %d", u);
    in (t[u].r);
}
void post (int u) {
    if (u == -1) return;
    post (t[u].l);
    post (t[u].r);
    printf (" %d", u);
}
int main() {
    int n;
    cin >> n;
    rep (i, n + 1) t[i].p = -1;
    rep (i, n) {
        int now, left, right;
        cin >> now >> left >> right;
        t[now].l = left;
        t[now].r = right;
        if (left != -1) t[left].p = now;
        if (right != -1) t[right].p = now;
    }
    int root;
    rep (i, n) if (t[i].p == -1) root = i;
    cout << "Preorder\n";
    pre (root);
    cout << "\nInorder\n";
    in (root);
    cout << "\nPostorder\n";
    post (root);
    cout << "\n";
}
