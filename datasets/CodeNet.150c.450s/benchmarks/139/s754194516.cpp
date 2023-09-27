#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> g[100005];
int n, m, pre[100005];

void bfs() {
    queue<pair<int, int> > q;
    q.push({1, 0});
    while(!q.empty()) {
        int x = q.front().first;
        int pr = q.front().second;
        q.pop();
        if(pre[x]) continue;

        pre[x] = pr;
        for(auto next: g[x])
            if(!pre[next])
                q.push({next, x});
    }
}

int main() {
    cin >> n >> m;
    while(m--) {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    bfs();
    for(int i = 2; i <= n; i++)
        if(!pre[i]) {
            cout << "No";
            return 0;
        }
    cout << "Yes\n";
    for(int i = 2; i <= n; i++)
        cout << pre[i] << '\n';
}
