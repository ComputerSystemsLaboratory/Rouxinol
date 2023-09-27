#include <bits/stdc++.h>
using namespace std;

int n;
int a[1000];
int b = 0;

int main() {
  cin >> n;
  for (; b < n;) {
    cin >> a[b];
    ++b;
  }
  int c = n - 1;
  for (; 0 <= c ;) {
    cout << a[c];
    if(0 < c) {
      cout << " ";
    }
    --c;
  }
  cout << endl;
}