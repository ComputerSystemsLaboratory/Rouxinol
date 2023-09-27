#include <iostream>
#include <vector>
#define eol '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  int n;
  cin >> n;

  vector<int> list(n+1,0);
  list[0] = list[1] = 1;
  

  for (int i = 2; i <= n; i++) {
    list[i] = list[i-1] + list[i-2];
  }

  cout << list[n] << eol;
  
  return 0;
}