#include <stdio.h>
#define MAXL 3000

void swap(int *x, int *y);

int main()
{
    int x[MAXL] = {0};
    int y[MAXL] = {0};
    int i = 0;
    while(i < 3000)
    {
        scanf("%d",x+i);
        scanf("%d",y+i);
        
        if(x[i] == 0 && y[i] == 0) break;
        
        i++;
    }
    
    int length = i;
    
    for(i = 0; i < length; i++)
    {
        swap(x+i,y+i);
        
        printf("%d %d\n",x[i],y[i]);
    }
}

void swap(int *x,int *y)
{
    if(*x > *y)
    {
        int p = *x;
        *x = *y;
        *y = p;
    }
    
    return;
}
