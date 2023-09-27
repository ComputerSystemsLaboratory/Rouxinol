#include <iostream>
#include <vector>

using namespace std;

namespace Solver {

    int N, M, P;
    vector<int> X;
    inline bool Read() {
        cin >> N >> M >> P;
        if (N == 0) return false;
        X.resize(N);
        for (int i = 0; i < N; i++) cin >> X[i];

        return true;
    }

    inline void Work() {
        double sum = 0;
        for (int i = 0; i < N; i++) sum += X[i];
        if (X[M - 1] == 0) cout << 0 << endl;
        else cout << (int)((100 - P) * sum / X[M - 1]) << endl;
    }

    inline void Solve() {
         while(Read()) Work();
    }
}

int main() {
    Solver::Solve();
}