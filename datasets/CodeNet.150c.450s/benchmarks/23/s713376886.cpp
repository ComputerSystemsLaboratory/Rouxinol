#include<iostream>

using namespace std;

int main(){

  int n;

  int n1,n2,st;
  n1=1;
  n2=1;
  st=1;

  cin >>n;

  for(int i=1;i<n;i++){
    st=n1+n2;
    n1=n2;
    n2=st;
  }
  cout <<st<<endl;

}