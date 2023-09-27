#include <iostream>
using namespace std;

int main(){
  int a,sum=100000,b;
  cin >>a;

  for(int i=0;i<a;i++){
    b=sum/20;
    if(b%1000==0)sum+=b;
    else sum+=(b/1000+1)*1000;
  }
  cout <<sum<<endl;
  return 0;
}