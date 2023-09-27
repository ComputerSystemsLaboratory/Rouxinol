#include <stdio.h>

struct Translate
{
    char src;
    char dst;
};

int main () {
    int n, m, i;
    char a, b;
    struct Translate table[256];

    while (1) {
        scanf("%d", &n);
        if(n == 0) break;

        for (i = 0; i < n; i++) {
            scanf(" %c %c", &a, &b);
            table[i].src = a;
            table[i].dst = b;
        }

        scanf("%d", &m);

        while (m--) {
            scanf(" %c", &a);
            for (i = 0; i < n; i++) {
                if (a == table[i].src) {
                    a = table[i].dst;
                    break;
                }
            }
            printf("%c", a);
        }
        printf("\n");
    }
    
    return 0;
}