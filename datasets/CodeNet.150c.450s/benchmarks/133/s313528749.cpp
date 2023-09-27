#include <bits/stdc++.h>
using namespace std;

int main()
{
  int d;
  cin >> d;
  vector<vector<int>> c;
  vector<int> t;
  int weight[26];
  for (int k = 0; k < 26; k++)
  {
    weight[k] = 1;
  }
  for (int i = 0; i < d + 1; i++)
  {
    c.push_back(vector<int>());

    for (int j = 0; j < 26; j++)
    {
      int v;
      cin >> v;
      c[i].push_back(v);
    }
  }

  for (int i = 0; i < d; i++)
  {
    int v;
    cin >> v;
    t.push_back(v);
  }

  int sum(0);
  for (int i = 0; i < d; i++)
  {
    int j = t[i] - 1;
    sum += c[i + 1][j];
    int penalty = 0;
    for (int k = 0; k < 26; k++)
    {
      if (j != k)
      {
        penalty += c[0][k] * weight[k];
        weight[k]++;
      }
      else
      {
        weight[k] = 1;
      }
    }
    sum -= penalty;
    std::cout << sum << std::endl;
  }
  return 0;
}