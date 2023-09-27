#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main(){
  int n;
  cin >> n;
  cout << n << ":";
  int m = sqrt(n);
  while (n % 2 == 0) {
    n /= 2;
    cout << " " << 2;
  }

  int i = 3;
  while (i <= m) {
    if (n % i == 0) {
      cout << " " << i;
      n /= i;
    } else {
      i += 2;
    }
  }
  if (n != 1) {
    cout << " " << n;
  }
  cout << endl;
}
