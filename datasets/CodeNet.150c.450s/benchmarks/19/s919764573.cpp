#include <iostream>

using namespace std;

int main() {
  int a,b;
  scanf("%d %d",&a,&b);
  while( a!=0 || b!=0) {
    if(a>b) cout << b << " " << a << endl;
    else cout << a << " " << b << endl;
    scanf("%d %d",&a,&b);
  }
}