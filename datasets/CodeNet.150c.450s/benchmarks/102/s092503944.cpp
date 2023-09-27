//
//AOJ volume11 1130
//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1130&lang=jp
//20170605
//640009E
//Yang Bo
//

#include <iostream>
#include <vector>

using namespace std;

int w, h;
int starty, startx;
vector< vector<char> > a(20, vector<char>(20, 'a')); //??£??\??????

int recursion(char iny, char inx)
{
  a[iny][inx] = '#';
  int number = 0;
  if (inx < w - 1)
    if (a[iny][inx + 1] == '.')
      number += recursion(iny, inx + 1);
  if (iny < h - 1)
    if (a[iny + 1][inx] == '.')
      number += recursion(iny + 1, inx);
  if (inx > 0)
    if (a[iny][inx - 1] == '.')
      number += recursion(iny, inx - 1);
  if (iny > 0)
    if (a[iny - 1][inx] == '.')
      number += recursion(iny - 1, inx);
  number += 1;
  return number;
  //cout << " recursion(" << iny << ", "<< inx << ") = " << number << endl; 
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
	  if (a[i][j] == '@') {
	    starty = i;
	    startx = j;
	    //cout << "i = " << i << ", j = " << j << endl;
	  }
	}
      }
      int ans = recursion(starty, startx);
      cout << ans << endl;
    }
  }
}