#include <iostream>
#include <string>
#include <vector>
#include <cstring>
using namespace std;

const int MX = 10000000;
bool sieve[MX];

void makeSieve() {
    memset(sieve, false, sizeof sieve);
    sieve[0] = sieve[1] = true;
    for (int i=2; i*i<MX; ++i) {
        if ( ! sieve[i]) {
            for (int j=i*i; j<MX; j+=i) {
                sieve[j] = true;
            }
        }
    }
}

int main() {
    makeSieve();
    int a, d, n;
    while (cin >> a >> d >> n, (a || d || n)) {
        int c = 0;
        for (int x=a; ; x+=d) {
            if ( ! sieve[x]) {
                c ++;
                if (c == n) {
                    cout << x << endl;
                    break;
                }
            }
        }
    }
    return 0;
}