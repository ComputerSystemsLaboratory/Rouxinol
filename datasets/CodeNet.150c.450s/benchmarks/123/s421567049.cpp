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

bool isPrime(int n)
{
  int k = 2;
  while (k * k < n + 1) {
    if (n % k == 0) {
      return false;
    }
    k += 1; 
  }
  return true;
}


int main()
{
  int n;
  cin >> n;
  int counter = 0; 
  for (int i = 0; i < n;i++) {
    int x; 
    cin >> x; 
    if(isPrime(x)) {
      counter += 1;
    }
  } 
  cout << counter << endl; 
  return 0;
}