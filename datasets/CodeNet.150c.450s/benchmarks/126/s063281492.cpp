#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int a,b;
    for(;;){
        int dp[20][20] = {{0}};
        scanf("%d%d",&b,&a);
        if(a == 0 && b == 0)break;
        int n;
        scanf("%d",&n);
        int y,x;
        int check[20][20] = {{0}};
        for(int i = 0;i < n; i++){
            scanf("%d%d",&y,&x);
            check[y][x] = 1;
        }
        dp[1][0] = 1;
        for(int i = 1;i <= b; i++){
            for(int j = 1;j <= a; j++){
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
                if(check[i][j] != 0)dp[i][j] = 0;
            }
        }
        printf("%d\n",dp[b][a]);
    }
        return 0;
}