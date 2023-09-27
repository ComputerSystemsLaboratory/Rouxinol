#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

namespace Solver {

    int N, M;
    vector<pair<int, int>> DP;
    inline bool Read() {
        cin >> N >> M;
        if (N == 0) return false;
        DP.resize(N, make_pair<int, int>(0, 0));
        for (int i = 0; i < N; i++) cin >> DP[i].second >> DP[i].first;

        return true;
    }

    inline void Work() {
        sort(DP.rbegin(), DP.rend());
        int P = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < DP[i].second; j++) {
                if (M == 0) {
                    P += DP[i].first;
                } else {
                    M--;
                }
            }
        }
        cout << P << endl;
    }

    inline void Solve() {
        while(Read()) Work();
    }
}

int main() {
    Solver::Solve();
}