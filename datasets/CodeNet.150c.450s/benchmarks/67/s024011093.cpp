#include <iostream>

typedef long long int lli;
using namespace std;

int n;

lli solve() {
    lli sum = 0;
    for (int i = 1; i <= n; i++) {

        for (int j = i; j < n; j++) {
            int s = 0;
            for (int k = i; k <= j; k++)
                s += k;
            if (s == n) {
                sum++;
            }
        }
    }

    return sum;
}

int main() {
    ios::sync_with_stdio(false);

    while (cin >> n, n)
        cout << solve() << endl;
}