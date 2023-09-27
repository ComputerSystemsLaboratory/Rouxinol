#include <stdio.h>

int main(void)
{
    int n;
    int i;
    int x[100];
    scanf("%d",&n);
    for(i = 0;i < n;++i){
        scanf("%d",&x[i]);
    }
    for(i = n-1;i >= 0;--i){
        if(i != n-1 ){
                printf(" ");
        }
        printf("%d",x[i]);       
    }
    printf("\n");
    return 0;
}