#include <cstdio>

using namespace std;

int n;
int q;

int seg[100000*4];

int query(int k, int l, int r, int a, int b) {
  if (r <= a || b <= l) {
    return 0;
  }
  if (a <= l && r <= b) {
    return seg[k];
  }
  int m = (l + r) / 2;
  return query(2*k+1, l, m, a, b) + query(2*k+2, m, r, a, b);
}

void add(int k, int l, int r, int x, int y) {
  if (!(l <= x && x < r))
    return;
  if (r - l == 1) {
    seg[k] += y;
  }
  else {
    int m = (l + r) / 2;
    add(2*k+1, l, m, x, y);
    add(2*k+2, m, r, x, y);
    seg[k] = seg[2*k+1] + seg[2*k+2];
  }
}

int main(int argc, char *argv[])
{
  scanf(" %d %d", &n, &q);

  int c, x, y;
  for (int i = 0; i < q; i++) {
    scanf(" %d %d %d", &c, &x, &y);
    --x;
    if (c) { // get
      int ret = query(0, 0, n, x, y);
      printf("%d\n", ret);
    } else { // add
      add(0, 0, n, x, y);
    }
  }
  
  return 0;
}