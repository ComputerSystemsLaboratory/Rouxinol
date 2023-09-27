#include <iostream>
using namespace std;
int main(){
  int a,i=0,b;
  while(1){
    i=0;
    cin>>a;
    if(a==0)break;
    b=1000-a;
      i=b/500;
      b=b%500;
      i+=b/100;
      b=b%100;
      i+=b/50;
      b=b%50;
      i+=b/10;
      b=b%10;
      i+=b/5;
      b=b%5;
      i+=b/1;
    cout<<i<<endl;
  }
  return 0;
}