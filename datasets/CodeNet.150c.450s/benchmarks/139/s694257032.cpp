#include "bits/stdc++.h"
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define PI acos(-1)
#define Rep(i, n) for (int i = 0; i < (int)(n); i++)
#define BitRep(i, n) for (int i = 0; i < (int)(1 << n); i++)
#define All(vec) vec.begin(), vec.end()
#define Sum(vec) accumulate(vec.begin(), vec.end(), 0)
#define Sort(vec) sort(vec.begin(), vec.end())
#define Reverse(vec) reverse(vec.begin(), vec.end())
#define Count(vec, x) count(vec.begin(), vec.end(), x)
#define Next_permutation(vec) next_permutation(vec.begin(), vec.end())
#define Find(S, s) S.find(s) != string::npos

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> graph(N + 1);
    Rep(i, M) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    vector<bool> seen(N + 1);
    queue<int> Q;
    vector<int> ans(N - 1);
    seen[1] = true;
    Q.push(1);
    while (!Q.empty()) {
        int v = Q.front();
        Q.pop();
        Rep(i, graph[v].size()) {
            int p = graph[v][i];
            if (!seen[p]) {
                seen[p] = true;
                ans[p - 2] = v;
                Q.push(p);
            }
        }
    }
    Rep(i, ans.size()) {
        if (ans[i] == 0) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    Rep(i, ans.size()) {
        cout << ans[i] << endl;
    }
    return 0;
}