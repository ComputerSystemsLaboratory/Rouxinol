#include <cstdio>
using namespace std;
int main() {
    int dp[31];
    int n;
    dp[0]=1;
    dp[1]=1;
    dp[2]=2;
    for(int i=3;i<=30;i++){
        dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
    }
    while(true){
        scanf("%d",&n);
        if(n==0) break;
        int day=(dp[n]+9)/10;
        printf("%d\n",(day+364)/365);
    }
    return 0;
}