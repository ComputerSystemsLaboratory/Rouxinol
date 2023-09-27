#include <stdio.h>

int main(){
    int n,i,j,a,x;
    while(-1){
        scanf("%d",&n);
        if (n==0) break;
        x=0;
        for (i=1;i<=499;i++) {
            if (2*i>n) break;
            for (j=i+1;j<=500;j++) {
                a=(i+j)*(j-i+1)/2;
                if (a==n) {x++; break;}
            }
        }
        printf("%d\n",x);
    }
    return 0;
}