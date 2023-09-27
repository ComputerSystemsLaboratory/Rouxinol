#include <stdio.h>

int main(void)
{
    long long int min = 1000000, max = -1000000, sum = 0;
    int i, n, input;
    
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        scanf("%d", &input);
        if (input <= min) min = input;
        if (input >= max) max = input;
        sum += input;
    }
    printf("%lld %lld %lld\n", min, max, sum);
    return 0;
}