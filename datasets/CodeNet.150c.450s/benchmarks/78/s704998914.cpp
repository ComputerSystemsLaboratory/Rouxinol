#include<iostream>
using namespace std;

int main(){
  const int N = 1000000;
  int dp1[N+1], dp2[N+1], n;
  
  for(int i=0;i<=N;i++)dp1[i] = dp2[i] = N;
  dp1[0] = dp2[0] = 0;
  
  int val = 1;
  for(int i=1;val<=N;i++){
    for(int j=0;j+val<=N;j++){
      int nxt = j+val;
      dp1[nxt] = min(dp1[nxt],dp1[j] + 1);
      if(val&1)dp2[nxt] = min(dp2[nxt],dp2[j] + 1);
    }
    val = i*(i+1)*(i+2)/6;
  }

  while(cin>>n,n)cout << dp1[n] << " " << dp2[n] << endl;
}