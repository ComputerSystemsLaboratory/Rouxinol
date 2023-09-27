#include <iostream>

using namespace std;

int A[128];
int fib(int n){
  A[0] =1;
  A[1] =2;
  for(int i=2;i<44;++i){
    A[i] =A[i-1];
    if(i>1)A[i]+=A[i-2];
  }
  return A[n-1];

}
int main(){
  int n;
  cin >> n ;
  cout <<fib(n)<<endl;
}