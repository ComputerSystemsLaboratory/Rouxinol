#include<stdio.h>
#include<queue>
#include<vector>

#define MAX 100000

std::vector<int> G[MAX+1];
int group[MAX];
int n, m;

bool bfs(int src, int id) {

    std::queue<int> Q;
    Q.push(src);
    while(!Q.empty()) {
        int cur = Q.front();Q.pop();
        for (int i = 0; i < G[cur].size(); ++i) {
            int t = G[cur][i];
            if (group[t] != -1) continue;
            group[t] = id;
            Q.push(t);
        }
    }

    return false;
}

void assignGroup() {
    int id = 1;

    for (int i = 0; i < n; ++i) group[i] = -1;
    for (int i = 0; i < n; ++i) {
        if (group[i] != -1) continue;
        bfs(i, id++);
    }

}

int main() {
    scanf("%d %d", &n, &m);

    for (int i = 0; i < m; ++i) {
        int u,k;
        scanf("%d %d", &u, &k);
        G[u].push_back(k);
        G[k].push_back(u);
    }

    assignGroup();

    int q;
    scanf("%d", &q);
    for (int i = 1; i <= q; ++i) {
        int s,d;
        scanf("%d %d", &s, &d);
        group[s] != -1 && group[s] == group[d] ? printf("yes\n") : printf("no\n");
    }

    return 0;
}