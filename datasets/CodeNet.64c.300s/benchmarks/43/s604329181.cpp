#include<bits/stdc++.h>
using namespace std;

int a[4], b[4];
int main()
{
  for(int i = 0; i < 4; i++)
    cin >> a[i];
  for(int i = 0; i < 4; i++)
    cin >> b[i];

  int s = 0, t = 0;
  for(int i = 0; i < 4; i++)
    s += a[i];
  for(int i = 0; i < 4; i++)
    t += b[i];

  cout << max(s, t) << endl;
  return 0;
}