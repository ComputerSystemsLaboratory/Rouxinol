#include <stdio.h>
int main(void){
    int W,H,x,y,r;
    scanf("%d%d%d%d%d",&W,&H,&x,&y,&r);
    printf(r>x||W<x+r||r>y||H<y+r?"No\n":"Yes\n");
return 0;
}