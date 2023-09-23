#include<stdio.h>
int main(){
    int n;
    int ans=100000;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        ans=ans*1.05;
        if(ans%1000>1){
            ans=ans+1000-ans%1000;
        }
    }
    printf("%d\n",ans);
    return 0;
}