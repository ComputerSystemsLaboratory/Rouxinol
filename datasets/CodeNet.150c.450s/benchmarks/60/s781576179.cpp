#include <iostream>

using namespace std;

const int N = 100 + 1;

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

    for (int i = 0; i < n; ++i) {
        int j = 0;
        for (; j < n-1; ++j) {
            cout << A[i][j] << " ";
        }
        cout << A[i][j] << endl;
    }

    return 0;
}