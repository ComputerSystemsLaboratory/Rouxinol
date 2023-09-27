//
//AOJ vol11-1160
//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1160&lang=jp
//20170616
//640009E
//Yang Bo
//

#include <iostream>

using namespace std;

int a[50][50];
int h, w;

int recursion(int y, int x)
{
  int number = 1;
  a[y][x] = 0;

  if (x < w - 1)
    if (a[y][x + 1] == 1)
      number = recursion(y, x + 1);
  if (y < h - 1)
    if (a[y + 1][x] == 1)
      number = recursion(y + 1, x);
  if (x > 0)
    if (a[y][x - 1] == 1)
      number = recursion(y, x - 1);
  if (y > 0)
    if (a[y - 1][x] == 1)
      number = recursion(y - 1, x);
  if (y < h - 1 && x < w - 1)
    if (a[y + 1][x + 1] == 1)
      number = recursion(y + 1, x + 1);
  if (y < h - 1 && x > 0)
    if (a[y + 1][x - 1] == 1)
      number = recursion(y + 1, x - 1);
  if (y > 0 && x < w - 1)
    if (a[y - 1][x + 1] == 1)
      number = recursion(y - 1, x + 1);
  if (y > 0 && x > 0)
    if (a[y - 1][x - 1] == 1)
      number = recursion(y - 1, x - 1);
  

  //cout << "recursion(" << y << ", "<< x << ") = " << number << endl;
  return number;
}

int main()
{
  while (cin >> w >> h) {
    if (w == 0)
      break;
    else {
      for (int i = 0; i < h; i++) {
	for (int j = 0; j < w; j++) {
	  cin >> a[i][j]; //??\???
	}
      }
      int ans = 0;
      for (int i = 0; i < h; i++) {
	for (int j = 0; j < w; j++) {
	  if (a[i][j] == 1) {
	    //cout << "i = " << i << " ,j = " << j << endl;
            ans += recursion(i, j);
	  }
	}
      }
      cout << ans << endl;
    }
  }
}

/*
??¢?????´??????????????????????????????????????????????´°?????????????°???\?????????????£???????????????£???????????£??????
*/