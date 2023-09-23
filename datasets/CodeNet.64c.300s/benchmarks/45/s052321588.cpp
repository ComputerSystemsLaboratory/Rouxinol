#include <stdio.h>

int main(){
    int n,m,p,x[101],i,money,q;
    while(1) {
        q=0;
        scanf("%d %d %d",&n,&m,&p);
        if (n==0&&m==0&&p==0) break;
        for (i=1;i<=n;i++) {
            scanf("%d",&x[i]);
            q+=x[i];
        }
        if (x[m]!=0) {
            money=q*(100-p)/x[m];
            printf("%d\n",money);
        }
        else printf("%d\n",0);
    }
    return 0;
}