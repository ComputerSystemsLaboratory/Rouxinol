#include <iostream>

using namespace std;
long A[31];
int main(){
  A[0] = 1;
  A[1] = 1;
  A[2] = 2;
  int n;
  while(cin>>n&&n>0){
    for(int i=3;i<=n;++i){
      A[i] = A[i-1]+A[i-2]+A[i-3];
    }
    cout<<A[n]/3650+1<<endl;
  }
  return 0;
}