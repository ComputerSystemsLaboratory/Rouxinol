#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  long long ans = n;
  while (--n)
    ans *= n;
  cout << ans << endl;
}