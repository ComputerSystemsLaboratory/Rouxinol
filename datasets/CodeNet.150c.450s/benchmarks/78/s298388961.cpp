#include<iostream>
#include<vector>
#include<algorithm>
#define INF (1<<29)

using namespace std;

int main(void){

  vector<int>v;
  for(int i=1;i*(i+1)*(i+2)/6<1000000;i++)
    v.push_back(i*(i+1)*(i+2)/6);

  int dp1[1000001],dp2[1000001];
  fill(dp1,dp1+1000001,INF);
  fill(dp2,dp2+1000001,INF);
  
  dp1[0]=dp2[0]=0;

  for(int i=0;i<v.size();i++){
    for(int j=0;j<1000000;j++){
      if(j+v[i]<1000000){
	dp1[j+v[i]]=min(dp1[j+v[i]],dp1[j]+1);
	if(v[i]%2==1)dp2[j+v[i]]=min(dp2[j+v[i]],dp2[j]+1);
      }
    }
  }

  int n;
  while(cin >> n,n){
    cout << dp1[n] << " " << dp2[n] << endl;
  }
  
  return 0;
}