#include <cmath>
#include <cstdio>

int main() {
    int d;
    while (~scanf("%d", &d)) {
        unsigned long long int r = 0;
        for (int i = 0; i < 600 / d; ++i) {
            r += std::pow(d * i, 2) * d;
        }
        printf("%llu\n", r);
    }
}