#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;

const int N = 100001;

vector<pair<int,int> > adj[N];

int memo[N];

struct State {
    int p;
    int cost;
    bool operator<(const State& st) const {
        return cost > st.cost;
    }
};

int main()
{
    int v, e, r;
    cin >> v >> e >> r;
    for (int i=0; i < e; ++i) {
        int s, t, d;
        cin >> s >> t >> d;
        adj[s].push_back(pair<int,int>(t, d));
    }

    fill(memo, memo+N, -1);

    priority_queue<State> q;
    State st;
    st.p = r;
    st.cost = 0;
    q.push(st);
    while (q.empty() == false) {
        State cur = q.top();
        q.pop();
        if (memo[cur.p] != -1) continue;
        memo[cur.p] = cur.cost;
        for (int i=0; i < adj[cur.p].size(); ++i) {
            State nx;
            nx.p = adj[cur.p][i].first;
            nx.cost = cur.cost + adj[cur.p][i].second;
            q.push(nx);
        }
    }

    for (int i=0; i < v; ++i) {
        if (memo[i] == -1) cout << "INF" << endl;
        else cout << memo[i] << endl;
    }

    return 0;
}