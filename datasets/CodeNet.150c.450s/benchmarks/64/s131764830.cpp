#include <cstdio>
#include <iostream>

using namespace std;

int A[200];
int n, q, m;

bool solve(int i, int m)
{
  if(m == 0) return true;
  if(i >= n) return false;
  return solve(i + 1, m) || solve(i + 1, m - A[i]);
}

int main()
{
  cin >> n;
  for(int i = 0; i < n; i++) cin >> A[i];
  cin >> q;
  for(int i = 0; i < q; i++)
  {
    cin >> m;
    cout << (solve(0, m) ? "yes" : "no") << endl;
  }
  return 0;
}