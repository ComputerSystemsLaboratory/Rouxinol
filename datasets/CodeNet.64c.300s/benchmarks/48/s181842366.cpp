#include <iostream>
#include <math.h>

using namespace std;

bool p[1000000];

void primes() {
    for (int i = 0; i < 1000000; i++) {
        p[i] = true;
    }

    p[0] = p[1] = false;

    for (int i = 2; i < sqrt(999999); i++) {
        if (p[i]) {
            for (int j = i * 2; j < 1000000; j += i) {
                p[j] = false;
            }
        }
    }
}

int main() {
    primes();

    int n;
    while (cin >> n) {
        int ans = 0;
        for (int i = 2; i <= n; i++) {
            if (p[i]) {
                ans += 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}