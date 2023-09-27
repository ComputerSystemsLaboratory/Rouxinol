#include <iostream>
#include <vector>
using namespace  std;

void fnInput(vector<int> &a_rvoTarget, vector<int> &a_rvoSearch)
{
  int iTargetCnt;
  cin >> iTargetCnt;

  for (int i = 0; i < iTargetCnt; i++)
  {
    int iTarget;
    cin >> iTarget;
    a_rvoTarget.push_back(iTarget);
  }

  int iSearchCnt;
  cin >> iSearchCnt;

  for (int i = 0; i < iSearchCnt; i++)
  {
    int iSearch;
    cin >> iSearch;
    a_rvoSearch.push_back(iSearch);
  }
}

void fnLinearSearch(const vector<int> &a_cnrvoTarget, const vector<int> &a_cnrvoSearch, int &a_riFound)
{
  for (auto itvoSearch = begin(a_cnrvoSearch); itvoSearch != end(a_cnrvoSearch); itvoSearch++)
    for (auto itvoTarget = begin(a_cnrvoTarget); itvoTarget != end(a_cnrvoTarget); itvoTarget++)
      if (*itvoTarget == *itvoSearch)
      {
        a_riFound++;
        break;
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