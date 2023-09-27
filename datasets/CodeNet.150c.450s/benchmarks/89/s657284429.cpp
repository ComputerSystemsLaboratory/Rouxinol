#include<iostream>

using namespace std;

const int nmax = 1000001;
bool sieve[nmax];

int main() {

    sieve[0] = false;
    sieve[1] = false;
    for (int i = 2; i < nmax; ++i) sieve[i] = true;
    for (int i = 2; i < nmax; ++i) {
        if (sieve[i]) for(int k = i + i; k < nmax; k += i) sieve[k] = false;
    }

    while(1) {
        int a, d, n;
        cin >> a >> d >> n;
        if (a == 0 && d == 0) break;

        int cnt = 0;
        int ai = a;
        while (1) {
            if (sieve[ai]) cnt++;
            if (cnt == n) break;
            ai += d;
            //cout << cnt << endl;
        }

        cout << ai << endl;
    }
}