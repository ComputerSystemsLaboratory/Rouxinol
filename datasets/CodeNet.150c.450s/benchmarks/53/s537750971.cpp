#include <iostream>
#include <cstring>
#include <cstdio>

#define maxn 1000005

inline bool isp(int x) {
    if (x == 1) return false;
    for (register int i = 2; i * i <= x; ++i) {
        if (x % i == 0) return false;
    }
    return true;
}

long long plst[maxn];
bool nisp[maxn];
long long pcnt;

void iit() {
    for (long long i = 2; i < maxn; ++i) {
        if (!nisp[i]) {
            plst[++pcnt] = i;
        }
        for (long long j = 1; j <= pcnt && plst[j] * i < maxn; ++j) {
            nisp[plst[j] * i] = false;
            if (i % plst[j] == 0) break;
        }
    }
}

void handle(long long t) {
    int cur = 1;
    std::cout << t << ":";
    while (t >= 1 && cur <= pcnt) {
        if (t >= 1e6 && isp(t)) {
            std::cout << " " << t;
            break;
        }
        if (t % plst[cur] == 0) {
            t /= plst[cur];
            std::cout << " " << plst[cur];
        } else {
            cur++;
        }
    }
    std::cout << std::endl;
}

int main() {
    long long n;
    std::cin >> n;
    iit();
    handle(n);
}

