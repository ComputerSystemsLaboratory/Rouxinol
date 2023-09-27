#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, n_min, n_max;
    while (cin >> m >> n_min >> n_max, m) {
        vector<int> p(m);
        for (int &pi: p) cin >> pi;
        sort(p.begin(), p.end());
        reverse(p.begin(), p.end());
        vector<pair<int, int>> res;
        for (int n = n_min; n <= n_max; n++) {
            res.emplace_back(p[n - 1] - p[n], n);
        }
        sort(res.begin(), res.end());
        cout << res[res.size() - 1].second << endl;
    }
    return 0;
}
