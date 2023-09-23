#include <iostream>
using namespace std;

int main(){

 int n;
 long a, min = 1000000, max = -1000000, sum = 0;

 cin >> n;

 for (n; n > 0; n--) {
  cin >> a;
  if ( a > max) max = a;
  if ( a < min) min = a;
  sum += a;
 }

 cout << min << " " << max << " " << sum << "\n";

 return 0;
}