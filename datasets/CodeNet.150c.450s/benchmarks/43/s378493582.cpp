#include <stdio.h>

int main () {
    int a, b, n, scorea, scoreb;
    while (1) {
        scanf("%d", &n);
        if (n == 0) break;

        scorea = scoreb = 0;
        while (n--) {
            scanf("%d %d", &a, &b);
            if (a == b) {
                scorea += a;
                scoreb += b;
            }
            else if (a > b) {
                scorea += a + b;
            } else {
                scoreb += a + b;
            }
        }
        printf("%d %d\n", scorea, scoreb);
    }

    return 0;
}