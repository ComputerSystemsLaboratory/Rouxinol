#include <iostream>
using namespace std;
int F[100];
int Fibonacci(int N) {
  F[0] = 1;
  F[1] = 1;

  for (int i = 2; i <= N; ++i) {
    F[i] = F[i-2] + F[i-1];
  }
  return F[N];
}
int main() {


  int N;
  cin >> N;
  cout << Fibonacci(N)<<endl;
}