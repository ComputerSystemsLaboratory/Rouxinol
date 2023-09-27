#include <stdio.h>

int main(void)
{
    int n,x,i,j,k,count=0;

    scanf("%d%d",&n,&x);
    while((n!=0)||(x!=0)) { 
        for(i=1;i<=n-2;i++) {
            for(j=i+1;j<=n-1;j++) { 
                for(k=j+1;k<=n;k++) {
                    if(i+j+k==x)
                        count+=1;
                }
            }
        }
    printf("%d\n", count);
    count = 0;
    scanf("%d%d",&n,&x);
    }
    return 0;
}   