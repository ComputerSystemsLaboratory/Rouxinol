#include <iostream>

using namespace std;

int main() {
  long n, a;
  cin >> n >> a;

  long mini = a;
  long dif = -(1 << 30);
  for (int i = 1; i < n; i++) {
    cin >> a;
    
    dif = max(dif, a - mini);
    mini = min(mini, a);
  }

  cout << dif << endl;
  return 0;
}