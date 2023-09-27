#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<int> a;
int main() {
    while (cin >> n) {
        if (n == 0) break;
        a.resize(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        sort(a.begin(), a.end());
        int res = 1<<29;
        for (int i = 0; i < n-1; ++i) res = min(res, a[i+1] - a[i]);
        cout << res << endl;
    }
}
