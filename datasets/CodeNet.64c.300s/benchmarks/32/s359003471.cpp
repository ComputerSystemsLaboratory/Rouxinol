#include <iostream>
#include <limits>
using namespace std;

int main() {
    int n, i, min, max;
    long long a, sum;

    cin >> n;
    for (i = 0,
         min = numeric_limits<int>::max(),
         max = numeric_limits<int>::min(),
         sum = 0;
         i < n; i++) {
        cin >> a;
        sum += a;
        if (a < min) min = a;
        if (max < a) max = a;
    }
    cout << min << " " << max << " " << sum << endl;

    return 0;
}