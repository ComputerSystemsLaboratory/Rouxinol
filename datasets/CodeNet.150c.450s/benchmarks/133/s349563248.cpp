#include <bits/stdc++.h>
using namespace std;

int main() {
    int D; cin >> D;
    vector<int> c(26);
    for (int i = 0; i < 26; i++) cin >> c.at(i);
    vector<vector<int>> s(D, vector<int>(26));
    for (int i = 0; i < D; i++) {
        for (int j = 0; j < 26; j++) {
            cin >> s.at(i).at(j);
        }
    }

    int ns = 0;
    vector<int> last(26, 0);
    for (int i = 0; i < D; i++) {
        int t; cin >> t;
        ns += s.at(i).at(t-1);
        last.at(t-1) = i + 1;
        
        for (int j = 0; j < 26; j++) {
            ns -= c.at(j) * (i + 1 - last.at(j));
        }
        cout << ns << endl;
    }
    
}