#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int a[10010];

int main() {
    int n;
    cin >> n;
    long long sum = 0;
    int ma = -2000000000, mi = 2000000000;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        mi = min(mi, a[i]);
        ma = max(ma, a[i]);
    }
    cout << mi << ' ' << ma << ' ' << sum << endl;
}
