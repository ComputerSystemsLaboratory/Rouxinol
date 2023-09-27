#include <iostream>
using namespace std;

int main(void) {
    int n, d, lo, hi;
    long sum = 0;
    lo = 987654321;
    hi = -987654321;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> d;
        sum += d;
        lo = min(lo, d);
        hi = max(hi, d);
    }
    cout << lo << ' ' << hi << ' ' << sum << endl;
    return 0;
}