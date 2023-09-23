#include <stdio.h>
int main(void)
{
    int clas[30]={0},tei[28],i;
    for(i=0;i<28;i++)
    {
        scanf("%d",&tei[i]);
        clas[--tei[i]]++;
    }
    for(i=0;i<30;i++)
        if(clas[i]==0)
            printf("%d\n",i+1);
    return 0;
}