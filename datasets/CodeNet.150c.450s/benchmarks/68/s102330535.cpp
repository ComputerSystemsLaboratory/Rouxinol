#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
const int INF = (int)1e9 + 7;

int main() {
    int n;
    while (cin >> n, n) {
        vector<int> a(n);
        for (auto &ai: a) cin >> ai;
        sort(begin(a), end(a));
        int mi = INF;
        for (int i = 0; i + 1 < n; i++) mi = min(mi, a[i + 1] - a[i]);
        cout << mi << endl;
    }
    return 0;
}

