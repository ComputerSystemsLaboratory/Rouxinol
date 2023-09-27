#include <bits/stdc++.h>
using namespace std;

signed main()
{
  int n;
  int score[2] = {0};
  string str[2];

  cin >> n;

  while (n > 0){
    cin >> str[0] >> str[1];

    if (str[0] > str[1]){
      score[0] += 3;
    }
    else if (str[0] < str[1]){
      score[1] += 3;
    }
    else {
      score[0]++;
      score[1]++;
    }
    n--;
  }

  cout << score[0] << " " << score[1] << endl;

  return (0);
}