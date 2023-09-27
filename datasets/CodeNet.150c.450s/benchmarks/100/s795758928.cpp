#include <iostream>
using namespace std;

int main(){
  long long a[21],b;
  a[1]=1;
  for(int i=2;i<=20;i++)a[i]=a[i-1]*i;
  cin>>b;
  cout<<a[b]<< endl;
  return 0;
}