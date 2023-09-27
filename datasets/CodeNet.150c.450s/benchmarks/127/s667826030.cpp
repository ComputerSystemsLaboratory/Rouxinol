#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

namespace Solver {

    int M;
    vector<string> ds;
    inline void Read() {
        cin >> M;
        ds.resize(M);
        for (int i = 0; i < M; i++) cin >> ds[i];
    }

    inline void Work() {
        for (int i = 0; i < M; i++) {
            set<string> ss;
            for (int j = 1; j < ds[i].length(); j++) {
                vector<string> s(4);
                s[0] = ds[i].substr(0, j);
                s[1] = ds[i].substr(0, j);
                s[2] = ds[i].substr(j);
                s[3] = ds[i].substr(j);
                reverse(s[1].begin(), s[1].end());
                reverse(s[3].begin(), s[3].end());

                for (int l = 0; l < 2; l++) {
                    for (int m = 2; m < 4; m++) {
                        if (l == m) continue;
                        ss.insert(s[l] + s[m]);
                        ss.insert(s[m] + s[l]);
                    }
                }

            }

            cout << ss.size() << endl;
        }
    }

    inline void Solve() {
        Read();
        Work();
    }
}

int main() {
    Solver::Solve();
}