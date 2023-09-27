#include <iostream>
using namespace std;
int main() {

  int a,b,c,d;
  cin>>a>>b>>c;
  if (c<a) {
    d=c;
    c=a;
    a=d;
  }
  if (a>b) {
    d=a;
    a=b;
    b=d;
  }
  if (b>c) {
    d=b;
    b=c;
    c=d;
  }

  cout<<a<<" "<<b<<" "<<c<<"\n";

  return 0;
}