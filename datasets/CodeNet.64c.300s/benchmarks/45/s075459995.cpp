#include <iostream>

using namespace std;

int main() {
    int N, M, P;
    while (cin >> N >> M >> P) {
        if (N == 0 && M == 0 && P == 0) break;
        int nocards = 0;
        int player[N];
        for (int i = 0; i < N; i++) {
            cin >> player[i];
            nocards += player[i];
        }
        if (player[M-1] == 0) cout << 0 << endl;
        else cout << nocards * (100 - P) / player[M-1] << endl;
    }
    return 0;
}
            