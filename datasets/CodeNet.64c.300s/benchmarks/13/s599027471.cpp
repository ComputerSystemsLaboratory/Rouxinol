 #include<stdio.h>

int dp[50];
/*フィボナッチ関数*/
int fib(int n){
  if(n==0||n==1)
    return dp[n]=1;
  if(dp[n]!=-1)return dp[n];
  return dp[n]=fib(n-1)+fib(n-2);
}

int main(){
  int n,i;

  for(i=0;i<50;i++)
    dp[i]=-1;

  scanf("%d",&n);
  printf("%d\n",fib(n));

  return 0;
}

