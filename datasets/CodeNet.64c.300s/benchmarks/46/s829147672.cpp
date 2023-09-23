#include <iostream>

#define MAX_N 1000000

using namespace std;

int main() {
    bool isPrime[MAX_N];
    fill_n((bool *)isPrime, MAX_N, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < MAX_N; i++) {
        for (int j = i+i; j < MAX_N; j += i) {
            isPrime[j] = false;
        }
    }

    int a, d, n;
    while (cin >> a >> d >> n, a|d|n) {
        int count = 0;
        int i;
        for (i = 0;; i += d) {
            if (isPrime[a+i])
                count++;
            if (count == n) {
                cout << a+i << endl;
                break;
            }
        }
    }
}