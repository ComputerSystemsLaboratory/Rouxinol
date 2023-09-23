//#include <cstdio>
#include <iostream>
//#include <algorithm>
using namespace std;

int N, H[10];

void solve()
{
  int big=0, small=0;
  bool flag = true;
  for (int i = 0; i < 10; i++)
  {
    if (H[i] > big) big = H[i];
    else if (H[i] > small) small = H[i];
    else
    {
      flag = false;
      break;
    }
  }
  if (flag) cout << "YES" << endl;
  else cout << "NO" << endl;
}

int main()
{
  cin >> N;
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < 10; j++) cin >> H[j];
    solve();
  }
  return 0;
}