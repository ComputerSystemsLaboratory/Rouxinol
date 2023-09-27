#include <iostream>
#include <vector>
using namespace  std;

void fnInput(vector<int> &a_rvoTarget, vector<int> &a_rvoSearch)
{
  int iTargetCnt;
  cin >> iTargetCnt;

  a_rvoTarget.resize(iTargetCnt + 1);
  for (int i = 0; i < iTargetCnt; i++)
    cin >> a_rvoTarget[i];

  int iSearchCnt;
  cin >> iSearchCnt;

  a_rvoSearch.resize(iSearchCnt);
  for (int i = 0; i < iSearchCnt; i++)
    cin >> a_rvoSearch[i];
}

void fnLinearSearch(vector<int> &a_rvoTarget, const vector<int> &a_cnrvoSearch, int &a_riFound)
{
  size_t zMaxSize = a_rvoTarget.size() - 1;
  for (size_t zi = 0; zi < a_cnrvoSearch.size(); zi++)
  {
    a_rvoTarget[zMaxSize] = a_cnrvoSearch[zi];
    size_t zj = 0;
    while (a_rvoTarget[zj] != a_cnrvoSearch[zi])
      zj++;
    if (zj != zMaxSize)
      a_riFound++;
  }
}

void fnResultOut(int a_iFound)
{
  cout << a_iFound << endl;
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  vector<int> voTarget, voSearch;
  int iFound = 0;

  fnInput(voTarget, voSearch);
  fnLinearSearch(voTarget, voSearch, iFound);
  fnResultOut(iFound);

  return 0;
}