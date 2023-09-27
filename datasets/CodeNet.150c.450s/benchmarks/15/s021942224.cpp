#include <iostream>
#include <vector>
using namespace  std;

void fnInput(vector<int>& rvnTrg, vector<int>& rvnSch)
{
  int nSchCnt;
  cin >> nSchCnt;

  for (int i = 0; i < nSchCnt; i++)
  {
    int nSch;
    cin >> nSch;
    rvnSch.push_back(nSch);
  }

  int nTrgCnt;
  cin >> nTrgCnt;

  for (int i = 0; i < nTrgCnt; i++)
  {
    int nTrg;
    cin >> nTrg;
    rvnTrg.push_back(nTrg);
  }
}

void fnLinearSch(const vector<int>& cnrvnTrg, const vector<int>& cnrvnSch, int& rnFnd)
{
  for (auto itvnTrg = begin(cnrvnTrg); itvnTrg != end(cnrvnTrg); itvnTrg++)
    for (auto itvnSch = begin(cnrvnSch); itvnSch != end(cnrvnSch); itvnSch++)
      if (*itvnTrg == *itvnSch)
      {
        rnFnd++;
        break;
      }
}

void fnResultOut(int nFnd)
{
  cout << nFnd << endl;
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  vector<int> vnTrg, vnSch;
  int nFnd = 0;

  fnInput(vnTrg, vnSch);
  fnLinearSch(vnTrg, vnSch, nFnd);
  fnResultOut(nFnd);

  return 0;
}