#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  long long day[32];

  day[0] = 0;
  day[1] = 1;
  day[2] = 1;

  for (int i = 3; i <= 31; i++){
    day[i] = day[i - 3] + day[i - 2] + day[i - 1];
  }

  while (cin >> n, n){
    int year = day[n + 1] / 10 / 365;
    cout << year + 1 << endl;
  }
}