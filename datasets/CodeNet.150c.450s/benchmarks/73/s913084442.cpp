#include <iostream>

using namespace std;

int n, q;
int seg[100000*4];

int query(int k, int a, int b, int l, int r) {
  if (r <= a || b <= l) return 0;
  if (l <= a && b <= r) return seg[k];
  int ret = query(2*k+1, a, (a+b)/2, l, r);
  ret += query(2*k+2, (a+b)/2, b, l, r);
  return ret;
}

void add(int k, int a, int b, int p, int x) {
  if (p < a || b <= p) return;
  if (b-a == 1) seg[k] += x;
  else {
    add(2*k+1, a, (a+b)/2, p, x);
    add(2*k+2, (a+b)/2, b, p, x);
    seg[k] = seg[2*k+1] + seg[2*k+2];
  }
}

int main(int argc, char *argv[])
{
  cin >> n >> q;
  
  for (int i = 0; i < q; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    if (a == 0) {
      add(0, 0, n, b-1, c);
    } else {
      cout << query(0, 0, n, b-1, c) << endl;
    }
  }

  return 0;
}