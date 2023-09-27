#include <stdio.h>
 
int main(void)
{
    int i, n, a;
    long int goukei = 0;
    int M = -1000000, m = 10000000;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a);
        goukei = goukei + a;
        if (a >= M)
        {
            M = a;
        }
        if(a <= m)
        {
            m = a;
        }
    }
    printf("%d %d %ld\n", m, M, goukei);
    return 0;
}