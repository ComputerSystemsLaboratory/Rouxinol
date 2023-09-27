#include <iostream>
using namespace std;

int BIT[1000010];
int bit_size;

void bit_init (int n) {
  fill(BIT+1, BIT+n+1, 0);
  bit_size = n;
}

int bit_sum(int n) {
  int ans = 0;
  while (n > 0) {
    ans += BIT[n];
    n &= n-1;
  }
  return ans;
}

void bit_add(int n, int v) {
  while (n <= bit_size) {
    BIT[n] += v;
    n += n & (-1 * n);
  }
}

int com[100010], x[100010], y[100010];

int main() {
  int n, q;
  cin >> n >> q;
  for (int i=0; i<q; i++) {
    cin >> com[i] >> x[i] >> y[i];
  }
  bit_init(n);
  for (int i=0; i<q; i++) {
    if (com[i] == 0) {
      bit_add(x[i], y[i]);
    } else {
      cout << bit_sum(y[i]) - bit_sum(x[i]-1) << endl; 
    }
  }
}