#include <iostream>
#include <limits>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n;
    int minv = numeric_limits<int>::max();
    int maxv = numeric_limits<int>::min();
    while (n--) {
        int r; cin >> r;
        maxv = max(maxv, r - minv);
        minv = min(minv, r);
    }
    cout << maxv << endl;
}