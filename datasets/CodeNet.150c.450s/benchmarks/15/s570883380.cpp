#include <iostream>
#include <vector>
using namespace  std;

void fnInput(vector<int> &rviTrg, vector<int> &rviSch)
{
  int iTrgCnt;
  cin >> iTrgCnt;

  rviTrg.resize(iTrgCnt + 1);
  for (int i = 0; i < iTrgCnt; i++)
    cin >> rviTrg[i];

  int iSchCnt;
  cin >> iSchCnt;

  rviSch.resize(iSchCnt);
  for (int i = 0; i < iSchCnt; i++)
    cin >> rviSch[i];
}

void fnLinSch(vector<int> &rviTrg, const vector<int> &cnrviSch, int &riFnd)
{
  size_t zMaxSiz = rviTrg.size() - 1;
  for (size_t zi = 0; zi < cnrviSch.size(); zi++)
  {
    rviTrg[zMaxSiz] = cnrviSch[zi];
    size_t zj = 0;
    while (rviTrg[zj] != cnrviSch[zi])
      zj++;
    if (zj != zMaxSiz)
      riFnd++;
  }
}

void fnResult(int a_iFnd)
{
  cout << a_iFnd << endl;
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  vector<int> viTrg, viSch;
  int iFnd = 0;

  fnInput(viTrg, viSch);
  fnLinSch(viTrg, viSch, iFnd);
  fnResult(iFnd);

  return 0;
}