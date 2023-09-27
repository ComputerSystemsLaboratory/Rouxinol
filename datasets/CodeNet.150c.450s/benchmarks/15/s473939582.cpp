#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> s; int n; cin >> n;
    for (int i = 0; i < n; ++i) {
        int t; cin >> t;
        s.push_back(t);
    }
    s.push_back(-1);
    int q; cin >> q;
    int c = 0;
    for (int i = 0; i < q; ++i) {
        int t; cin >> t;
        s[s.size() - 1] = t;
        int ind = 0;
        for (ind = 0; ind <= n; ++ind) {
            if (s[ind] == t) { break; }
        }
        if (ind < n) { c++; }
    }
    cout << c << endl;
}