#include <iostream>

using namespace std;

int main()
{
  while (true) {
  int x, y, s;
  cin >> x >> y >> s;

  if (x == 0 && y == 0) break;
  
  //double t = x * 0.01;
  //double t2 = y * 0.01;
  int max = 0;
 
  for (int i = 1; i < s; i++) {
    for (int j = 1; j < s; j++) {
      int a = i*(x*0.01);
      int b = j*(x*0.01);
      //if (a == 13 && b == 88)
      //cout << "a::" << a << endl << "b::" << b << endl;
      int temp = a + i + b + j; 
      if (temp == s) {
	//cout << i << " " << j << endl;
	int c = (i*(y*0.01));
	int d = (j*(y*0.01));
	int tmp = c+i+d+j;
	if (tmp > max)
	  max = tmp;
      }
    }
  }

  cout << max << endl;
  }
  return 0;
}