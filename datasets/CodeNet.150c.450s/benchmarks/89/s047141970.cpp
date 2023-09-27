#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;

//N??\???????´???°?????????O(N log log N)
int N = 1010101;
set<int> primes;
vector<bool> is_prime(N + 1, true);
void init() {
        is_prime[0] = is_prime[1] = false;
        for (int i = 2; i <= N; i ++) {
                if (is_prime[i]) {
                        primes.insert(i);
                        for (int j = i + i; j <= N; j += i) is_prime[j] = false;
                }
        }
}

int main() {
        init();
        int a, d, n;
        while (scanf("%d%d%d", &a, &d, &n), n) {
                int cnt = 0;
                for (;;) {
                        if (primes.count(a)) cnt ++;
                        if (cnt == n) break;
                        a += d;
                }
                printf("%d\n", a);
        }
        return 0;
}