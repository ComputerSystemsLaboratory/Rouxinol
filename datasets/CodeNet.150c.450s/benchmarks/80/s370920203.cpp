#include <iostream>

using namespace std;

int main(){
  int S,T,i;
  S=T=0;
  for(int j=0;j<4;++j){
    cin>>i;S+=i;
  }
  for(int j=0;j<4;++j){
    cin>>i;T+=i;
  }
  cout<<((S>T)?S:T)<<endl;
  return 0;
}