#include <iostream>

using namespace std;


int main() {
    int n, a;
    long min = (long) 1e6, max = (long) -1e6, sum = 0;

    cin >> n;
    while (n) {
        cin >> a;
        if (min > a) min = a;
        if (max < a) max = a;
        sum += a;
        --n;
    }
    cout << min << ' ' << max << ' ' << sum << endl;
    return 0;
}