#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
const int NMAX = 10000;

void print(int* A, int N)
{
   cout << A[0]; 
   for (int k = 1; k < N;k++) {
     cout << " " << A[k] ; 
   }
   cout << endl;
}

int GCD(int x, int y)
{
  if (y == 0) {
    return x;
  } else {
    return GCD(y, x%y);
  }
}


int main()
{
  int x,y;
  cin >> x >> y;
  if (x < y) {
    int tmp;
     tmp = y;
    y = x;
    x = tmp;
  }
  cout << GCD(x,y) << endl;
  return 0;
}