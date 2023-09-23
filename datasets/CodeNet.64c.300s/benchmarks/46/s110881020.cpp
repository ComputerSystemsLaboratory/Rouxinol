#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

namespace Solver {

    vector<bool> isPrime;
    inline void PreCompute() {
        int MAX = 1000000;
        isPrime.resize(MAX, true);
        isPrime[0] = isPrime[1] = false;
        for (int i = 2; i * i <= MAX; ++i) {
            if (isPrime[i]) {
                for (int j = i * 2; j < MAX; j += i)
                    isPrime[j] = false;
            }
        }
    }

    int a, d, n;
    inline bool Read() {
        cin >> a >> d >> n;
        return a != 0;
    }

    inline void Work() {
        for (int i = 0, cnt = 0;; i++) {
            if (isPrime[a + d * i]) {
                cnt++;
                if (cnt == n) {
                    cout << a + d * i << endl;
                    break;
                }
            }
        }
    }

    inline void Solve() {
        PreCompute();
        while(Read()) Work();
    }
}

int main() {
    Solver::Solve();
}