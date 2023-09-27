#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  vector<int> hills;
  for (int i = 0; i < 10; i++) {
    int x;
    cin >> x;
    hills.push_back(x);
  }
  sort(hills.begin(), hills.end(), greater<int>());
  for (int i = 0; i < 3; i++) {
    cout << hills[i] << endl;
  }
  return 0;
}