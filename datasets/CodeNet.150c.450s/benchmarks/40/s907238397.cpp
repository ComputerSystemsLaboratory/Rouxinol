#include <iostream>
#include <cmath>
#include <iterator>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int f1, f2, f3, f4, f5, f6;
  cin >> f1 >> f2 >> f3 >> f4 >> f5 >> f6;
  cin.get();

  char move;
  while (cin.get(move), move != '\n') {
    if (move == 'N') {
      auto tmp = f5;
      f5 = f1;
      f1 = f2;
      f2 = f6;
      f6 = tmp;
    } else if (move == 'S') {
      auto tmp = f6;
      f6 = f2;
      f2 = f1;
      f1 = f5;
      f5 = tmp;
    } else if (move == 'E') {
      auto tmp = f3;
      f3 = f1;
      f1 = f4;
      f4 = f6;
      f6 = tmp;
    } else { // move == 'W'
      auto tmp = f4;
      f4 = f1;
      f1 = f3;
      f3 = f6;
      f6 = tmp;
    }
  }
  cout << f1 << endl;  // output top face
}
