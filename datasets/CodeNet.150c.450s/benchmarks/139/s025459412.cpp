#include <iostream>
#include <utility>
#include <map>
#include <vector>
#include <algorithm>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <deque>
#include <cmath>

using namespace std;
typedef long long ll;
ll mod = 1e9+7;
//ll mod = 998244353;
#define rep(i,n) for(int i = 0; i < (n); ++i)

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> ab(n);
    rep(i, m) {
        int a, b;
        cin >> a >> b;
        --a, --b;
        ab[a].push_back(b);
        ab[b].push_back(a);
    }
    queue<int> que;
    que.push(0);
    vector<int> pred(n, -1);
    while(!que.empty()) {
        int now = que.front(); que.pop();
        for (auto p: ab[now]) {
            if (pred[p] != -1) continue;
            que.push(p);
            pred[p] = now;
        }
    }
    cout << "Yes" << endl;
    rep(i, (int)pred.size()) {
        if (i == 0) continue;
        cout << pred[i] + 1 << endl;
    }
    return 0;
}
