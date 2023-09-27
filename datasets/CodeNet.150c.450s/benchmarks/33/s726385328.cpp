#include <iostream>
using namespace std;

int tax(int X, int i) {
  return i * (100 + X) / 100;
}

int main() {
  int X;
  int Y;
  int S;

  while (true)
    {
      cin >> X >> Y >> S;
      if (X == 0 && Y == 0 && S == 0) break;
      int maximum = 0;
      for (int i = 1; i < S; ++i) 
	for (int j = 1; j < S; ++j)
	  if (tax(X, i) + tax(X, j) == S) 
	    maximum = max(maximum, tax(Y, i)+tax(Y,j));

  cout << maximum << endl;
    }
}