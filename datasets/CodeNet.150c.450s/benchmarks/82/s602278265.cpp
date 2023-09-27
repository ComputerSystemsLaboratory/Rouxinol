#include <bits/stdc++.h>
using namespace std;

  int a[6] = {0};
void dice(char g) {
if (g == 'S')
{
  int tem;
  tem = a[1];
  a[1] = a[0];
  a[0] = a[4];
  a[4] = a[5];
  a[5] = tem;
}
if (g == 'E')
{
  int tem;
  tem = a[2];
  a[2] = a[0];
  a[0] = a[3];
  a[3] = a[5];
  a[5] = tem;
}
if (g == 'N')
{
  int tem;
  tem = a[4];
  a[4] = a[0];
  a[0] = a[1];
  a[1] = a[5];
  a[5] = tem;
}
if (g == 'W')
{
  int tem;
  tem = a[3];
  a[3] = a[0];
  a[0] = a[2];
  a[2] = a[5];
  a[5] = tem;
}
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);

  for (int i = 0; i < 6; i++) {
    cin >> a[i];
  }
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int u, f;
    cin >> u >> f;
    for (int i = 0; i < n; i++) {
      if (u == a[5]) {
        dice('N');
        dice('N');
      }
      if (u == a[1]) {
        dice('N');
      }
      if (u == a[2]) {
        dice('W');
      }
      if (u == a[3]) {
        dice('E');
      }
      if (u == a[5]) {
        dice('S');
      }
      while (f != a[1]) {
        dice('N');
        dice('W');
        dice('S');
      }
    }
  cout << a[2] << endl;
  }
}

