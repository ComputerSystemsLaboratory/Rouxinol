#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
#define bye return 0

int main(){
  int N,M,P;
  while(cin>>N>>M>>P){
    if(N==0&&M==0&&P==0)return 0;
    int X[1000],sum=0;
    rep(i,N){
     cin>>X[i];
     sum+=100*X[i];
    }
    sum=sum-sum*P/100;
    rep(i,N+1){
      if(M==i){
        if(X[i-1]!=0){
         cout<<sum/X[i-1]<<endl;
	}else {
          cout<<0<<endl;          
	}
      }
    }
  }
  return 0;
}