#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
static const int MAX = 100000;

int solve(int data[], int n) {
  vector<int> l;
  l.push_back(data[0]);

  for (int i = 1; i < n; i++){
    if (l.back() < data[i]) {
      l.push_back(data[i]);
    } else {
      *lower_bound(l.begin(), l.end(), data[i]) = data[i];
    }
  }

  return l.size();
}

int main() {
  int data[MAX];
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> data[i];

  cout << solve(data, n) << endl;
}