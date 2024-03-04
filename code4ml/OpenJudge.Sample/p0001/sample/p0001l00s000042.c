#include <stdio.h>

int main(void)
{
    int a, b;
    int c, i;
    
    while(scanf("%d %d", &a, &b) != EOF)
    {
        c = a + b;
        i=0;
        while(c!=0)
        {
            c = c / 10;
            i++;
        }
        printf("%d\n", i);
    }

    return 0;

}
