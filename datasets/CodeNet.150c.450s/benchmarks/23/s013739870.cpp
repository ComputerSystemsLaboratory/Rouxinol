#include <iostream>
using namespace std;

int main(){
  int a[50],s;
  cin>>s;
  a[0]=1;
  a[1]=1;
  for(int i=2;i<=s;i++){
    a[i]=a[i-1]+a[i-2];
  }
  cout<<a[s]<<endl;
  return 0;
}