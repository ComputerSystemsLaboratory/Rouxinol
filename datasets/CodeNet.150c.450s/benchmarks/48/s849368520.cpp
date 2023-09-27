#include <iostream>
#include <cmath>

using namespace std;

namespace Solver {

    int e;
    inline bool Read() {
        cin >> e;
        return e != 0;
    }

    inline void Work() {
        int m = 1e+8;
        for (int z = 0; z * z * z <= e; z++) {
            int r = e - z * z * z;
            int y = (int)sqrt(r);
            int x = r - y * y;
            m = min(m, x + y + z);
        }

        cout << m << endl;
    }

    inline void Solve() {
        while(Read()) Work();
    }
}

int main() {
    Solver::Solve();
}