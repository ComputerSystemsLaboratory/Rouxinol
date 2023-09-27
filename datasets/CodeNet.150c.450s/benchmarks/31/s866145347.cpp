#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <climits>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    int mn = t;
    int ret = -INT_MAX;
    for (int i=1; i<n; ++i) {
        cin >> t;
        ret = max(ret, t - mn);
        mn = min(mn, t);
    }
    cout << ret << endl;
    return 0;
}