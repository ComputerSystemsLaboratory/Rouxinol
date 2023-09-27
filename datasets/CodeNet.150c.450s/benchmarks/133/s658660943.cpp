#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int D;
    cin >> D;
    vector<int> c;
    vector<int> s;
    vector<int> t;
    vector<int> contests_held;
    int S = 0;
    for (int j = 0; j < 26; j++) {
        int tempC = 0;
        cin >> tempC;
        c.push_back(tempC);
    }
    for (int d = 1; d <= D; d++) {
        for (int l = 0; l < 26; l++) {
            int tempS = 0;
            cin >> tempS;
            s.push_back(tempS);
        }
    }
    for (int e = 0; e < D; e++) {
        int tempT = 0;
        cin >> tempT;
        t.push_back(tempT);
        int u = 0;
        u = (e * 26 ) + t[e] - 1;
        S += s[u];
        for (int a = 1; a <= 26; a++) {
            int contest_count = 0;
            int tempContestDay = 0;
            for (int n = 0; n <= e; n++) {
                if (t[n] == a) {
                    contest_count += 1;
                    tempContestDay = n;
                }
            }
            if (contest_count == 0) {
                S = S - (c[a - 1] * (e + 1));
            } else {
                S = S - (c[a - 1] * (e - tempContestDay));
            }
        }
        cout << S << "\n";
    }
}