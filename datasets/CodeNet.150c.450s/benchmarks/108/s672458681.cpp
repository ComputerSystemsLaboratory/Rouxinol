#include <iostream>
#include <queue>
#include <vector>

using namespace std;

const int N = 100;


int main() {
    int A[N][N] = {{0}};

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int u;
        cin >> u;

        int k;
        cin >> k;
        for (int j = 0; j < k; ++j) {
            int x;
            cin >> x;
            A[u-1][x-1] = 1;
        }
    }

    vector<int> d(n, -1);
    using int_pair = pair<int, int>;
    queue<int_pair> Q;
    Q.push(int_pair(0, 0));
    while (!Q.empty()) {
        auto p = Q.front();
        Q.pop();

        int k = p.first;
        int t = p.second;
        if (d[k] == -1) {
            d[k] = t;
        } else if (d[k] < t) {
            continue;
        } else {
            d[k] = t;
        }
        for (int i = 0; i < n; ++i) {
            if (A[k][i] != 0) {
                Q.push(int_pair(i, t + 1));
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << i + 1 << " " << d[i] << endl;
    }

    return 0;
}