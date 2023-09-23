#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)


int main(){
  int n,Y[110],M[110],D[110],sum=0;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>Y[i]>>M[i]>>D[i];
    sum=0;
    if(Y[i]%3==0){
      for(int j=1;j<Y[i];j++){
	if(j%3==0)sum+=200;
        else sum+=195;
      }
      sum+=(M[i]-1)*20+D[i];
    }
    else {
      for(int j=1;j<Y[i];j++){
	if(j%3==0)sum+=200;
        else sum+=195;
      }
      for(int j=1;j<M[i];j++){
	if(j%2==1)sum+=20;
        else sum+=19;
      }
      sum+=D[i];
    }
    cout<<196471-sum<<endl;
  }
          
  return 0;
}