#include <stdio.h>
int main()
{
    int i = 1;
    int temp;
    scanf("%d", &temp);
    while (temp != 0) {
        printf("Case %d: %d\n", i, temp);
        i++;
        scanf("%d", &temp);
    }
    return 0;
}