#include <stdio.h>

int pow_10(int n) {
  int t = 1, i;
  for (i = 0; i < n; i++)
    t *= 10;
  return t;
}

void maxsort(int a[], int n) {
  int i, j, t;
  for (i = 0; i < n; i++)
    for (j = i; j > 0; j--)
      if (a[j - 1] > a[j]) {
	t = a[j - 1];
	a[j - 1] = a[j];
	a[j] = t;
      }
}

void minsort(int a[], int n) {
  int i, j, t;
  for (i = 0; i < n; i++)
    for (j = i; j > 0; j--)
      if (a[j - 1] < a[j]) {
	t = a[j - 1];
	a[j - 1] = a[j];
	a[j] = t;
      }
}

void copy(int a[], int b[]) {
  int i;
  for (i = 0; i < 6; i++)
    b[i] = a[i];
}

int main(void) {
  int a0, l, i, j, k, p, q;
  int a[6], t[20], b[6], c[6];

  while (1) {
    scanf("%d%d", &a0, &l);
    if (a0 == 0 && l == 0) return 0;
    t[0] = a0;

    for (i = 1; ; i++) {
      for (j = 0; j < 6; j++) {
	a[i] = 0;
	b[i] = 0;
	c[i] = 0;
      }
      if (i > 1) a0 = t[i - 1];
      for (j = 0; j < l; j++) {
	a[j] = a0 % 10;
	a0 /= 10;
      }

      copy(a, b);
      copy(a, c);
      maxsort(b, l);
      minsort(c, l);

      p = 0;
      q = 0;
      for (j = 0; j < l; j++) {
	p += b[j] * pow_10(j);
	q += c[j] * pow_10(j);
      }

      t[i] = p - q;
      for (j = 0; j < i; j++) {
	if (t[i] == t[j]) {
	  printf("%d %d %d\n", j, t[i], i - j);
	  goto loop_end;
	}
      }
    }
  loop_end: ;
  }
}