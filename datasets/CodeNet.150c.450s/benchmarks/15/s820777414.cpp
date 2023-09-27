#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    long i,j;
    long n;
    long q;
    long cnt = 0;
    static long S[10000];
    static long T[500];

    scanf("%ld",&n);
    for (i = 0; i < n; i++) {
        scanf("%ld",&S[i]);
    }

    scanf("%ld",&q);
    for (i = 0; i < q; i++) {
        scanf("%ld",&T[i]);
    }

    for (i = 0; i < q; i++) {
        for (j = 0; j < n; j++) {
            if(T[i] == S[j]) {
                cnt++; break;
            }
        }
    }

    printf("%ld\n",cnt);

    return 0;
}