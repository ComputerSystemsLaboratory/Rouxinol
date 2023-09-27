#include <iostream>

using namespace std;

int main(){
  int n;
  long long a=1;
  cin>>n;
  for(int i=1;i<=n;i++) a*=i;
  cout<<a<<endl;
  return 0;
}