#include <bits/stdc++.h>

const int INF = 1e9;
const int MOD = 1e9 + 7;

using namespace std;

typedef long long ll;

#define REP(i, n) for (int i = 0; i < int(n); i++)
#define REPD(i, n) for (int i = n - 1; i >= 0; i--)
#define FOR(i, a, b) for (int i = a; i < int(b); i++)
#define FORD(i, a, b) for (int i = b - 1; i >= int(a); i--)
#define WRAP(y, x, h, w) (0 <= y && y < h && 0 <= x && x < w)

#define ALL(x) (x).begin(), (x).end()

int gcd(int a, int b)
{
    return b ? gcd(b, a % b) : a;
}
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> edge(n + 1);
    REP(i, m)
    {
        int a, b;
        cin >> a >> b;
        edge[a].push_back(b);
        edge[b].push_back(a);
    }
    queue<int> Q; //from
    Q.push(1);
    vector<bool> visited(n + 1, false);
    visited[1] = true;
    vector<int> ans(n + 1);
    while (!Q.empty()) {
        int q = Q.front();
        Q.pop();
        REP(i, edge[q].size())
        {
            if (!visited[edge[q][i]]) {
                visited[edge[q][i]] = true;
                Q.push(edge[q][i]);
                ans[edge[q][i]] = q;
            }
        }
    }
    cout << "Yes" << endl;
    FOR(i, 2, n + 1)
    {
        cout << ans[i] << endl;
    }
}