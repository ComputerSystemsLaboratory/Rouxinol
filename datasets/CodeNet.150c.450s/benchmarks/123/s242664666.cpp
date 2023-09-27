#include <bits/stdc++.h>
using namespace std;
bool is_prime(int n)
{
  if (n < 2)
    return false;
  if (n == 2)
    return true;
  if (n % 2 == 0)
    return false;
  for (int i = 3; i * i <= n; i += 2)
    if (n % i == 0)
      return false;
  return true;
}
int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  int cnt = 0;
  for (int i : a)
  {
    cnt += is_prime(i);
  }
  cout << cnt << endl;
  return 0;
}

