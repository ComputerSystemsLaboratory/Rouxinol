#include <iostream>
#include <algorithm>
#include <cmath>
#define zeinuki(x, y) ceil((x) * 100.0 / (100.0 + (y)))
#define zeikomi(x, y) floor((x) * (100.0 + (y)) / 100.0)
using namespace std;

int main()
{
  while(1){
    double x, y, s;
    cin >> x >> y >> s;
    if(x == 0 && y == 0 && s == 0){
      break;
    }else{
      double ans = 0;
      for(double i = 1; i < s / 2.0 + 1; i++){
        double a = zeinuki(i, x);
        double b = zeinuki(s - i, x);
        if(zeikomi(a, x) + zeikomi(b, x) == s)
          ans = max(ans, zeikomi(a, y) + zeikomi(b, y));
      }
      cout << ans << endl;
    }
  }
}