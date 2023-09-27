#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, m, v;
    int dx[] = {0, 1, 0, -1};
    int dy[] = {1, 0, -1, 0};
    char d;
    char ds[] = "NESW";

    while(cin >> n, n) {

        int rx = 10, ry = 10, cnt = 0;
        int graph[21][21];

        memset(graph, 0, sizeof(graph));

        for(int i = 0, x, y; i < n; ++i) {
            cin >> x >> y;
            graph[y][x] = 1;
        }

        cin >> m;

        for(int i = 0; i < m; ++i) {

            cin >> d >> v;

            for(int j = 0; j < 4; ++j) {
                if(d == ds[j]) {
                    for(int k = 1; k <= v; ++k) {
                        rx += dx[j];
                        ry += dy[j];
                        if(graph[ry][rx] == 1) {
                            graph[ry][rx] = 0;
                            ++cnt;
                        }
                    }
                    break;
                }
            }

        }

        cout << (cnt == n ? "Yes" : "No") << endl;

    }

}