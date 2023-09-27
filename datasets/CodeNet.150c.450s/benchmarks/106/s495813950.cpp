#include <stdio.h>
int main()
{
    int a, b, c;
    int i = 0;
    scanf("%d %d %d", &a, &b, &c);

    while (a <= b) {
        if (c % a == 0) {
            i++;
        }
        a++;
    }
    printf("%d\n", i);
    return 0;
}