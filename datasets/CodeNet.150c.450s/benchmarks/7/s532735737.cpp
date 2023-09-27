#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  vector <int> V;
  for (auto i=0; i<10; i++) {
    int h;
    cin >> h;
    V.push_back(h);
  }
  sort(V.begin(), V.end());
  reverse(V.begin(), V.end());
  cout << V[0] << endl;
  cout << V[1] << endl;
  cout << V[2] << endl;
}