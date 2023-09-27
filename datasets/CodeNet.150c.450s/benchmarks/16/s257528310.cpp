#include <bits/stdc++.h>
using namespace std;

int main()
{
  stack<int> down_pos;
  stack<pair<int, int> > L;
  string field;
  cin >> field;
  for (int i = 0; i < field.size(); i++)
  {
    if (field[i] == '/' && !down_pos.empty())
    {
      int start_pos = down_pos.top();
      down_pos.pop();
      int amount = i - start_pos;
      for (int j = L.size() - 1; j >= 0; j--)
      {
        if (L.top().first > start_pos)
        {
          amount += L.top().second;
          L.pop();
        }
        else
        {
          break;
        }
      }
      L.push(make_pair(start_pos, amount));
    }
    else if (field[i] == '\\')
    {
      down_pos.push(i);
    }
  }

  int A = 0;
  vector<int> ans(L.size());
  for (int i = ans.size() - 1; i >= 0; i--)
  {
    ans[i] = L.top().second;
    A += ans[i];
    L.pop();
  }
  cout << A << endl;
  cout << ans.size();
  for (int i = 0; i < ans.size(); i++)
  {
    cout << " " << ans[i];
  }
  cout << endl;
}
