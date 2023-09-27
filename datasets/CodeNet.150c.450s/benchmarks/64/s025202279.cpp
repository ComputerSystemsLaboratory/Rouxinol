#include <iostream>
#include <vector>
using namespace  std;

void fnInput(int &riElmCnt, vector<int> &rviElm, int &riTrgCnt , vector<int> &rviTrg )
{
  cin >> riElmCnt;

  rviElm.resize(riElmCnt);
  for (int i = 0; i < riElmCnt; i++)
    cin >> rviElm[i];

  cin >> riTrgCnt;

  rviTrg.resize(riTrgCnt);
  for (int i = 0; i < riTrgCnt; i++)
    cin >> rviTrg[i];
}

int fnRcsSch(int iPos, int iTrg, const vector<int> &cnrviElm, vector<vector<int>> &rvviOK)
{
  if (!iTrg)                    return 1;
  if (iTrg < 0)                 return 0;
  if (iPos == cnrviElm.size())  return 0;
  if (rvviOK[iPos][iTrg] != -1) return rvviOK[iPos][iTrg];

  int iRtn, iSmallTarget;

  iRtn = fnRcsSch(iPos + 1, iTrg, cnrviElm, rvviOK);
  rvviOK[iPos + 1][iTrg] = iRtn;
  if (iRtn)  return iRtn;

  iRtn = fnRcsSch(iPos + 1, iTrg - cnrviElm[iPos], cnrviElm, rvviOK);
  if (iTrg - cnrviElm[iPos] >= 0)
    rvviOK[iPos + 1][iTrg - cnrviElm[iPos]] = iRtn;
  return iRtn;
}

void fnExhSch(const vector<int> &cnrviElm, const vector<int> &cnrviTrg)
{
  vector<vector<int>> vviOK(21, vector<int>(2001, -1));
  
  for (int i = 0; i < cnrviTrg.size(); i++)
  {
    int iTrg = cnrviTrg[i];
    int iRtn;

    if (iRtn = fnRcsSch(0, iTrg, cnrviElm, vviOK))
      cout << "yes" << endl;
    else
      cout << "no" << endl;

    vviOK[0][iTrg] = iRtn;
  }
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  int iElmCnt, iTrgCnt;
  vector<int> viElm, viTrg;

  fnInput(iElmCnt, viElm, iTrgCnt, viTrg);
  fnExhSch(viElm, viTrg);

  return 0;
}