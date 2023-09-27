#include <iostream>
#include <algorithm>
using namespace std;

void trace(int a[], int n)
{
  int i;
  for (i = 0; i < n; i++) {
    if (i > 0) cout << " ";
    cout << a[i];
  }
  cout << endl;
}

int main(void)
{
  int a[3];
  cin >> a[0] >> a[1] >> a[2];
  sort(a, a + 3);
  trace(a, 3);
  return 0;
}