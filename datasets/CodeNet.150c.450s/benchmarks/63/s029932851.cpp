#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define pb push_back
#define INF 1010001000
#define loop(i, n) for (int i = 0; i < n; i++)

typedef pair<int, int> i_i;
typedef struct edge{ int st, en, cst; } Edge;

int main()
{
    int v, e, r;
    cin >> v >> e >> r;
    
    vector<vector<i_i> > G(v);
    vector<int> ans(v, INF);

    loop(i, e) {
        int st, en, d;
        cin >> st >> en >> d;
        G[st].pb(i_i(d, en));
    }

    priority_queue<i_i, vector<i_i >, greater<i_i > > pq;
    pq.push(i_i(0, r));
    ans[r] = 0;
    while (!pq.empty()) {
        i_i p = pq.top(); pq.pop();
        int u = p.second;
        if (ans[u] < p.first) {
            continue;
        }
        for (int j = 0; j < G[u].size(); j++) {
            i_i i = G[u][j];
            if (ans[i.second] > ans[u] + i.first) {
                ans[i.second] = ans[u] + i.first;
                pq.push(i_i(ans[i.second], i.second));
            }
        }
    }

    loop(i, v) {
        if (ans[i] != INF) {
            cout << ans[i] << endl;
        } else {
            cout << "INF" << endl;
        }
    }
    return 0;
}