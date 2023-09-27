#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

namespace Solver {

    int N, A, B, C, X;
    vector<int> Y;
    inline bool Read() {
        cin >> N >> A >> B >> C >> X;
        Y.resize(N);
        for (int i = 0; i < N; i++) cin >> Y[i];
        return N != 0;
    }

    inline void Work() {
        int j = 0;
        for (int i = 0; i <= 10000; i++) {
            if (Y[j] == X) {
                Y[j] = -1;
                j++;
                if (j == N) {
                    cout << i << endl;
                    return;
                }
            }

            X = (A * X + B) % C;
        }

        cout << -1 << endl;
    }

    inline void Solve() {
        while (Read()) Work();
    }
}

int main() {
    Solver::Solve();
}