#include <iostream>
using namespace std;
int main(){
  int n;
  long long int fib1,fib2,fib3;
  cin>>n;
  fib1=1;
  fib2=1;
  if(n==0){
    cout<<0<<endl;
  }else if(n==1){
    cout<<1<<endl;
  }else if(n>=2){
    for(int i=0;i<n-1;i++){
      fib3=fib1+fib2;
      fib1=fib2;
      fib2=fib3;
    }
    cout<<fib3<<endl;
  }
}