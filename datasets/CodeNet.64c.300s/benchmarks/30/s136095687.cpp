#include <cstdio>
#include <cstring>

int main() {
    const int coin[] = { 500, 100, 50, 10, 5, 1};
    int n = 0;

    while (scanf("%d", &n)) {
        if (n == 0) return 0;
        int c = 0;
        int o = 1000 - n;
        while (o != 0) {
            for (int i = 0; i < 6; ++i) {
                if (coin[i] <= o) {
                    o -= coin[i];
                    c++;
                    break;
                }
            }
        }
        printf("%d\n", c);
    }

    return 0;
}