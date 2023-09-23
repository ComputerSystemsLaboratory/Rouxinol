#include <stdio.h>
 
int main()
{
    int a = 0;
    int h=0,m=0,s=0;
    scanf("%d", &a);

    if(86400 < a)
    {
    	return 1;
    }

    h = a / 3600;
    m = (a % 3600) / 60;
    // m = (a - h*3600)/60;
    s = (a % 3600) % 60;
    // s = a - h*3600 - m*60;
    printf("%d:%d:%d\n", h, m, s);
    return 0;
}