#include <iostream>
using namespace std;


int main() {
    int n;
    long long count[31];

    fill(count, count+31, 0);
    count[0] = 1;
    for (int i = 1; i <= 30; i++) {
        count[i] += count[i-1];
        if (i >= 2) {
            count[i] += count[i-2];
        }
        if (i >= 3) {
            count[i] += count[i-3];
        }
    }

    while (cin >> n, n) {
        cout << (count[n] / 3650 + (count[n]%3650 > 0)) << endl;
    }

    return 0;
}