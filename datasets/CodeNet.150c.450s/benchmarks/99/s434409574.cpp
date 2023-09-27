#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <cmath>

using namespace std;

namespace Solver {

    int N;
    vector<string> a, b;
    inline void Read() {
        cin >> N;
        a.resize(N);
        b.resize(N);
        for (int i = 0; i < N; i++) cin >> a[i] >> b[i];
    }

    const vector<char> units = {'m', 'c', 'x', 'i'};

    inline int mcxi2int(string str) {
        int ret = 0;
        for (int i = 0; i < units.size(); i++) {
            for (int j = 0; j < str.length(); j++) {
                if (units[i] == str[j]) {
                    if (j == 0 || find(units.begin(), units.end(), str[j - 1]) != units.end()) {
                        ret += (int)pow(10.0, (double)(3 - i));
                    } else {
                        ret += (int)((str[j - 1] - '0') * pow(10.0, (double)(3 - i)));
                    }
                }
            }
        }

        return ret;
    }

    inline string int2mcxi(int v) {
        string ret = "";
        for (int i = 0; i < 4; i++) {
            int c = (int)pow(10.0, (double)(3 - i));
            int a = v / c;
            if (a == 0) continue;
            else if (a == 1) ret += string(1, units[i]);
            else ret += string(1, '0' + a) + string(1, units[i]);

            v -= a * c;
        }

        return ret;
    }


    inline void Work() {
        for (int i = 0; i < N; i++) cout << int2mcxi(mcxi2int(a[i]) + mcxi2int(b[i])) << endl;
    }



    inline void Solve() {
        Read();
        Work();
    }
}

int main() {
    Solver::Solve();
}