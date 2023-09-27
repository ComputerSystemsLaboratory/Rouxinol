#include <iostream>
#include <string>
#include <vector>
#include <cstring>
using namespace std;

const int INF = 1e8;
int d[45][45];

int main() {
    int n;
    while (cin >> n, n) {
        for (int i=0; i<45; ++i) {
            for (int j=0; j<45; ++j) {
                d[i][j] = (i == j ? 0 : INF);
            }
        }
        int a, b, c, vn = -1;
        for (int i=0; i<n; ++i) {
            cin >> a >> b >> c;
            d[a][b] = min(d[a][b], c);
            d[b][a] = min(d[b][a], c);
            vn = max(vn, max(a, b)+1);
        }
        for (int k=0; k<vn; ++k) {
            for (int i=0; i<vn; ++i) {
                for (int j=0; j<vn; ++j) {
                    d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
                }
            }
        }
        int idx = -1, min_time = INF;
        for (int i=0; i<vn; ++i) {
            int time = 0;
            for (int j=0; j<vn; ++j) {
                time += d[i][j];
            }
            if (time < min_time) {
                idx = i;
                min_time = time;
            }
        }
        cout << idx << " " << min_time << endl;
    }
    return 0;
}