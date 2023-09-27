#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <queue>
#include <map>
#include <vector>
#define MM(s,q) memset(s,q,sizeof(s))
#define INF 0x3f3f3f3f
#define MAXN 10005
#define Lchild id<<1
#define Rchild (id<<1)+1
#define ll long long
#define FILE  freopen("data.in","r",stdin)
using namespace std;
int dis[50][50];

void Floyd(int N) {
    for (int k = 0; k <= N; k++)
        for (int i = 0; i <= N; i++)
            for (int j = 0; j <= N; j++)
                if (i != j && i != k && j != k) {
                    if (dis[i][j] > dis[i][k] + dis[k][j])
                        dis[i][j] = dis[i][k] + dis[k][j];
                }
}

int main() {
    int n, u, v, w, N;
    while (cin >> n && n) {
        N = 0;
        MM(dis, INF);
        for (int i = 1; i <= n; i++) {
            scanf("%d%d%d", &u, &v, &w);
            dis[u][v] = dis[v][u] = w;
            N = max(N, max(u, v));
        }
        Floyd(N);
        int pos, ans = INF;
        for (int i = 0; i <= N; i++) {
            int sum = 0;
            for (int j = 0; j <= N; j++) {
             //   if (i != j)cout << dis[i][j] << endl;
                if (i != j && dis[i][j] < INF)
                    sum += dis[i][j];
            }
            if (ans > sum) {
                ans = sum, pos = i;
            }
        }
        cout << pos << " " << ans << endl;
    }
}