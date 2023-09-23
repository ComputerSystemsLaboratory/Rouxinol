#include <iostream>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  long long res = 1;
  for (auto i=1; i<=N; i++) {
    res *= i;
  }
  cout << res << endl;
}