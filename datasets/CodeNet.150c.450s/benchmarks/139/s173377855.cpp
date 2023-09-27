#include <bits/stdc++.h>
#define int long long int
#define endl "\n"
#define mod 1000000007
#define ps(x,noOfDecimal) fixed<<setprecision(noOfDecimal)<<x

using namespace std;

signed main()
{
    if (fopen("input.txt", "r")) {
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    }
    std::ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    vector<int> *gr = new vector<int>[n + 1];
    vector<int> ans(n + 1, 0);
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        gr[a].push_back(b);
        gr[b].push_back(a);
    }
    queue<int> q;
    q.push(1);
    while (q.size() > 0) {
        int x = q.front();
        q.pop();
        for (auto i : gr[x]) {
            if (ans[i] == 0) {
                ans[i] = x;
                q.push(i);
            }
        }
    }
    bool f = true;
    for (int i = 2; i <= n; i++) {
        if (ans[i] == 0) {
            f = false; break;
        }
    }
    if (!f) {
        cout << "No\n";
    } else {
        cout << "Yes\n";
        for (int i = 2; i <= n; i++) {
            cout << ans[i] << endl;
        }
    }
    return 0;
}