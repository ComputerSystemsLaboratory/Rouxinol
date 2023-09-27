#include "bits/stdc++.h"

using namespace std;

const int ATOZ = 26;

void Main() {
    int D;
    cin >> D;
    vector<int> c(ATOZ, 0);
    for (int i = 0; i < ATOZ; ++i) {
        cin >> c[i];
    }
    vector<vector<int> > s(D, vector<int>(ATOZ, 0));
    for (int i = 0; i < D; ++i) {
        for (int j = 0; j < ATOZ; ++j) {
            cin >> s[i][j];
        }
    }

    vector<int> t(D, 0);
    for (int i = 0; i < D; ++i) {
        cin >> t[i];
        t[i] -= 1;
    }

    map<int, int> last;
    for (int i = 0; i < ATOZ; ++i) {
        last.insert(make_pair(i, -1));
    }

    vector<int> v(D, 0);
    for (int d = 0; d < D; ++d) {
        v[d] = v[d - 1] + s[d][t[d]];
        last[t[d]] = d;
        for (int i = 0; i < ATOZ; ++i) {
            v[d] -= c[i] * (d - last[i]);
        }
    }

    for (int d = 0; d < D; ++d) {
        cout << v[d] << endl;
    }
}


int main() {
    std::cout << std::fixed << std::setprecision(15);
    Main();
    return 0;
}
