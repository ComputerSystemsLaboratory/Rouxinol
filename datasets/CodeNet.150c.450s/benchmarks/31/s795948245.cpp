#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>

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
  int n;
  cin >> n;
  
  int x;
  int minv;
  cin >> x;
  int maxv;  
  minv = x; 
  for (int i = 1; i < n; i++) {
    cin >> x;
    if (i == 1) {
      maxv = x - minv;
    }
    maxv = max(maxv, x - minv); 
    minv = min(minv, x); 
   }
  cout << maxv << endl; 
  return 0;
}