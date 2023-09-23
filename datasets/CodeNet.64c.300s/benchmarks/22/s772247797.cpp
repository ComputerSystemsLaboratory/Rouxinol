#include<iostream>
using namespace std;
int main(){
  int n,a[3],b;
  cin>>n;
  for(int j=0;j<n;j++){
    b=0;
  cin>>a[0]>>a[1]>>a[2];
  if(a[0]*a[0]==a[1]*a[1]+a[2]*a[2])b=1;
  else if(a[1]*a[1]==a[0]*a[0]+a[2]*a[2])b=1;
  else if(a[2]*a[2]==a[0]*a[0]+a[1]*a[1])b=1;
  if(b==1)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  }
}