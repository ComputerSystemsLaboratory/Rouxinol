#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;

const int N = 100001;
const int E = 500001;
vector<pair<int,int> > adj[N];
int ans[N];

struct St {
    int pos;
    int cost;
    bool operator<(const St &s) const {
        return cost > s.cost;
    }
};

int main()
{
    int vn, en, r;
    cin >> vn >> en >> r;
    for (int i=0; i < en; ++i) {
        int s, t, d;
        cin >> s >> t >> d;
        adj[s].push_back(pair<int,int>(t, d));
    }
    fill(ans, ans+N, -1);
    priority_queue<St> q;
    St st;
    st.pos = r;
    st.cost = 0;
    q.push(st);
    while (!q.empty()) {
        St cur = q.top();
        q.pop();
        if (ans[cur.pos] != -1) continue;
        ans[cur.pos] = cur.cost;
        int s = adj[cur.pos].size();
        for (int i=0; i < s; ++i) {
            St nx;
            nx.pos = adj[cur.pos][i].first;
            nx.cost = cur.cost + adj[cur.pos][i].second;
            q.push(nx);
        }
    }

    for (int i=0; i < vn; ++i) {
        if (ans[i] == -1) cout << "INF" << endl;
        else cout << ans[i] << endl;
    }

    return 0;
}