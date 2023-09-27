#include <bits/stdc++.h>
using namespace std;

#define rep(i,j) for(int i=0;i<j;++i)

int m = 1000000;
bool prime[100000000];

void eratos(int n) {
    for (int i = 0; i < n; ++i) prime[i] = true;
    prime[0] = prime[1] = false;
    for (int i = 2; i < sqrt(n); ++i) {
        if (prime[i]) {
            for (int j = i+i; j <= n; j += i) prime[j] = false;
        }
    }
}

int main() {
    eratos(m);

    int a, d, n;
    while (cin >> a >> d >> n && a && d && n) {
        int c = 0;
        for (int i = a; i < m; i += d)
            if (prime[i])
                if (++c == n) { cout << i << endl; break; }
    }
}