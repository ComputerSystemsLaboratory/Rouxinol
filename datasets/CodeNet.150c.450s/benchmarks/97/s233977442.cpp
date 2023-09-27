#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

namespace Solver {
    int N;
    vector<int> n, d;
    inline bool Read() {
        cin >> N;
        if (N == 0) return false;

        n.resize(N);
        d.resize(N);
        for (int i = 1; i < N; i++) {
            cin >> n[i] >> d[i];
        }

        return true;
    }

    const int dx[4] = {1, 0, -1, 0},
              dy[4] = {0, 1, 0, -1};

    inline void Work() {
        vector<int> posX(N), posY(N);
        posX[0] = posY[0] = 0;

        int minX = 0, minY = 0, maxX = 0, maxY = 0;
        for (int i = 1; i < N; i++) {
            posX[i] = posX[n[i]] + dx[d[i]];
            posY[i] = posY[n[i]] + dy[d[i]];

            minX = min(posX[i], minX);
            minY = min(posY[i], minY);
            maxX = max(posX[i], maxX);
            maxY = max(posY[i], maxY);
        }

        cout << (maxX - minX + 1) << " " << (maxY - minY + 1) << std::endl;
    }

    inline void Solve() {
        while(Read()) Work();
    }
}

int main() {
    Solver::Solve();
}