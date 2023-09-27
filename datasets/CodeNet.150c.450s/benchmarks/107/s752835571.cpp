#include<bits/stdc++.h>
using namespace std;

int main(){

  int INF=100000000;
  int i,j,k;
  string a,b;
  cin>>a>>b;

  vector<vector<int>> dp(a.size()+1,vector<int>(b.size()+1,INF));
  for(i=0;i<=b.size();i++)
  dp.at(0).at(i)=i;
  for(i=0;i<=a.size();i++)
  dp.at(i).at(0)=i;
  dp.at(0).at(0)=0;
  for(i=0;i<a.size();i++){
    for(j=0;j<b.size();j++){
      if(a.at(i)==b.at(j)){
        dp.at(i+1).at(j+1)=dp.at(i).at(j);
      }else{
        int kari=min(dp.at(i).at(j+1)+1,dp.at(i+1).at(j)+1);
        dp.at(i+1).at(j+1)=min(dp.at(i).at(j)+1,kari);
      }
    }
  }
  /*for(i=0;i<=a.size();i++){
    for(j=0;j<b.size();j++){
      cout<<dp.at(i).at(j)<<" ";
    }
    cout<<dp.at(i).at(b.size())<<endl;
  }*/

  cout<<dp.at(a.size()).at(b.size())<<endl;

}

