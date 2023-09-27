#include <iostream>
#include <vector>
using namespace  std;

void fnInput(int &rnLodC, int &rnTrkC, vector<int> &rvnLod)
{
  cin >> rnLodC >> rnTrkC;

  rvnLod.resize(rnLodC);
  for (int i = 0; i < rnLodC; i++)
    cin >> rvnLod[i];
}

int fnSimuAlloc(const vector<int> &cnrvnLod, int nTrkC, int iLod)
{
  int iCurLod;
  int iCntTrk = 0;

  for (int i = 0; i < cnrvnLod.size();    )
  {
    if (cnrvnLod[i] > iLod)  return 0;

    iCntTrk++;
    iCurLod = 0;
    while (i < cnrvnLod.size())
    {
      iCurLod += cnrvnLod[i];
      if (iCurLod > iLod)  break;

      i++;
    }
  }
  return (iCntTrk <= nTrkC);
}

void fnAlloc(const vector<int> &cnrvnLod, int nTrkC, int &rnMinLod)
{
  const int cnnMinLod = 0;
  const int cnnMaxLod = 1000000000;

  int nLow  = cnnMinLod;
  int nHigh = cnnMaxLod;
  rnMinLod = cnnMaxLod;

  while (nLow < nHigh)
  {
    int nMind = (nLow + nHigh) / 2;
    if (fnSimuAlloc(cnrvnLod, nTrkC, nMind))
    {
      rnMinLod = min(rnMinLod, nMind);
      nHigh = nMind;
    }
    else
      nLow = nMind + 1;
  }
}

void fnReSult(int nMinLod)
{
  cout << nMinLod << endl;
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  int nLodC, nTrkC;
  vector<int> vnLod;
  int nMinLod = 0;

  fnInput(nLodC, nTrkC, vnLod);
  fnAlloc(vnLod, nTrkC, nMinLod);
  fnReSult(nMinLod);

  return 0;
}