#include <stdio.h>
int a[10][10000],b[10],n,m;
int ans(int o){
    if(o==n){
        int i,j,re=0;
        for(i=0;i<m;i++){
            int k=0;
            for(j=0;j<n;j++){
                k+=(a[j][i]+b[j])%2;
            }
            re+=n-k<k?n-k:k;
        }
        return re;
    }else{
        int x,y;
        b[o]=0;
        x=ans(o+1);
        
        b[o]=1;
        y=ans(o+1);
        
        return x<y?x:y;
    }
}
int main(void){
   int i,j;
   while(1){
   scanf("%d%d",&n,&m);
    if(n==0&&m==0){
        break;
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("%d\n",n*m-ans(0));
   }
}