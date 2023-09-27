#include <stdio.h>

int i;
int a, b;
int n;

int main() {
    while (1) { 
        a = 0;
        b = 0;

        scanf("%d", &n);
        if (n == 0) return 0;

        for (i=0; i<n; i++) {
            int l, r;
    
            scanf("%d %d", &l, &r);
            if (l > r) {
                a += l + r;
            } else if (l < r) {
                b += l + r;
            } else {
                a += l;
                b += r;
            }
        }
    
        printf("%d %d\n", a, b);
   }
}