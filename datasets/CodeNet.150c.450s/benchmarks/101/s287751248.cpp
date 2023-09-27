#include <cstdio>
#include <vector>
#include <queue>
using namespace std;
static const int NIL = -1;

int n, m;
int *color;
vector<int> *v;

void bfs(int r, int c) {
    queue<int> q;
    q.push(r);
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        if (color[u] == NIL) {
            color[u] = c;
        }
        for (vector<int>::iterator it = v[u].begin(); it != v[u].end(); it++) {
            if (color[*it] == NIL) {
                q.push(*it);
            }
        }
    }
}

void assignColor() {
    color = new int[n];
    int id = 0;
    for (int i = 0; i < n; i++) {
        color[i] = NIL;
    }
    for (int u = 0; u < n; u++) {
        if (color[u] == NIL) {
            bfs(u, id++);
        }
    }
}

int main() {
    scanf("%d %d", &n, &m);
    v = new vector<int>[n];

    for (int i = 0; i < m; i++) {
        int s, t;
        scanf("%d %d", &s, &t);
        v[s].push_back(t);
        v[t].push_back(s);
    }

    assignColor();

    int q;
    scanf("%d", &q);

    for (int i = 0; i < q; i++) {
        int s, t;
        scanf("%d %d", &s, &t);
        printf("%s\n", color[s] == color[t] ? "yes" : "no");
    }

    return 0;
}
