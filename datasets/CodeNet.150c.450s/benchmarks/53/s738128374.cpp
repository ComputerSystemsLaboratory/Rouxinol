#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n;
  vector<int> f;
  cin >> n;
  int a = n;
  for (int i = 2; i * i <= n; i++)
    while (a % i == 0) {
      f.push_back(i);
      a /= i;
    }
  if (a != 1) f.push_back(a);
  cout << n << ':';
  for (int& e: f)
    cout << ' ' << e;
  cout << endl;
}