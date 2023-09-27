#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <climits>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    int n, k;
    while (cin >> n >> k, n) {
        vector<long long> ac(n+1, 0);
        for (int i=1; i<=n; ++i) {
            cin >> ac[i];
            ac[i] += ac[i-1];
        }
        long long res = -LLONG_MAX;
        for (int i=k; i<=n; ++i) {
            res = max(res, ac[i] - ac[i-k]);
        }
        cout << res << endl;
    }
    return 0;
}