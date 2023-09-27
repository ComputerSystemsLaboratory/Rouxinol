#include<iostream>
using namespace std;

int main(){

  int a,b;
  int x,y;

  cin>>a >>b;
  if(1<=a && b<=100){
    x=a*b; y=a*2+b*2;
  }
  cout<<x <<" " <<y <<endl;

  return 0;
}