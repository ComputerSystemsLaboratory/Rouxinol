#include<vector>
#include<iostream>
using namespace std;

vector<int> n;
void mkn(){
  n.push_back(1);
  for(int i=2;n[i-2]<1005000;i++){
    n.push_back(i*(i+1)*(i+2)/6);
  }
}


vector<int> dp;
vector<int> dp2;
void mktable(){
  dp.resize(1000100);
  dp2.resize(1000100);
  for(int i=0;i<dp.size();i++){
    dp[i]=1000100;
    dp2[i]=1000100;
  }
  dp[0]=dp2[0]=0;
  for(int i=0;i<n.size();i++){
    for(int j=0;j<dp.size();j++){
      if(n[i]%2==1){
        if(j-n[i]>=0){
          dp2[j]=min(dp2[j],dp2[j-n[i]]+1);
        }else{
          dp2[j]=dp2[j];
        }
      }
      if(j-n[i]>=0){
        dp[j]=min(dp[j],dp[j-n[i]]+1);
      }else{
        dp[j]=dp[j];
      }
    }
  }
}

void init(){
  n.clear();
  dp.clear();
  mkn();
  mktable();
}

bool solve(){
  int a;
  cin>>a;
  if(a==0){
    return false;
  }
  cout<<dp[a]<<" "<<dp2[a]<<endl;
  return true;
}
int main(){
  init();
  while(solve());
}