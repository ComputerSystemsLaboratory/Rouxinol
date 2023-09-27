#include <algorithm>
#include <cmath>
#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

int is_prime(int x) {
  int end = (int) sqrt(x);
  for (int i = 2; i <= end; ++i) {
    if (x%i == 0) {
      return 0;
    }
  }
  return 1;
}

int main() {
  int N;
  cin >> N;
  vector<int> v;
  for (int i = 0; i < N; ++i) {
    string n;
    cin >> n;
    v.push_back(stoi(n));
  }
  int count = 0;
  for (auto elem : v) {
    if (is_prime(elem)) {
      count++;
    }
  }
  cout << count << endl;
}