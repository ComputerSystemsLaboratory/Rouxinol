#include <bits/stdc++.h>
using namespace std;

vector<int> l(26, 0);
int last(int d, int i) { return l.at(i); }

int main() {
    int D;
    cin >> D;
    vector<int> c(26);
    vector<vector<int>> s(D + 1, vector<int>(26));
    vector<int> t(D + 1);

    for(int i = 0; i < 26; i++) {
        cin >> c.at(i);
    }
    for(int d = 1; d <= D; d++) {
        for(int i = 0; i < 26; i++) {
            cin >> s.at(d).at(i);
        }
    }
    for(int d = 1; d <= D; d++) {
        cin >> t.at(d);
        t.at(d)--;
    }

    int v = 0;
    for(int d = 1; d <= D; d++) {
        v += s.at(d).at(t.at(d));
        l.at(t.at(d)) = d;
        // cout << "d:" << d << " v:" << v << endl;
        for(int i = 0; i < 26; i++) {
            v -= c.at(i) * (d - last(d, i));
            // cout << "d:" << d << " v:" << v << endl;
        }
        cout << v << endl;
    }

    return 0;
}