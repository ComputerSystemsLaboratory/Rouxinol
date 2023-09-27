#include <iostream>
using namespace std;

int main(){
  int a,i=0,b;
  while(cin>>a&&a){
    i=0;
    b=1000-a;
    i=b/500;
    b%=500;
    i+=b/100;
    b%=100;
    i+=b/50;
    b%=50;
    i+=b/10;
    b%=10;
    i+=b/5;
    b%=5;
    i+=b/1;
    cout<<i<<endl;
  }
  return 0;
}