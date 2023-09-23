#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e7+1;
int prime[maxn];
bool is_prime[maxn];

int sieve(int n) {
    int p = 0;
    for(int i = 1; i <= n; i ++) is_prime[i] = true;
    is_prime[0] = is_prime[1] = false;
    for(int i = 2; i <= n; i ++) {
        if(is_prime[i]) {
            prime[p++] = i;
            for(int j = i+i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    return p;
}

int main() {
    int n;
    while(scanf("%d", &n) != EOF) {
        printf("%d\n", sieve(n));
    }
    return 0;
}