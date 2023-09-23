#include<stdio.h>

int main()
{
    int i,a,b,sum,j;
    while (scanf ("%d%d",&a,&b) != EOF)
    {
    j=0;
        sum=0;
        if(((a<0 || a>1000000)||(b<0 || b>1000000))||(i>200))
            break;
        sum=a+b;
        while(sum!=0)
        {
            sum=sum/10;
            j++;
        }
        printf("%d\n",j);
        i++;
    }
    return 0;
}