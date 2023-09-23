#include <iostream>
using namespace std;
 
int main()
{
  long num;
  cin >> num;
 
  long * a = new long[num];
  for (long i = 0; i < num; i++)
    cin >> a[i];
 
  long min = a[0];
  for (long i = 0; i < num; i++)
    if (a[i] < min) min = a[i];
 
  long max = a[0];
  for (long i = 0; i < num; i++)
    if (a[i] > max) max = a[i];
 
  long sum = 0;
  for (long i = 0; i < num; i++)
    sum += a[i];
 
  cout << min << " " << max << " " << sum << endl;
 
  delete[] a;
  return 0;
}