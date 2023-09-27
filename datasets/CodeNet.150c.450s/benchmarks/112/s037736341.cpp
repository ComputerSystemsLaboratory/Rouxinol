#include <stdio.h>
#include <string.h>

int i;
int m, n;
char table[256];

int main() {
    while (1) {
        scanf("%d", &n);
        if (n == 0) return 0;

        memset(table, 0, sizeof(table));

        for (i=0; i<n; i++) {
            char a, b;
            scanf(" %c %c", &a, &b);
            table[a] = b;
        }
    
        scanf("%d", &m);
        for (i=0; i<m; i++) {
            char c;
            scanf(" %c", &c);
            if (table[c]) printf("%c", table[c]);
            else printf("%c", c);
        }
        puts("");
    }
}