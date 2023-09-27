#include<iostream>
using namespace std;

int main(){
  while(1){
  int N,M,P;
  int sum=0;
  cin>>N>>M>>P;
  if(N+M+P==0) break;
  int X[1001];
  for(int i=1;i<=N;i++){
    cin>>X[i];
    sum+=X[i];
  }
  sum*=100;
  sum=sum-(sum*P)/100;
  if(X[M]==0) sum=0;
  else sum/=X[M];
  cout<<sum <<endl;
  }
  
  return 0;
  }
  
  