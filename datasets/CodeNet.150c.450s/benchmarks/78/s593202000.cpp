#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;

#define INF (1<<28)

int t[1000*1000+1];
int ot[1000*1000+1];

void init() {
    fill(t, t+1000*1000+1, INF);
    fill(ot, ot+1000*1000+1, INF);
    for (int i = 1; ; i++) {
        int n = i * (i+1) * (i+2) / 6;
        if (n > 1000*1000) break;
        t[n] = 1;
        if (n % 2) ot[n] = 1;
    }

    for (int i = 1; i <= 1000*1000; i++) {
        for (int j = 1; ; j++) {
            int p = j * (j+1) * (j+2) / 6;
            if (i <= p) break;
            t[i] = min(t[i], t[i-p] + 1);
            if (p % 2) ot[i] = min(ot[i], ot[i-p] + 1);
        }
    }
}

int main() {
    init();
    int n;
    while (scanf("%d", &n), n) {
        printf("%d %d\n", t[n], ot[n]);
    }
    return 0;
}