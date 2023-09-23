#include <iostream>

using namespace std;

class Solver {
    public:
        int n, m, p;
        int x[100];
        int solve() {
            int gold = 0;
            for (int i = 0; i < n; ++i) {
                gold += x[i] * 100;
            }
            if (x[m - 1] == 0) {
                return 0;
            }
            return gold / 100 * (100 - p) / x[m - 1];
        }
};

int main() {
    Solver s;
    while (true) {
        cin >> s.n >> s.m >> s.p;
        if (s.n == 0) {
            return 0;
        }
        for (int i = 0; i < s.n; ++i) {
            cin >> s.x[i];
        }
        cout << s.solve() << endl;
    }
}