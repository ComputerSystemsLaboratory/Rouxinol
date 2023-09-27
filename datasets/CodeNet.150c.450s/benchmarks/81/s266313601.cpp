#include<functional>
#include<algorithm>
#include<iostream>
#include<iomanip>
#include<string>
#include<math.h>
#include<vector>
#include<cmath>
#include<stack>
#include<queue>
#define rep(i,n) for(int i=0;i<n;i++)
#define loop(i,x,n) for(int i=x;i<n;i++)
using namespace std;
const int INF=100000000;
int main(){
  int n;
  while(cin>>n,n!=0){
    int dp[100][100];
    rep(i,10){
      rep(j,10){
	dp[i][j]=i==j?0:INF;
      }
    }
    int k[100]={};
    vector<int> vec;
    rep(i,n){
      int a,b,c;
      cin>>a>>b>>c;
      dp[a][b]=c;
      dp[b][a]=c;
      k[a]++;
      k[b]++;
    }
    int city=0;
    rep(i,11){
      if(k[i]>0){
	city++;
	vec.push_back(i);
      }
    }
    rep(k,10){
      rep(i,10){
	rep(j,10){
	  dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
	}
      }
    }
    int minsum=INF,num;
    rep(i,vec.size()){
      int sum=0;
      rep(j,vec.size()){
	sum+=dp[vec[i]][vec[j]];
      }
      if(minsum>sum){
	minsum=sum;
	num=vec[i];
      }    
    }
    cout<<num<<" "<<minsum<<endl;
  }
  return 0;
}
     