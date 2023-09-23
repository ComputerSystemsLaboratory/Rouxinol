#include <stdio.h>

int main(void) {
    int x,y;
    scanf("%d %d",&x,&y);
    while(x!=0 || y!=0) {
        if(x<=y)
            printf("%d %d\n",x,y);
        else
            printf("%d %d\n",y,x);
        scanf("%d %d",&x,&y);
    }
    return 0;
}