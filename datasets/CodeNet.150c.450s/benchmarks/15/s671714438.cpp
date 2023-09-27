#include <iostream>
#include <vector>
using namespace  std;

void fnInput(vector<int> &rvnTrg, vector<int> &rvnSch)
{
  int nTrgCnt;
  cin >> nTrgCnt;

  rvnTrg.resize(nTrgCnt + 1);
  for (int i = 0; i < nTrgCnt; i++)
    cin >> rvnTrg[i];

  int nSchCnt;
  cin >> nSchCnt;

  rvnSch.resize(nSchCnt);
  for (int i = 0; i < nSchCnt; i++)
    cin >> rvnSch[i];
}

void fnLinSch(vector<int> &rvnTrg, const vector<int> &cnrvnSch, int &rnFnd)
{
  size_t nMaxSiz = rvnTrg.size() - 1;
  for (size_t ni = 0; ni < cnrvnSch.size(); ni++)
  {
    rvnTrg[nMaxSiz] = cnrvnSch[ni];
    size_t nj = 0;
    while (rvnTrg[nj] != cnrvnSch[ni])
      nj++;
    if (nj != nMaxSiz)
      rnFnd++;
  }
}

void fnResult(int nFnd)
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
  fnLinSch(vnTrg, vnSch, nFnd);
  fnResult(nFnd);

  return 0;
}