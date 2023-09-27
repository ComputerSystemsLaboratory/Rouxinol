#include <iostream>
#include <vector>
#include <numeric>
#include <limits>

using namespace std;

const int N = 100;

enum {
    WHITE,
    GRAY,
    BLACK,
};

int main() {
    int A[N][N];

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int a;
            cin >> a;
            A[i][j] = a == -1 ? numeric_limits<int>::max() : a;
        }
    }

    // ????????????
    vector<int> color(n, WHITE); // ??????????¨??????¶???
    vector<int> d(n, numeric_limits<int>::max());
    vector<int> p(n, -1);

    d[0] = 0;
    while (1) {
        int minv = numeric_limits<int>::max();
        int u = -1;
        for (int i = 0; i < n; ++i) {
            if (minv > d[i] && color[i] != BLACK) {
                u = i;
                minv = d[i];
            }
        }
        if (u == -1)
            break;
        color[u] = BLACK;
        for (int v = 0; v < n; ++v) {
            if (color[v] != BLACK && A[u][v] != numeric_limits<int>::max()) {
                if (d[v] > A[u][v]) {
                    d[v] = A[u][v];
                    p[v] = u;
                    color[v] = GRAY;
                }
            }
        }
    }
    int sum;
    for (int i = 0; i < n; ++i) {
        if (p[i] != -1)
            sum += A[i][p[i]];
    }
    cout << sum << endl;

    return 0;
}