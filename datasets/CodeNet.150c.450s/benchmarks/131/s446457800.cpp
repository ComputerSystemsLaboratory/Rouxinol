#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

namespace Solver {

    int L, a0;
    inline bool Read() {
        cin >> a0 >> L;
        if (a0 == 0 && L == 0) return false;
        return true;
    }

    inline void Work() {
        vector<int> a;
        a.push_back(a0);
        for (int i = 1;; i++) {
            vector<int> vi(L, 0);
            for (int k = 0, a_ = a[i - 1]; k < L || a_ > 0; k++) {
                vi[k] = a_ % 10;
                a_ /= 10;
            }

            sort(vi.begin(), vi.end());
            int s = 0, l = 0;
            for (int k = 0; k < L; k++) {
                s = s * 10 + vi[k];
                l = l * 10 + vi[L - k - 1];
            }

            a.push_back(l - s);
            bool fin = false;
            for (int j = 0; j < i; j++) {
                if (a[i] == a[j]) {
                    cout << j << " " << a[i] << " " << i - j << endl;
                    fin = true;
                    break;
                }
            }

            if (fin) break;
        }
    }

    inline void Solve() {
        while (Read()) Work();
    }
}

int main() {
    Solver::Solve();
}