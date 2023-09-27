#include <iostream>
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

int bubbleSort(int a[], int n)
{
  int count = 0;
  for (int i = 0; i < n; i++)
    for (int j = n - 1; j > i; j--)
      if (a[j] < a[j - 1])  {
        swap(a[j], a[j - 1]);
        count++;
      }
  return count;
}

int main(void)
{
  int n, count, *a;
  cin >> n;
  a = new int[n];
  for (int i = 0; i < n; i++) cin >> a[i];

  count = bubbleSort(a, n);
  trace(a, n);
  cout << count << endl;

  return 0;
}