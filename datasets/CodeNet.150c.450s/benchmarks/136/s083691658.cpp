#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
  long long int x,y,g,l,t;
  while(cin >> x >> y){
    if(x<y)
      swap(x,y);
    g=__gcd(x,y);
    l=x*y/g;
    cout << g << " " << l <<endl;
  }
  return 0;
}