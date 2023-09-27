#include <iostream>

using namespace std;

int main() {
    int N, M, P, X[101];
    while (cin >> N >> M >> P) {
        if (N == 0 && M == 0 & P == 0) { break; }

        int ans = 0;

        for (int i = 0; i < N; i++) {
            cin >> X[i];
            ans += X[i];
        }
        cout << (X[M-1] == 0 ? 0 : ans * (100-P) / X[M-1]) << endl;
    }
    return 0;
}
