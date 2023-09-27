#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for (int i = 0; i < (n); i++)

int main()
{
  const int coin[] = {500, 100, 50, 10, 5, 1};
  int n;

  while (cin >> n, n){
    int cnt = 0;
    for (int i = 0; i < 6; i++){
      while (n + coin[i] <= 1000){
        n += coin[i];
        cnt++;
      }
    }
    cout << cnt << endl;
  }
}