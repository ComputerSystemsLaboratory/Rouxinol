#include<iostream>

using namespace std;

int main() {
    while (1) {
        int n, m, p;

        cin >> n >> m >> p;
        if (n == 0) break;

        int gold = 0;
        int winner = 0;
        for (int i = 0; i < n; ++i) {
            int a;
            cin >> a;
            if (i + 1 == m) winner = a;
            gold += a;
        }
        cout << (winner == 0 ? 0 : gold * (100 - p) / winner) << endl;
    }
}