#include <stdio.h>

int main(void)
{
    int W,H,x,y,r,j;
    scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
    if( 0<=(x-r) && (x+r)<=W && 0<=(y-r) && (y+r)<=H){
        j=1;
    }

    else{
        j=0;
    }

    if (j==1){
        printf("Yes\n");
    }
    else if (j==0){
        printf("No\n");
    }
    return 0;
}