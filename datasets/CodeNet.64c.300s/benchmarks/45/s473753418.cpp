#include<iostream>
using namespace std;
int N,M,P;
int X[100],sum;
int main(){
  while(cin>>N>>M>>P&&N){
    sum=0;
    for(int i=0;i<N;i++)cin>>X[i],sum+=X[i];
    sum*=(100-P);
    if(X[M-1])cout<<sum/X[M-1]<<endl;
    else cout<<0<<endl;
  }
  return 0;
}