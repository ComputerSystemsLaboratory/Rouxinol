#include <bits/stdc++.h>
using namespace std;

constexpr int INF = 1e9;

int main() {
    int n;
    while(cin >> n, n) {
        vector<vector<int>> d(10, vector<int>(10, INF));
        for(int i=0; i<10; ++i) {
            d[i][i] = 0;
        }
        for(int i=0; i<n; ++i) {
            int a, b, c;
            cin >> a >> b >> c;
            d[a][b] = d[b][a] = c;
        }
        for(int k=0; k<10; ++k) {
            for(int i=0; i<10; ++i) {
                for(int j=0; j<10; ++j) {
                    d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
                }
            }
        }
        int cost = INF, town = -1;
        for(int i=0; i<10; ++i) {
            int c = 0;
            for(int j=0; j<10; ++j) {
                if(d[i][j] == INF) {
                    continue;
                }
                c += d[i][j];
            }
            if(c != 0 && cost > c) {
                cost = c;
                town = i;
            }
        }
        cout << town << ' ' << cost << endl;
    }
}