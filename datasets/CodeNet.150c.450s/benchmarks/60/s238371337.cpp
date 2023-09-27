#include <iostream>
#include <vector>
#include <climits>
using namespace  std;

void fnInput(vector<vector<int>> &rvvnAdjcy)
{
  int nMaxSiz;
  cin >> nMaxSiz;

  rvvnAdjcy.resize(nMaxSiz + 1, vector<int>(nMaxSiz + 1, 0));
  for (int i = 0; i < nMaxSiz; i++)
  {
    int nx, nSecSiz;
    cin >> nx >> nSecSiz;
    for (int j = 0; j < nSecSiz; j++)
    {
      int ny;
      cin >> ny;
      rvvnAdjcy[nx][ny] = 1;
    }
  }
}

void fnResult(const vector<vector<int>> &cnrvvnAdjcy)
{
  for (int i = 1; i < cnrvvnAdjcy.size(); i++)
  {
    for (int j = 1; j < cnrvvnAdjcy[i].size(); j++)
    {
      if (j != 1) cout << " ";
      cout << cnrvvnAdjcy[i][j];
    }
    cout << endl;
  }
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  vector<vector<int>> vvnAdjcy;

  fnInput(vvnAdjcy);
  fnResult(vvnAdjcy);

  return 0;
}