#include <iostream>
#include <vector>
using namespace  std;

void fnInput(vector<int> &a_rviTarget, vector<int> &a_rviSearch)
{
  int iTargetCnt;
  cin >> iTargetCnt;

  a_rviTarget.resize(iTargetCnt + 1);
  for (int i = 0; i < iTargetCnt; i++)
    cin >> a_rviTarget[i];

  int iSearchCnt;
  cin >> iSearchCnt;

  a_rviSearch.resize(iSearchCnt);
  for (int i = 0; i < iSearchCnt; i++)
    cin >> a_rviSearch[i];
}

void fnLinearSearch(vector<int> &a_rviTarget, const vector<int> &a_cnrviSearch, int &a_riFound)
{
  size_t zMaxSize = a_rviTarget.size() - 1;
  for (size_t zi = 0; zi < a_cnrviSearch.size(); zi++)
  {
    a_rviTarget[zMaxSize] = a_cnrviSearch[zi];
    size_t zj = 0;
    while (a_rviTarget[zj] != a_cnrviSearch[zi])
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

  vector<int> viTarget, viSearch;
  int iFound = 0;

  fnInput(viTarget, viSearch);
  fnLinearSearch(viTarget, viSearch, iFound);
  fnResultOut(iFound);

  return 0;
}