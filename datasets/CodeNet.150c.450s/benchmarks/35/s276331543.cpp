#include <iostream>
#include <climits>
using namespace std;

int main() {
  while(1) {
    int n;
    cin >> n;
    if(n == 0) break;

    int max = INT_MIN;
    int maxBfr = INT_MIN;
    int bfr = INT_MIN;
    int before = INT_MIN;

    int temp;
    for(int i = 0; i < n; i++) {
      cin >> temp;

      if(maxBfr > 0) {
	maxBfr += bfr;
      } else {
	maxBfr = bfr;
      }

      int sum;
      sum = maxBfr+temp;

      if(maxBfr != INT_MIN && sum > max && sum > temp) {
	max = sum;
      } else if(temp > max) {
	max = temp;
      }

      bfr = temp;
    }

    cout << max << endl;
  }
  return 0;
}