#include <stdio.h>
int main(){
    int n,m,x,y,a[31];
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)a[i]=i;
    for(int i=0;i<m;i++){
        scanf("%d,%d",&x,&y);
        a[0]=a[x];
        a[x]=a[y];
        a[y]=a[0];
    }
    for(int i=1;i<=n;i++){
        printf("%d\n",a[i]);
    }
}