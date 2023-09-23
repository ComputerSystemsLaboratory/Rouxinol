#include <iostream>
#define MAX 120
using namespace std;

int main() {
   // freopen("in.txt", "r", stdin);

    int n, u, k, v;
    int graph[MAX][MAX];
    cin >> n;

    // init
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            graph[i][j] = 0;
        }
    }

    for (int i = 0; i < n; ++i) {
        cin >> u >> k;
        for (int j = 0; j < k; ++j) {
            cin >> v;
            graph[u - 1][v - 1] = 1;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << graph[i][j];
            if (j != n - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
}