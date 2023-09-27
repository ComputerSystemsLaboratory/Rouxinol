#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  while(cin >> n, n){
    int cnt = 0, co[6] = {500, 100, 50, 10, 5, 1};
    n = 1000 - n;

    for (int i = 0; i < 6; i++){
      int a = n / co[i];
      cnt += a;
      n -= a * co[i];
    }

    cout << cnt << endl;
  }
  return 0;
}