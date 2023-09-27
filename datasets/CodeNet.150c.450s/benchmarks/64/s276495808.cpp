#include <iostream>
#include <vector>
using namespace  std;

void fnInput(int &rnElmCnt, vector<int> &rvnElm, int &rnTrgCnt , vector<int> &rvnTrg )
{
  cin >> rnElmCnt;

  rvnElm.resize(rnElmCnt);
  for (int i = 0; i < rnElmCnt; i++)
    cin >> rvnElm[i];

  cin >> rnTrgCnt;

  rvnTrg.resize(rnTrgCnt);
  for (int i = 0; i < rnTrgCnt; i++)
    cin >> rvnTrg[i];
}

int fnRcsSch(int nPos, int nTrg, const vector<int> &cnrvnElm, vector<vector<int>> &rvvnOK)
{
  if (!nTrg)                    return 1;
  if (nTrg < 0)                 return 0;
  if (nPos == cnrvnElm.size())  return 0;
  if (rvvnOK[nPos][nTrg] != -1) return rvvnOK[nPos][nTrg];

  if (fnRcsSch(nPos + 1, nTrg, cnrvnElm, rvvnOK))
    rvvnOK[nPos][nTrg] = 1;
  else if (fnRcsSch(nPos + 1, nTrg - cnrvnElm[nPos], cnrvnElm, rvvnOK))
    rvvnOK[nPos][nTrg] = 1;
  else
    rvvnOK[nPos][nTrg] = 0;

  return rvvnOK[nPos][nTrg];
}

void fnExhSch(const vector<int> &cnrvnElm, const vector<int> &cnrvnTrg)
{
  vector<vector<int>> vvnOK(21, vector<int>(2001, -1));
  
  for (int i = 0; i < cnrvnTrg.size(); i++)
  {
    int nTrg = cnrvnTrg[i];
    int nRtn;

    if (nRtn = fnRcsSch(0, nTrg, cnrvnElm, vvnOK))
      cout << "yes" << endl;
    else
      cout << "no" << endl;
  }
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  int nElmCnt, nTrgCnt;
  vector<int> vnElm, vnTrg;

  fnInput(nElmCnt, vnElm, nTrgCnt, vnTrg);
  fnExhSch(vnElm, vnTrg);

  return 0;
}