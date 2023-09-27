#include <cstdio>
#include <vector>
using namespace std;
#define MAX 100000

vector<int> G[MAX];
int color[MAX];
int c = 0;

void dfs(int v) {
    color[v] = c;
    for (int i = 0; i < G[v].size(); i++) {
        if (color[G[v][i]] == 0) dfs(G[v][i]);
    }
}

int main(void) {
    int n, m, s, t, q, i;
    scanf("%d %d", &n, &m);

    for (i = 0; i < m; i++) {
        scanf("%d %d", &s, &t);
        G[s].push_back(t);
        G[t].push_back(s);
    }

    for (i = 0; i < n; i++) color[i] = 0;

    for (i = 0; i < n; i++) {
        if (color[i] == 0) {
            c++;
            dfs(i);
        }
    }

    scanf("%d", &q);
    for (i = 0; i < q; i++) {
        scanf("%d %d", &s, &t);
        if (color[s] > 0 && color[s] == color[t]) printf("yes\n");
        else printf("no\n");
    }

    return 0;
}