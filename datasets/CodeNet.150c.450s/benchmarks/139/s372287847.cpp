#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <string>
#include <vector>
#define MAX 490000
#define max(a, b) ((a) < (b) ? (b) : (a))
using namespace std;
int to[MAX];
int head[MAX];
int nxt[MAX];
int v[MAX];
int sign[MAX];
int tot;
void Add(int fir, int sec) {
    nxt[++tot] = head[fir];
    to[tot] = sec;
    head[fir] = tot;
}

void bfs(int node) {
    // v[node] = 1;
    queue<int> q;
    q.push(node);
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        v[x] = 1;
        for (int i = head[x]; i != -1; i = nxt[i]) {
            int y = to[i];
            if (v[y] == 1) {
                continue;
            }
            if (sign[y] == 0) {
                sign[y] = x;
                q.push(y);
            }
                
            // printf("%d sign is %d\n", y, x);
        }
    }
}

int main() {
    int N, M;
    while (cin >> N >> M) {
        tot = 0;
        memset(nxt, -1, sizeof(nxt));

        int fir, sec;
        for (int i = 1; i <= M; i++) {
            scanf("%d%d", &fir, &sec);
            Add(fir, sec);
            Add(sec, fir);
        }
        bfs(1);
        int flag = 0;
        for (int i = 2; i <= N; i++) {
            if (!sign[i]) {
                flag = 1;
                break;
            }
        }
        if (flag) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
            for (int i = 2; i <= N; i++)
                printf("%d\n", sign[i]);
            // cout << sign[i] << endl;
        }
    }
    return 0;
}
