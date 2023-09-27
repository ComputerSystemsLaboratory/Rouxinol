#include <stdio.h>

int main(){
    int n,r,i,j,p,c,a[51],b[51];
    while(1){
        scanf("%d %d\n",&n,&r);
        if (n==0&&r==0) break;
        for (i=1;i<=n;i++) {
            a[i]=n+1-i; 
            b[i]=n+1-i;
        }
        for (i=0;i<r;i++) {
            scanf("%d %d",&p,&c);
            for (j=1;j<=c;j++) {
                b[j]=a[j+p-1];
            }
            for (j=c+1;j<=c+p-1;j++) {
                b[j]=a[j-c];
            }
            for (j=1;j<=n;j++) {
                a[j]=b[j];
            }
        }
        
        printf("%d\n",a[1]);
        
    }
    return 0;
}