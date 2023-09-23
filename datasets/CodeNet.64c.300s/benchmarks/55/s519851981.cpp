#include <stdio.h>
#define MAXLEN 10000

int main()
{
    int x[MAXLEN] = {0};
    int i = 0;
    
    while(i < MAXLEN)
    {
        scanf("%d",x+i);
        
        if(x[i] == 0) break;
        
        i++;
    }
    
    int length = i;
    
    for(i = 0;i < length; i++)
    {
        printf("Case %d: %d\n",i+1,x[i]);
    }
    
    return 0;
}
