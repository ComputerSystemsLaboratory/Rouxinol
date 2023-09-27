#include<iostream>
using namespace std;
int main(){
  int num;
  int a,b,c;
  bool ke[999]={false};
  int i;
  cin>>num;
  for(i=0;i<num;i++){
    cin>>a>>b>>c;
    if(a*a+b*b==c*c) ke[i]=true;
    else if(a*a+c*c==b*b) ke[i]=true;
    else if(b*b+c*c==a*a) ke[i]=true;
  }
  for(i=0;i<num;i++){
    if(ke[i]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  return 0;
}