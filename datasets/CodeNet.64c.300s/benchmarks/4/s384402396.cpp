#include<iostream>
using namespace	std;
int main(){
  int a,b,c;
  cin>>a>>b>>c;
  if(0>a||c>100)return 0;
  if(a<b&&b<c)cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  return 0;
}