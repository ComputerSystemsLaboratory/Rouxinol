#include <iostream>
#include <vector>
#include <set>
using namespace std;

int solve2(int o, int n, int s)
{
  int lb, ub;
  int c, a, b, x, y;
  set <int> Y;
  set <int> :: iterator it;

  lb = (s / (100 + o)) / 10000 * 100;
  ub = (1 + (s+200) / (100 + o)) * 100;

  for (c = lb; c <= ub; c+= 100) {
    for (a = 100; a <= c - 100; a += 100) {
      b = c - a;
      int x0, x1;
      x0 = a * (100 + o) / 10000 * 100;
      x1 = b * (100 + o) / 10000 * 100;
      x = x0 + x1;

      if (x == s) {
	int y0, y1;
	y0 = a * (100 + n) / 10000 * 100;
	y1 = b * (100 + n) / 10000 * 100;
	y = y0 + y1;
	Y.insert(y);
      }
    }
  }

  int maxy;

  for (it = Y.begin(); it != Y.end(); it++) {
    maxy = *it;
    //    cout << (*it) << ",";
  }
  //  cout << endl;
  
  return maxy;

}




int solve(int oldrate, int newrate, int oldtot)
{
  return solve2(oldrate, newrate, oldtot * 100)/100;
}



int main(void) 
{
  int o, n, s;
  int m;

  o = n = s = -1;

  while (o != 0 || n != 0 || s != 0) {
    cin >> o >> n >> s;
    if (o == 0 && n == 0 && s ==  0) {
      break;
    }
    m = solve(o, n, s);
    cout << m << endl;
    
  }
  

}