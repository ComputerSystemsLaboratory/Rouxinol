#include <stdio.h>

int main()
{
    int i, j, x, y;
    while(scanf("%d %d",&x, &y)!=EOF){
        for(i=0,j=1;(x+y)/j;i++,j*=10);
        printf("%d\n",i);
    }
    return 0;
}