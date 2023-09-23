#include <iostream>
using namespace std;

int main(){

 int f, s, t, i, x;

 f = s = t = 0;

 for (i = 0; i < 10; i++) {
  cin >> x;

  if (x > f) {
   t = s;
   s = f;
   f = x;
  } else if (x > s) {
   t = s;
   s = x;
  } else if (x > t) {
   t = x;
  }
 }

 cout << f << "\n" << s << "\n" << t << "\n";

 return 0;
}