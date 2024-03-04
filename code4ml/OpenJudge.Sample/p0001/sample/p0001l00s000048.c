#include <stdio.h>
int main()
{
    int a, b, sum, c =1;
    while(scanf("%d %d", &a, &b) != EOF)
    {
        sum = a+b;
        if(sum/10 != 0)
        {
            c++;
        }
         printf("%d\n", c);
    }

}