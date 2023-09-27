#include <iostream>
#include <algorithm>
using namespace std;

const int INF = 1 << 29;
const int MAX = 10;
int as[MAX][MAX];
int n, m;

void floyd() {
    for (int k = 0; k < m; k++) {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < m; j++) {
                as[i][j] = min(as[i][j], as[i][k] + as[k][j]);
            }
        }
    }
}

int main() {
    while (cin >> n, n) {
        for (int i = 0; i < MAX; i++) {
            for (int j = 0; j < MAX; j++) {
                as[i][j] = (i == j) ? 0 : INF;
            }
        }
        m = 0;
        for (int i = 0; i < n; i++) {
            int a, b, c;
            cin >> a >> b >> c;
            as[a][b] = as[b][a] = c;
            m = max(m, a);
            m = max(m, b);
        }
        m++;
        floyd();
        int ans = INF, ans_i;
        for (int i = 0; i < m; i++) {
            int sum = 0;
            for (int j = 0; j < m; j++) {
                sum += as[i][j];
            }
            if (ans > sum) {
                ans = sum;
                ans_i = i;
            }
        }
        cout << ans_i << " " << ans << endl;
    }
}