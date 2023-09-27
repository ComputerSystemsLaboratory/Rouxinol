#include<iostream>
using namespace std;
int gcd(int ,int);
int main(){
  int x,y,a;
  cin>>x>>y;
  a=gcd(x,y);
  cout<<a<<endl;
  return 0;
}
 
int gcd(int x,int y){
  while(x!=y)
    if(x>y){
      x=x%y;
      if(x==0) return y;
    }
    else{
      y=y%x;
      if(y==0) return x;
  }
  return x;
}