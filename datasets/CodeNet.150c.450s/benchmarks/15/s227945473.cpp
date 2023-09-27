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
  int iMaxSize = a_rvoTarget.size() - 1;
  for (auto itvoSearch = begin(a_cnrvoSearch); itvoSearch != end(a_cnrvoSearch); itvoSearch++)
  {
    a_rvoTarget[iMaxSize] = *itvoSearch;
    auto itvoTarget = begin(a_rvoTarget);
    while (*itvoSearch != *itvoTarget)
      itvoTarget++;
    if (distance(begin(a_rvoTarget), itvoTarget) != iMaxSize)
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