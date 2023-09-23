#include <stdio.h>
int main(){
    int n,ans,i;
    while(scanf("%d",&n)!=EOF){
        ans=0;
        for(i=1;i*n<600;i++)ans+=(i*n)*(i*n);
        printf("%d\n",ans*(600/i));
    }
}