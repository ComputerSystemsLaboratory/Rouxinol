#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

typedef long long ll;
ll num[101];
ll memo[101][101];
ll limit;
ll math(ll p,ll sum){
  if(sum<0 || sum>20) return 0;
  else if(p == limit-1 )return sum == num[p];
  else if(memo[p][sum]>0)return memo[p][sum];
  else return memo[p][sum] = math(p+1,sum+num[p])+math(p+1,sum-num[p]);
}

int main(){
  cin>>limit;
  for(int i = 0 ; i < limit ; i++)cin>>num[i];
  cout<<math(1,num[0])<<endl;
}