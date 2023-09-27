#include <stdio.h>
 
int main()
{
    int a = 0, b=0;
    int men = 0, shuu=0;
    scanf("%d", &a);
    scanf("%d", &b);

    men=a*b;
    shuu=2*(a+b);
    printf("%d %d\n", men, shuu);
    return 0;
}