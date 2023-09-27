
#include<iostream>
#include<cstdio>

using namespace std;

int n,dp[50];

int fib(int n)
{
    if(n==0||n==1){
        return dp[n]=1;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    return dp[n]=fib(n-1)+fib(n-2);
}

int main()
{
    for(int i=0;i<50;i++){
        dp[i]=-1;
    }
    scanf("%d",&n);
    printf("%d\n",fib(n));
    return 0;
}
