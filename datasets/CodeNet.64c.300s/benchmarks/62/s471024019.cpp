#include <stdio.h>
int a[100][100],b[100];
int main(void){
    int i,j,k,m,n;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(k=0;k<m;k++){
        scanf("%d",&b[k]);
    }
    for(i=0;i<n;i++){
        int c=0;
        for(j=0;j<m;j++){
            c+=a[i][j]*b[j];
        }
        printf("%d\n",c);
    }
    return 0;
}
