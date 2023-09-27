#include <algorithm>
#include <iostream>
using namespace std;

int main() {

  while(1) {
    int n,a,b,c,x;
    cin >> n >> a >> b >> c >> x;
    if(!(n||a||b||c||x)) break;

    int y[20000] = {0};
    for(int i = 0; i < n; i++) cin >> y[i];

    int i = 0, f = 0;
    while(1) {
       if(x == y[i]) {
         i++;
         if(i == n) break;
       }
       x = (a*x+b)%c;
       f++;
       if(f > 10000) {
         f = -1;
         break;
       }
     }
     cout << f <<endl;
  }

	return 0;
}