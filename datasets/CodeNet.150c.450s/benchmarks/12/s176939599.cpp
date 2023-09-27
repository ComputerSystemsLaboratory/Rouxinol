#include <stdio.h>
int main(){
    int n,a[1000];
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++){
        printf("node %d: key = %d,",i,a[i]);
        if(i>1)printf(" parent key = %d,",a[i/2]);
        if(i*2<=n)printf(" left key = %d,",a[i*2]);
        if(i*2+1<=n)printf(" right key = %d,",a[i*2+1]);
        printf(" \n");
    }
}