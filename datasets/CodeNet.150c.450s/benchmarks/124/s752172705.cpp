#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#define N 100000
const int INF = 1 << 30; // > 10^9
int n;
using namespace std;
struct edge : vector<pair<int, int> > {
    void add_edge(int to, int cost) {
        push_back(pair<int, int>(to, cost));
    }
} info[N];
void bfs();
int hoge[N];
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int u, k;
        cin >> u >> k;
        while (k--) {
            int v, c;
            cin >> v >> c;
            info[u].add_edge(v, c);
        }
    }
    bfs();
    for (int i = 0; i < n; i++) {
        cout << i << " " << hoge[i] << endl;
    }
}
void bfs() {
    fill_n(hoge, n, INF); //hoge ~ hoge + v <- INF
    queue<int> que;
    que.push(0);
    hoge[0] = 0;
    while (!que.empty()) {
        int p = que.front();
        que.pop();
        for (int i = 0; i < info[p].size(); i++) {
            if (info[p][i].second + hoge[p] < hoge[info[p][i].first]) {
                que.push(info[p][i].first);
                hoge[info[p][i].first] = info[p][i].second + hoge[p];
            }
        }
    }
    
}

