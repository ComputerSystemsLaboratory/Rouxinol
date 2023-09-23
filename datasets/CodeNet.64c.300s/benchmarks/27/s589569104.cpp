#include <stdio.h>
int main(){
    int n,m,ans;
    while(1){
        scanf("%d%d",&n,&m);
        if(n==0)return 0;
        ans=0;
        for(int i=1;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<=n;k++){
                    if(i+j+k==m)ans++;
                }
            }
        }
        printf("%d\n",ans);
    }
}