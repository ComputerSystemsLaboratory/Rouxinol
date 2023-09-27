#include <stdio.h>
 
#if 1
#define gc() getchar_unlocked()
#else
#define gc() getchar()
#endif
 
#define MAX  40002
#define BASE 20000
 
int a[MAX];
int sum[MAX]; int sz;
int left[MAX];
 
int main()
{
    int i, j, k, x, h, s, ans;
    int c;
 
    h = BASE, ans = s = 0;
    for (x = 1; ; x++) {
        c = gc();
        if (c <= ' ') break;
        if (c == '\\') {
            if (s > 0) ans += s, sum[sz++] = s, s = 0;
            a[--h] = x;
        } else if (c == '/') {
            if (a[h] > 0) left[sz] = a[h], s += x-a[h];
            else if (s > 0) ans += s, sum[sz++] = s, s = 0;
            h++;
        }
    }
    if (s > 0) ans += s, sum[sz++] = s;
 
    printf("%d\n", ans);
    k = sz;
    i = sz-1; while (i > 0) {
        j = i-1; while (j >= 0 && left[j] > left[i]) {
            sum[i] += sum[j], sum[j] = 0, j--, k--;
        }
        i = j;
    }
 
    printf("%d", k);
    for (i = 0; i < sz; i++) if (sum[i] > 0) printf(" %d", sum[i]);
    putchar('\n');
    return 0;
}
