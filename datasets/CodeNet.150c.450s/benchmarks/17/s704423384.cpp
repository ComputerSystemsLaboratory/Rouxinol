#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
  int x[5];
  for (int i=0; i<5; i++)
    cin >> x[i];
  sort(x,x+5,greater<int>());
  for (int i=0; i<5; i++) {
    if (i) cout << " ";
    cout << x[i];
  }
  cout << endl;
}