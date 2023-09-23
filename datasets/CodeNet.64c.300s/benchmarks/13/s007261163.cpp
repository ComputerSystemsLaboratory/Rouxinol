#include<stdio.h>

int main(void){
    int n;
    scanf("%d",&n);

    if(n == 1 || n == 0)
        printf("1\n");
    else{
        long long pre1 = 1,pre2 = 1,ans = 0;
        for(int i = 2;i <= n;i++){
            ans = pre1 + pre2;
            pre2 = pre1;
            pre1 = ans;
        }
        printf("%lld\n",ans);
    }
    return 0;
}