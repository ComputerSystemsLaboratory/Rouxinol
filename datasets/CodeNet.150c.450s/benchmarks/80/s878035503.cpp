#include<iostream>
#include<vector>
using namespace std;

int main(){
  int A;
  int B;
  int S=0;
  int T=0;

  for(int i=0;i<4;++i){
    cin >> A;
    S+=A;
  }

  for(int i=0;i<4;++i){
    cin >> B;
    T+=B;
  }

  if(T>S) cout<<T<<endl;
  else cout<<S<<endl;
}