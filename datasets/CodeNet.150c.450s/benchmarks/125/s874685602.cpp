#include <iostream>

using namespace std;

const int N = 100;
int A[N][N] = {{0}};
int n;
int t = 0;
int d[N] = {0};
int f[N] = {0};

void dfs(int id) {
    // cerr << "begin: " <<  id << " " << t << endl;
    if (d[id] != 0) {
        return;
    }
    ++t;
    d[id] = t;

    for (int i = 0; i < n; ++i) {
        if (A[id][i] != 0) {
            dfs(i);
        }
    }

    // cerr << "end: " <<  id << " " << t << endl;
    if (f[id] == 0) {
        ++t;
        f[id] = t;
    }
}

int main() {
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

    for (int i = 0; i < n; ++i) {
        if (d[i] == 0)
            dfs(i);
    }


    for (int i = 0; i < n; ++i) {
        cout << i + 1 << " ";
        cout << d[i] << " " << f[i];
        cout << endl;
    }

    return 0;
}