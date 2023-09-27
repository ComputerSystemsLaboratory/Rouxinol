#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

vector<vector<int32_t>> A(101);
vector<int32_t> d(101), f(101);
int32_t t = 1;

void dfs(int32_t u) {
    d[u] = t++;

    for (int32_t v : A[u]) {
        if (d[v] == 0) {
            dfs(v);
        }
    }

    f[u] = t++;

    return;
}

int main() {
    fill(d.begin(), d.end(), 0);

    int32_t n;
    cin >> n;

    for (int32_t i = 0; i < n; i++) {
        int32_t u, k;
        cin >> u >> k;

        for (int32_t j = 0; j < k; j++) {
            int32_t v;
            cin >> v;

            A[u].push_back(v);
        }
    }

    for (int32_t i = 1; i <= n; i++) {
        if (d[i] == 0) {
            dfs(i);
        }
    }

    for (int32_t i = 1; i <= n; i++) {
        cout << i << " " << d[i] << " " << f[i] << endl;
    }

    return 0;
}