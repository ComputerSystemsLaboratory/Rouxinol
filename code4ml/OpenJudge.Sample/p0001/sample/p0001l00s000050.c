#include <stdio.h>

int length(const char c[])
{
    int len=0;
    while(c[len])   len++;

    return len;
}

int main(void)
{
    int i=0,n=3,sum;
    int a,b;
    char c[10];

    scanf("%d %d",&a,&b);

    for(i=0;i<n;i++){   
        sum=a+b;
        sprintf(c,"%d",sum);
        printf("%d\n",length(c));
        scanf("%d %d",&a,&b);
    }

    return 0;

}
