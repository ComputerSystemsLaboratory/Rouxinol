#include <iostream>
using namespace std;

int main (int argc, char **argv) {
  int *a;
  int n;

  // data in
  cin >> n;
  a = new int[n];
  for (int i=0; i<n; i++) {
    cin >> a[i];
  }

  // find min/max/sum
  int min = 1000001;
  int max = -1000001;
  long sum = 0;
  for (int i=0; i<n; i++) {
    if (a[i] < min) min = a[i];
    if (a[i] > max) max = a[i];
    sum += a[i];
  }
  
  cout << min << " " << max << " " << sum << endl;
  delete [] a;
}