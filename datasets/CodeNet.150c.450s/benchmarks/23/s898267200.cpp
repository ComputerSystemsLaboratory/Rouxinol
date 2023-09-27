#include <iostream>
#include <vector>
#include <cstdio>
// #include <cstdint>

using namespace std;

static vector<int> M(44, 0);

static inline int fibonacci(int n) {
  if (n == 0 || n == 1) {
    return 1;
  } 

  if (M[n] != 0) {
    return M[n];
  } 
  M[n] = fibonacci(n - 2) + fibonacci(n - 1);
  return M[n];
}

int main() {
  int n;
  cin >> n;
  
  cout << fibonacci(n) << endl;
 
  return 0;
}

