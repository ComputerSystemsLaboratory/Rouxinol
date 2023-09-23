#include <stdio.h>
#include <math.h>
#include <cstring>

bool nArray[999999];

int main() {
    int n = 0;
    for (int cou = 0; ((scanf("%d", &n) != EOF) && (cou < 30)); ++cou) {
        for (int i = 0; i < 999999; ++i) {
            nArray[i] = (i <= 1) ? false : true;
        }

        int maxValue = sqrt(n);
        for (int i = 2; i <= n + 1; ++i) {
            if (!nArray[i]) {
                continue;
            }

            for (int j = 2; (i * j) <= n; ++j) {
                nArray[i * j] = false;
            }
        }

        int result = 0;
        for (int i = 0; i <= n; ++i) {
            if (nArray[i]) {
                result++;

            }
        }

        printf("%d\n", result);
    }

    return 0;
}