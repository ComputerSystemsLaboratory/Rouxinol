// J4180449 三宅亮輔
// 問題名
// - Disjoint Set
// 問題URL
// - https://onlinejudge.u-aizu.ac.jp/problems/DSL_1_A
// 所要時間
// - 30分
// 学んだこと
//  Union Find木の実装方法
//  蟻本を読んでroot関数にparの値を追加することが有効であると理解した。
//  アッカーマン関数の逆関数のオーダーになることがわかった。

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> P;

vector<P> v;
int n, q;

int par[100];

int root(int a) {
    if(a == par[a])
        return a;
    return par[a] = root(par[a]);
}

bool same(int a, int b) { return root(a) == root(b); }

void unite(int a, int b) {
    a = root(a);
    b = root(b);
    par[a] = b;
}

int main() {
    int ans = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
        par[i] = i;

    for(int i = 0; i < n * n; i++) {
        int a;
        cin >> a;
        v.push_back(P(a, i));
    }
    sort(v.begin(), v.end());

    for(int i = 0; i < n * n; i++) {
        if(v[i].first != -1) {
            int x = v[i].second % n;
            int y = v[i].second / n;
            if(!same(x, y)) {
                unite(x, y);
                ans += v[i].first;
            }
        }
    }

    cout << ans << endl;
}
