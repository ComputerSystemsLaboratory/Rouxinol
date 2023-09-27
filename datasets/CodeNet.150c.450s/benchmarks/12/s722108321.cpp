#include <cstdio>

int main(){
    int i, h;
    scanf("%d",&h);
    int a[h];
    int p, l, r;
    for(i=0;i<h;i++)scanf("%d",a+i);
    for(i=0;i<h;i++){
        printf("node %d: key = %d, ",i+1, a[i]);
        if(i>0)printf("parent key = %d, ",a[(i+1)/2-1]);
        if((i+1)*2-1<h)printf("left key = %d, ", a[(i+1)*2-1]);
        if((i+1)*2<h)printf("right key = %d, ", a[(i+1)*2]);
        printf("\n");
    }
    return 0;
}

