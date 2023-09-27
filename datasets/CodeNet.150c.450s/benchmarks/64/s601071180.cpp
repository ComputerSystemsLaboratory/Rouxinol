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

void fnDPtblMake(vector<vector<int>> &rvvnDP, const vector<int> &cnrvnElm, int nMaxTrg)
{
  rvvnDP[cnrvnElm.size()][0] = 1;
  for (int j = 1; j <= nMaxTrg; j++)
    rvvnDP[cnrvnElm.size()][j] = 0;

  for (int i = cnrvnElm.size() - 1; i >= 0; i--)
    for (int j = 0; j <= nMaxTrg; j++)
      if (cnrvnElm[i] <= j)
        rvvnDP[i][j] = rvvnDP[i + 1][j] || rvvnDP[i + 1][j - cnrvnElm[i]];
      else
        rvvnDP[i][j] = rvvnDP[i + 1][j];

}

void fnExhSch(const vector<int> &cnrvnElm, const vector<int> &cnrvnTrg)
{
  vector<vector<int>> vvnDP(21, vector<int>(2001, -1));

  int nMaxTrg = cnrvnTrg[0]; 
  for (int i = 1; i < cnrvnTrg.size(); i++)
    nMaxTrg = max(nMaxTrg, cnrvnTrg[i]);

  fnDPtblMake(vvnDP, cnrvnElm, nMaxTrg);

  for (int i = 0; i < cnrvnTrg.size(); i++)
    if (vvnDP[0][cnrvnTrg[i]])
      cout << "yes" << endl;
    else
      cout << "no" << endl;
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