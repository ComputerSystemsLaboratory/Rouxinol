#include <iostream>
#include <vector>
using namespace  std;

void fnInput(vector<int> &a_rviTarget, vector<int> &a_rviSearch)
{
  int iTargetCnt;
  cin >> iTargetCnt;

  for (int i = 0; i < iTargetCnt; i++)
  {
    int iTarget;
    cin >> iTarget;
    a_rviTarget.push_back(iTarget);
  }

  int iSearchCnt;
  cin >> iSearchCnt;

  for (int i = 0; i < iSearchCnt; i++)
  {
    int iSearch;
    cin >> iSearch;
    a_rviSearch.push_back(iSearch);
  }
}

void fnLinearSearch(const vector<int> &a_cnrviTarget, const vector<int> &a_cnrviSearch, int &a_riFound)
{
  for (auto itviSearch = begin(a_cnrviSearch); itviSearch != end(a_cnrviSearch); itviSearch++)
    for (auto itviTarget = begin(a_cnrviTarget); itviTarget != end(a_cnrviTarget); itviTarget++)
      if (*itviTarget == *itviSearch)
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

  vector<int> viTarget, viSearch;
  int iFound = 0;

  fnInput(viTarget, viSearch);
  fnLinearSearch(viTarget, viSearch, iFound);
  fnResultOut(iFound);

  return 0;
}