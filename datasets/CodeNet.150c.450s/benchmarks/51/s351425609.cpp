#include <bits/stdc++.h>
using namespace std;
int main()
{
  bool flag[31] = {0};
  int d;
  for(int i = 0;i < 28;i++) {
    cin >> d;
    flag[d] = true;
  }
  for(int i = 1;i <= 30;i++) {
    if(!flag[i])cout << i << endl;
  }
  return 0;
}