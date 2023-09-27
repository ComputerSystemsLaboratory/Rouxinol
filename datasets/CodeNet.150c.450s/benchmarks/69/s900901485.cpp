/* AOJ0033 Ball */

#include <stdio.h>

#define N 10

int main(void)
{
    int n, ans, i;

    scanf("%d", &n);
    while(n--) {
        ans = 1;
        int a, b=-1, c=-1;
        for(i=1; i<=N; i++) {
            scanf("%d", &a);
            if(ans) {
                if(a > b)
                    b = a;
                else if(a > c)
                    c = a;
                else
                    ans = 0;
            }
        }

        printf("%s\n", ans ? "YES" : "NO");
    }

    return 0;
}