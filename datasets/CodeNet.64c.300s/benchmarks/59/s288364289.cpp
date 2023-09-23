#include<bits/stdc++.h>
using namespace std;

int Prime(int num);

int main(){
  int n;
  int ans=0;
  cin>>n;
  for(int i=0,a;i<n;i++){
    cin>>a;
    ans+=Prime(a);
  }
  cout<<ans<<endl;
}

int Prime(int num){
  if(num==2)return 1;
  if(num%2==0)return 0;
  for(int i=3;i<=sqrt(num);i+=2){
    if(num%i==0)return 0;
  }
  return 1;
}