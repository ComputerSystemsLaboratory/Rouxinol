#include<iostream>

using namespace std;

int main(){

  int n;

  int n0,n1,st;
  //initialize
  n0=0;
  n1=1;
  
  //load number
  cin >>n;
  //fibonacci
  for(int i=1;i<=n;i++){
    st=n0+n1;
    n0=n1;
    n1=st;
  }
  //print
  cout <<st<<endl;
  return 0;
}