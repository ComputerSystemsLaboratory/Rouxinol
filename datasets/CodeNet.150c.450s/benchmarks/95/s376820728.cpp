#include <bits/stdc++.h>
using namespace std;

int main() {
  while (true) {
    int n, count = 0;
    cin >> n;
    if (n == 0) break;
    vector<int> f(n), ser(n);
    for (int i = 0; i < n; i++) {
      string a;
      cin >> a;
      if (a == "lu") f.at(i) = 1;
      else if (a == "ru") f.at(i) = 10;
      else if (a == "ld") f.at(i) = -1;
      else f.at(i) = -10;
    }
    ser.at(0) = f.at(0);
    for (int i = 1; i < n; i++) ser.at(i) = ser.at(i - 1) + f.at(i);
    for (int i = 0; i < n; i++) {
      if ((count % 2 == 0 && ser.at(i) == 11) || (count % 2 == 1 && ser.at(i) == 0)) count++;
    }
    cout << count << endl;
  }
}
