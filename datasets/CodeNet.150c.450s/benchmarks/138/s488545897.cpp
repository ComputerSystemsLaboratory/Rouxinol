#include <iostream>
using namespace std;

int main(){

  int a,b,s;
  cin>>a>>b;

  while(1){
    if(a%b==0){
      cout<<b<<endl;
      return 0;
      }
    s=a%b;
    a=b;
    b=s;
  }
}