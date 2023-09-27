#include <iostream>
using namespace std;

#define REP(i, n) for(int i = 0; i < (n); i++)

bool linearSearch(int a[], int n, int x)
{
  int i = 0;
  a[n] = x;
  while(a[i] != x)
    i++;
  if(i == n)
    return false;
  return true;
}

int main()
{
  int n, q, ans = 0;
  cin >> n;
  int S[n + 1];
  REP(i, n)
    cin >> S[i];
  cin >> q;
  int T[q];
  REP(i, q)
    cin >> T[i];
  REP(i, q)
    if(linearSearch(S, n, T[i]))
      ans++;
  cout << ans << endl;
}    