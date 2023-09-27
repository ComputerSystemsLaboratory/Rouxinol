#include <iostream>
using namespace std;

int main() {
    int n, s;
    while (cin >> n) {
        if (n == 0) {
            break;
        }
        int mins = 1000, maxs = 0, sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> s;
            sum += s;
            mins = min(s, mins);
            maxs = max(s, maxs);
        }
        sum -= mins + maxs;
        cout << sum / (n - 2) << endl;
    }
    return 0;
}