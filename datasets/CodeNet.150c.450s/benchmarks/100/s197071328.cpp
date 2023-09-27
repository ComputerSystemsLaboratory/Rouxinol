#include<iostream>
using namespace std;

int main(){
  int i,j,k;
  int n1=0;
  long long n2=1;

  cin>>n1;

  for(i=1;i<=n1;i++){
    n2*=i;
  }
  cout<<n2<<endl;

  return 0;
}