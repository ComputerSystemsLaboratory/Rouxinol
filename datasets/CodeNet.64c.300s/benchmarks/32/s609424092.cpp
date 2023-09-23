#include <iostream>
#include <climits>

using namespace std;

int main() {
  int n, min = INT_MAX, max = INT_MIN;
  long long sum = 0;
  cin >> n;
  while (n) {
    n--;
    int x;
    cin >> x;
    min = (min > x) ? x : min;
    max = (max < x) ? x : max;
    sum += x;
  }
  cout << min << " " << max << " " << sum << endl;
  return 0;
}