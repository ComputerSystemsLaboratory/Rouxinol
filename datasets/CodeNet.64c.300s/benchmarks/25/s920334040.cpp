#include <stdio.h>

int main()
{
        int a[4], b[4], i, j, hit, blow;

        while (scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]) != EOF) {

                hit = blow = 0;
                for (i = 0; i < 4; i++) {
                        scanf("%d", &b[i]);
                        if (b[i] == a[i]) {
                               hit++;
                        }
                        if (b[i] == a[(i+1)%4] ||
                                b[i] == a[(i+2)%4] ||
                                b[i] == a[(i+3)%4]) {
                                blow++;
                        }
                }
                printf("%d %d\n", hit, blow);
        }
        return 0;
}