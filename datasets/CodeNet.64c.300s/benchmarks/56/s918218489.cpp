#include<iostream>
using namespace std;

int main( ){
  int n,Y,M,D,sum,i;
  cin>>n;
  for(i=0;i<n;i++){
    sum=0;
    cin>>Y>>M>>D;
    sum+=(Y-1)*195+(Y-1)/3*5;
    sum+=(M-1)*20-(M-1)/2+D;
    if(Y%3==0)sum+=(M-1)/2;
    sum=196470-sum;
    cout<<sum+1<<endl;
    
  }
  return 0;
}