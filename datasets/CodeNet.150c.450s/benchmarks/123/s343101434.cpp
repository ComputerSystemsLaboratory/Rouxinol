#include<iostream>
#include<cmath>
using namespace std;

int prime(int x){
  if(x==2) return 1;
  else if(x< 2 || x%2==0) return 0;
  for(int i=3;i<=sqrt(x);i++) if(x%i==0) return 0;
  return 1;
}

int main(){
  int n,m,cnt=0;

  cin>>n;
  for(int i=0;i<n;i++){
    cin>>m;
    if(prime(m)==1) cnt++;
  }
  cout<<cnt<<endl;
  return 0;
}