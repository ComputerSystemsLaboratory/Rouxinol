#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <climits>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    int mn = INT_MAX, mx = -INT_MAX;
    long long sum = 0;
    int t;
    for (int i=0; i<n; ++i) {
        cin >> t;
        mn = min(mn, t);
        mx = max(mx, t);
        sum += t;
    }
    cout << mn << " " << mx << " " << sum << endl;
    return 0;
}