#include <bits/stdc++.h>
using namespace std;

int main() {
  
  vector<int> abc(3);
  for (int i = 0; i < 3; i++) {
    cin >> abc.at(i);
  }
  sort(abc.begin(), abc.end());
  for (int i = 0; i < 3; i++) {
    cout << abc.at(i);
    if (i != 2) {
      cout << ' ';
    } else {
      cout << endl;
    }
  }
 
}
