#include<bits/stdc++.h>
#define INF 1000000000
using namespace std;
int n;
int num[100]={0};
long long memo[100][21];
long long solve(int now,int sum){
  if(sum<0 || sum>20){
    return 0;
  }
  if(memo[now][sum]!=INF){
    return memo[now][sum];
  }
  if(now==n-1){
    return sum==num[n-1];
  }
  return memo[now][sum]=solve(now+1,sum+num[now])+solve(now+1,sum-num[now]);
}

int main(){
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>num[i];
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<21;j++){
      memo[i][j]=INF;
    }
  }
  cout<<solve(1,num[0])<<endl;
}
  