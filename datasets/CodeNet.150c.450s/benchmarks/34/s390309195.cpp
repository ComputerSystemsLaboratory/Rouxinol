#include<iostream>
using namespace std;
int n;
int memo[31], ans[31];
int main(){
  while(cin>>n){
    if(!n)
      return 0;
    memo[0]=1;
    memo[1]=1;
    memo[2]=2;
    for(int i=3;i<=n;i++){
      if(!memo[i]){
	memo[i]=memo[i-1]+memo[i-2]+memo[i-3];
      }
    }
      if(memo[n]%3650)
      ans[n]+=1;
      ans[n]+=memo[n]/3650;
      cout<<ans[n]<<endl;
  }
  return 0;
}