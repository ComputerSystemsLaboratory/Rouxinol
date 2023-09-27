#include <iostream>
using namespace std;

int main() {
  while (true) {
    int n, k;
    cin >> n >> k;
    if (n == 0 && k == 0) return 0;
    
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    
    int sum, max;
    int head = k - 1, tail = 0;
    sum = 0;
    for (int i = tail; i <= head; i++) {
      sum += a[i];
    }
    max = sum;
    
    while (head < n - 1) {
      sum -= a[tail++];
      sum += a[++head];
      if (sum > max) max = sum;
    }
    cout << max << endl;
  }
}