#include<iostream>
using namespace std;

int main()
{
  int N,M,sum,n=0;
  int w[1500],h[1500],W[1000000]={},H[1000000]={};

  while(1){
    cin>>N>>M;
    if(N==0&&M==0)break;
    for(int i=0;i<N;i++)cin>>h[i];
    for(int i=0;i<M;i++)cin>>w[i];
    sum=0;
    for(int i=0;i<N;i++){
      for(int j=i;j<N;j++){
        n+=h[j];
	H[n]++;
      }
      n=0;
    }
    for(int i=0;i<M;i++){
      for(int j=i;j<M;j++){
        n+=w[j];
	W[n]++;
      }
      n=0;
    }
    for(int i=0;i<1000000;i++){
      sum+=H[i]*W[i];
      H[i]=0;W[i]=0;
    }
    cout<<sum<<endl;
  }
  return 0;
}