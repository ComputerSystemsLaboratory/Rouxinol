#include<iostream>

using namespace std;

long fivo(long req){
  long dp[100001];
  dp[0]=0;
  dp[1]=1;

  int i;
     for( i=2; i<req;i++){
       dp[i]=dp[i-1]+dp[i-2];
       //       cout <<dp[i]<<" "<<"="<<dp[i-1]<<"+"<<dp[i-2]<<endl;
     }
    dp[req]=dp[req-1]+dp[req-2];

     return dp[req];

}




int main(){
  long n;
  int req;

  cin >>req;
  n=fivo(req+1);
  //  for(n=1;n<=20;n++){
  //cout<<fivo(n)<<endl;
  // }
  cout <<n<<endl;
  return 0;
}