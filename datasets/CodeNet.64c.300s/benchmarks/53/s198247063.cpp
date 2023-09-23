#include <iostream>
using namespace std;
int main() {

  int a,b,c,d=0;
  cin>>a>>b>>c;

  for (int i=1; i<=c; i++) {
    if ((a<=i && i<=b) && (c%i==0)) {
      d++;
    }
  }
    cout<<d<<"\n";

  return 0;
}