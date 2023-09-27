#include<iostream>
using namespace std;
int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n,a=0,b=0,da,db;
  while(1){
  cin>>n;
  if(n==0) break;
  for(int i=0;i<n;i++){
    cin>>da>>db;
    if(da>db) a+=da+db;
    if(da<db) b+=db+da;
    if(da==db){
      a+=da;
      b+=db;
    }
  }
  cout<<a<<" "<<b<<endl;
  a=0;
  b=0;
  }
  return 0;
}