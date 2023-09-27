#include <cstdio>

int main() {
    int in[8] = { 0 };

    while (true) {
        for (int i = 0; i < 8; ++i) {
            if (scanf("%d", &in[i]) == EOF) {
                return 0;
            }
        }

        int hi = 0;
        int bl = 0;

        for (int i =  0; i < 4; ++i) {
            for (int j = 4; j < 8; ++j) {
                if (in[i] == in[j]) {
                    if (i == j - 4) {
                        hi++;
                    } else {
                        bl++;
                    }
                }
            }
        }

        printf("%d %d\n", hi, bl);
    }
}