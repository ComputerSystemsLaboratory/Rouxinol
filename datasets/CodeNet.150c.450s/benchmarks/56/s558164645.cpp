#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for (int i = 0; i < (n); i++)

int main()
{
  long long int n, i, a[10001], sum = 0;
  
  cin >> n;
  REP(i, n) cin >> a[i];
  sort(a, a + n);
  REP(i, n) sum += a[i];
  cout << a[0] << " "<< a[n - 1] << " " << sum << endl;
}