#include <iostream>

using namespace std;

int main()
{
 int n;
 cin >> n;
 int *a = new int[n];
 int min = 1000000;
 int max = -1000000;
 long sum = 0;
 for (int i = 0; i < n; i++)
 {
  cin >> a[i];
  sum += a[i];
  if (a[i] >= max)
  {
   max = a[i];
  }
  if (a[i] <= min)
  {
   min = a[i];
  }
 }
 cout << min << " " << max << " " << sum << endl;
}
