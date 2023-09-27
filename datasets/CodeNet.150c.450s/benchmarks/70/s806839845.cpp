#include <stdio.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const char dat[7][16] = {
    "Monday", "Tuesday", "Wednesday", "Thursday",
    "Friday", "Saturday", "Sunday",
};
const int s[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int main() {
    for (;;) {
        int m, d;
        scanf("%d%d", &m, &d);
        if (m == 0 && d == 0) return 0;
        m--, d--;
        rep (i, m) d += s[i];
        puts(dat[(d+3)%7]);
    }
}