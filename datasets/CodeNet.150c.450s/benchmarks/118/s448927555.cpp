#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  int year[3] = {200, 195, 195};
  int month[2] = {19, 20};
  int n; cin >> n;

  for(int i = 0; i < n; i ++){
    int y, m, d; cin >> y >> m >> d;
    int sum = 1;
    for(int j = y; j < 1000; j++)
      sum += year[j%3];

    if(y % 3 == 0)
      month[0] = 20;
    else
      month[0] = 19;
    for(int j = 1; j < m; j++)
      sum -= month[j%2];
    
    sum -= d;

    cout << sum << endl;

  }
  return 0;
 
}