#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  long long int min = 10000000;
  long long int max = -10000000;
  long long int x, sum = 0;
  for(int i = 0; i < n; i++) {
    cin >> x;
    if (min > x) {
      min = x;
    }
    if (max < x) {
      max = x;
    }
    sum = sum + x;
  }
  cout << min << " ";
  cout << max << " ";
  cout << sum << endl;
}
