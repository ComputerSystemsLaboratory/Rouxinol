#include<math.h>
#include<stdio.h>

int main(void)
{
    int a,b,c,d,i;

        while(scanf("%d %d",&a,&b)!=-1){
        puts("");
        c=a+b;
        d=log10(c);
        printf("%d\n",d+1);
        }
    return 0;
}