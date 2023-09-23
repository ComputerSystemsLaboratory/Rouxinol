#include <stdio.h>

int main(void)
{
    int w,h,x,y,r;
    scanf("%d %d %d %d %d", &w,&h,&x,&y,&r);
    if(x - r >= 0 && y - r >= 0 && x + r <= w && y + r <= h)
    {
    	puts("Yes");
    } else {
    	puts("No");
    }
    
    return 0;
}