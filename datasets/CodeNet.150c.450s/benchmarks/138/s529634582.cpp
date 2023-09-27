#include <iostream>
using namespace std;
int gcd(int x,int y){
  int temp;
  while(x%y!=0){
    temp=x;
    x=y;
    y=temp%y;
  }
  return y;
}

int main(){
  int x,y,ans;
  cin>>x>>y;
   ans=gcd(x,y);
  cout<<ans<<endl;
  return 0;
}