#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <climits>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, k;
    while (cin >> n >> k, n) {
        int sum = 0, res = -INT_MAX;
        vector<int> v(n, 0);
        for (int i=0; i<n; ++i) {
            cin >> v[i];
            sum += v[i] - (k <= i ? v[i-k] : 0);
            res = max(res, (k-1 <= i ? sum : -INT_MAX));
        }
        cout << res << endl;
    }
    return 0;
}