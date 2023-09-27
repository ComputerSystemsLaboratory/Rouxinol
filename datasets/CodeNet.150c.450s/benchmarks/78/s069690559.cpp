#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

namespace Solver {

    int N;
    vector<int> m1, m2;
    inline bool Read() {
        cin >> N;
        return N != 0;
    }

    inline void PreWork() {
        m1.resize(1000000, 1000000);
        m2.resize(1000000, 1000000);
        m1[0] = m2[0] = 0;
        for (int i = 1; i < 1000000; i++) {
            for (int j = 0;; j++) {
                int vol = vol = ((j * (j + 1) * (j + 2)) / 6);
                if (i < vol) break;
                m1[i] = min(m1[i], m1[i - vol] + 1);
                if (vol % 2 == 1) {
                    m2[i] = min(m2[i], m2[i - vol] + 1);
                }
            }
        }
    }

    inline void Work() {
        cout << m1[N] << " " << m2[N] << endl;
    }

    inline void Solve() {
        PreWork();
        while (Read()) Work();
    }
}

int main() {
    Solver::Solve();
}