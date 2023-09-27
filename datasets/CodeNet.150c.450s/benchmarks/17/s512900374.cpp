#include <iostream>
#include <vector>
#include <algorithm>
#define N 5
using namespace std;
int main() {
  vector<int> v1(N);
  for(int i = 0; i < N; ++i) {
	cin >> v1[i];
  }
  sort(v1.begin(), v1.end());
  reverse(v1.begin(), v1.end());
  for(int i = 0; i < N; ++i) {
	cout << v1[i];
	cout << ((i < N - 1) ? " " : "\n");
  }
  return 0;
}