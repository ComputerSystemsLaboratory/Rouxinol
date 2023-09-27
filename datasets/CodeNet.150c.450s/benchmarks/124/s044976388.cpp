#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;
#define Test
const int MAX = 110000;
const int INF = 10000000;
vector<pair<int, int> > G[MAX];
int n;
int dis[MAX];
int vis[MAX];

void dij(int p) {
    for (int i = 0; i < n; i++) dis[i] = INF;
    memset(vis, false, sizeof(vis));
    dis[p] = 0;
    priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push(make_pair(0, p));
    while (!pq.empty()) {
        pair<int, int> pr = pq.top();
        pq.pop();
        int point = pr.second;
        if (vis[point]) continue;
        dis[point] = pr.first;
        vis[point] = true;
        for (int i = 0; i < G[point].size(); i++) {
            int pt = G[point][i].second;
            int v = G[point][i].first;
            if (!vis[pt] && dis[pt] > dis[point]+v) {
                dis[pt] = dis[point] + v;
                pq.push(make_pair(dis[pt], pt));
            }
        }
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int p, k;
        scanf("%d %d", &p, &k);
        while (k--) {
            int v, c;
            scanf("%d %d", &v, &c);
            G[p].push_back(make_pair(c, v));
        }
    }
    dij(0);
    for (int i = 0; i < n; i++) {
        printf("%d %d\n", i, dis[i]);
    }
    return 0;
}