#include <iostream>
using namespace std;

const int MAX_N = 1000000;
int prime[MAX_N];
bool isPrime[MAX_N+1];

int main(void) {
    int pos = 0;
    for (int i = 0; i < MAX_N; i++) isPrime[i] = true;
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i <= MAX_N; i++) {
        if (isPrime[i]) {
            prime[pos++] = i;
            for (int j = 2*i; j <= MAX_N; j += i) isPrime[j] = false;
        }
    }

    int a, d, n;
    while (cin >> a >> d >> n, a) {
        a -= d;

        pos = 0;
        int cnt = 0;
        while (cnt < n) {
            a += d;
            while (a > prime[pos]) pos++;
            if (a == prime[pos]) cnt++;
        }

        cout << a << endl;
    }

    return 0;
}