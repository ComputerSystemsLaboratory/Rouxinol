#include<stdio.h>
int main()
{
    int a,b,c,t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d%d%d",&a,&b,&c);
        if(a>b&&a>c&&(a*a)==(b*b)+(c*c))
            printf("YES\n");
        else if(b>c&&b>a&&(b*b)==(a*a)+(c*c))
            printf("YES\n");
        else if(c>a&&c>b&&(c*c)==(a*a)+(b*b))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}