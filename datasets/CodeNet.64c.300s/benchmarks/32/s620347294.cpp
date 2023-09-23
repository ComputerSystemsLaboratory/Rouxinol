#include <iostream>
const int NUM = 10000;
const int INF = 1 << 20;

using namespace std;

int main() {
    long long i, a[NUM];
    long long max = -INF, min = INF, sum = 0;
    cin >> i;
    i = 0;
    while (cin >> a[i]) {
        if (max < a[i]) max = a[i];
        if (min > a[i]) min = a[i];
        sum += a[i++];
    }
    cout << min << ' ' << max << ' ' << sum << endl;
    return 0;
}
