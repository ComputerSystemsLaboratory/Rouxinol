#include <stdio.h>

int main(){
    int n,i,a[10000],b[10000],p,q;
    while(1){
    scanf("%d",&n);
        if (n==0) break;
    p=0;
    q=0;
    for (i=0;i<n;i++) {
        scanf("%d %d",&a[i],&b[i]);
        if (a[i]>b[i]) {
            p=p+a[i]+b[i];
        }
        if (a[i]<b[i]) {
            q=q+a[i]+b[i];
        }
        if (a[i]==b[i]) {
            p+=a[i];
            q+=b[i];
        }
    }
    printf("%d %d\n",p,q);
    }
    return 0;
}