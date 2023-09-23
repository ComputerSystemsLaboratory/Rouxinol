// fibonacci number.
#include<stdio.h>

int main()
{
    int n;
    long long A[45];
    scanf("%d", &n);
    A[0] = 1; A[1] = 1;
    for(int i = 2; i <= n; i++) A[i] = A[i - 1] + A[i - 2];
    printf("%d\n", A[n]);
    return 0;
}