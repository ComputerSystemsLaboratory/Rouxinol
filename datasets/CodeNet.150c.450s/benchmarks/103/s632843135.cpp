#include <iostream>
using namespace std;

int rec(int n, int s, int num)
{
  if (n == 0 && s == 0) return 1;
  if (n == 0 || num == 10) return 0;

  return rec(n, s, num + 1) + rec(n - 1, s - num, num + 1);
}

signed main()
{  
  int n, s;
  
  while (cin >> n >> s, n || s) {
    cout << rec(n, s, 0) << endl;
  }

  return (0);
}