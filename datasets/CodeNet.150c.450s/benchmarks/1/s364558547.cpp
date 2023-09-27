#include <bits/stdc++.h>
using namespace std;
const int MAX = 100000;
const int INF = (1 << 30);

int main()
{
  int n;
  cin >> n;
  vector<int> A(n);
  for (int i = 0; i < n; i++)
  {
    cin >> A.at(i);
  }
  vector<int> dp(MAX, INF);
  int length = 1;
  dp.at(0) = A.at(0);
  for (int i = 1; i < n; i++)
  {
    if (dp.at(length - 1) < A.at(i))
    {
      dp.at(length) = A.at(i);
      length++;
    }
    else
    {
      *lower_bound(dp.begin(), dp.end(), A.at(i)) = A.at(i);
    }
  }
  cout << length << endl;
}
