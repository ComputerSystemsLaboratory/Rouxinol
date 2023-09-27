#include <iostream>
using namespace std;

#define MAX 200

unsigned n, A[MAX], q, m[MAX];

void bubbleSort(unsigned a[], unsigned n) {
  int flag = 1;
  int done = 0;
  while (flag) {
    flag = 0;
    int j;
    for (j = n - 1; j > done; j--) {
      if (a[j] < a[j - 1]) {
        unsigned temp = a[j];
        a[j] = a[j - 1];
        a[j - 1] = temp;
        flag = 1;
      }
    }
    done++;
  }
}

unsigned rsolve(unsigned mi, unsigned p)
{
//  cout << mi << "," << p << endl;
  unsigned ret;
  if (p >= n || mi < A[p]) ret = 0;
  else if (mi == A[p]) ret = 1;
  else {
    ret = rsolve(mi, p + 1) || rsolve(mi - A[p], p + 1);
  }
  return ret;
}

void solve()
{
  for (unsigned i = 0; i < q; i++)
    cout << (rsolve(m[i], 0) ? "yes" : "no") << endl;
}

int main()
{
  cin >> n;
  for (unsigned i = 0; i < n; i++) cin >> A[i];
  bubbleSort(A, n);
  cin >> q;
  for (unsigned i = 0; i < q; i++) cin >> m[i];
  solve();
  return 0;
}