#include <iostream>
using namespace std;

int main(){
  int a, b, c, d, count=0, i=1;
  cin >> a >> b >> c;
  while(1){
    d = c / i;
    if(d < a) break;
    if(c % i == 0){
      if(a <= d && d <= b) count += 1;
    }
    i += 1;
  }
  cout << count << endl;
  return 0;
}