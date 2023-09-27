#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    const int MAX = 1000000;
    bool isPrime[MAX];
    fill_n(isPrime, MAX, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 4; i < MAX; i += 2) {
        isPrime[i] = false;
    }
    for (int i = 3; i * i <= MAX; i += 2) {
        if (isPrime[i]) {
            for (int j = 2 * i; j < MAX; j += i) {
                isPrime[j] = false;
            }
        }
    }
    while (true) {
        int a, d, n;
        cin >> a >> d >> n;
        if ((a | d | n) == 0) {
            break;
        }
        int count = 0, res = a - d;
        while (count < n) {
            res += d;
            if (isPrime[res]) {
                count++;
            }
        }
        cout << res << endl;
    }
}