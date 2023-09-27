#include <iostream>
#include <string>
using namespace std;

int n, a, b;
string sa, sb;

int main() {
  cin>>n;
  for(int i=0;i<n;++i) {
    cin>>sa>>sb;
    if(sa>sb)a+=3;
    else if(sb>sa)b+=3;
    else {
      a+=1;
      b+=1;
    }
  }
  cout<<a<<" "<<b<<endl;
  return 0;
}