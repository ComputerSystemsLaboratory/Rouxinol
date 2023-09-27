// J4180449 三宅亮輔
// 問題名
// - Breadth First Search
// 問題URL
// - https://onlinejudge.u-aizu.ac.jp/#/problems/ALDS1_11_C
// 所要時間
// -
// 学んだこと
//
//
//

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n, d[100];

vector<int> v[100];

queue<int> q;

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        d[i] = -1;
        int u, k;
        cin >> u >> k;
        u--;
        for(int j = 0; j < k; j++) {
            int x;
            cin >> x;
            x--;
            v[u].push_back(x);
        }
    }

    d[0] = 0;
    q.push(0);

    while(!q.empty()) {
        int vi = q.front();
        q.pop();

        for(int i = 0; i < v[vi].size(); i++) {
            int next = v[vi][i];
            if(d[next] == -1) {
                d[next] = d[vi] + 1;
                q.push(next);
            }
        }
    }

    for(int i = 0; i < n; i++) {
        cout << i + 1 << " " << d[i] << endl;
    }
}
