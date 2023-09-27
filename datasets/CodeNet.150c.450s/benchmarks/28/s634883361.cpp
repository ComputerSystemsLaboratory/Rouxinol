#include <cstdio>

#define MAX_N 100000

int n, k;
int w[MAX_N];

int f(int p) {
  int num_of_track, sum_of_weight, i;
  num_of_track = 1;
  sum_of_weight = 0;
  for (i = 0; i < n; ++i) {
    if (sum_of_weight + w[i] <= p) {
      sum_of_weight += w[i];
    } else if (w[i] > p) {
      return 0;
    } else if (num_of_track == k) {
      return 0;
    } else {
      ++num_of_track;
      sum_of_weight = w[i];
    }
  }
  return 1;
}

int main() {
  int i, p_left, p_right, p, v;

  scanf("%d" "%d\n", &n, &k);
  for (i = 0; i < n; ++i) {
    scanf("%d\n", &w[i]);
  }

  p_left = 1;
  p_right = 10000 * MAX_N;
  while (p_left != p_right) {
    p = (p_left + p_right) / 2;
    v = f(p);
    if (v)
      p_right = p;
    else
      p_left = p + 1;
  }

  printf("%d\n", p_left);
}