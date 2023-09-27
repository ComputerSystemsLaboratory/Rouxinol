#include<stdio.h>
#include<string.h>
int main()
{
    int a,ans;
    double p;
    while(scanf("%d",&ans)==1)
    {
        p=1;
        for(a=2;a<=ans;a++)
            p = p*a;
        printf("%0.lf\n",p);
    }
}