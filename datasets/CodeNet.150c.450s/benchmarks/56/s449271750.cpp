#include<cstdio>
#include<iostream>
using namespace std;

#define ll long long

int main() {
  int n;
  ll a, min, max, sum;
  min = 100000000;
  max = -min;
  sum = 0;
  cin >> n;
  for (int i = 0; i < n; i ++) {
    cin >> a;
    if (a < min) min = a;
    if (a > max) max = a;
    sum += a;
  }
  cout << min << " " << max << " " << sum << endl;

  return 0;
}
  