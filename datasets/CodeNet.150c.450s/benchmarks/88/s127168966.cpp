#include <cstdio>
#include <algorithm>

using namespace std;

bool is_square_num(int n) {
    for (int i = 1; i * i <= n; i++) {
        if (i * i == n) { return true; }
    }
    return false;
}

int int_sqrt(int n) {
    for (int i = 1; i * i <= n; i++) {
        if (i * i == n) { return i; }
    }
    fprintf(stderr, "Not square number.\n");
    return -1;
}

int main() {
    for (;;) {
        int h, w;
        scanf("%d%d", &h, &w);

        if (!h && !w) { break; }

        int l = h * h + w * w;

        // i is a variable for the height
        for (int i = h + 1; l - (i * i) > i * i; i++) {
             if (is_square_num(l - i * i)) {
                printf("%d %d\n", i, int_sqrt(l - i * i));
                goto end;
            }
        }

        for (int m = l + 1; ; m++) {
            for (int i = 1; m - (i * i) > i * i; i++) {
                if (is_square_num(m - i * i)) {
                    printf("%d %d\n", i, int_sqrt(m - i * i));
                    goto end;
                }
            }
        }
end:;
    }
    return 0;
}