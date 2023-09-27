#include<iostream>
#include<string>
#include<vector>
#include<utility>
#include<queue>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<complex>
#define INF 1e9
#define llINF 9223372036854775807
#define pb push_back
#define mp make_pair 
#define F first
#define S second
#define ll long long

using namespace std;
int main(){
  int dp[1000010]={};
  int dpki[1000010]={};
  int n;
  for(int i=0;i<1000010;i++){
    dp[i]=dpki[i]=i;
  }
  for(int i=2;((i*(i+1)*(i+2))/6)<1000001;i++){
    int num=(i*(i+1)*(i+2))/6;
    for(int j=0;j+num<=1000000;j++){
      if((num%2)){
	dpki[j+num]=min(dpki[j]+1,dpki[j+num]);
      }
      dp[j+num]=min(dp[j]+1,dp[j+num]);
    }
  }
  while(cin>>n,n){
    cout<<dp[n]<<" "<<dpki[n]<<endl;
  }
  return 0;
}

