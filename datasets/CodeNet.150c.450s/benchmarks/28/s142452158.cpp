#include <iostream>
#include <vector>
using namespace  std;

void fnInput(int &rnLod, int &rnTrk, vector<int> &rvnLod)
{
  cin >> rnLod >> rnTrk;

  rvnLod.resize(rnLod);
  for (int i = 0; i < rnLod; i++)
    cin >> rvnLod[i];
}

int fnSimuAlloc(const vector<int> &cnrvnLod, int nTrk, int nLod)
{
  int nCurLod;
  int nCntTrk = 0;

  for (int i = 0; i < cnrvnLod.size();    )
  {
    if (cnrvnLod[i] > nLod)  return 0;

    nCntTrk++;
    nCurLod = 0;
    while (i < cnrvnLod.size())
    {
      nCurLod += cnrvnLod[i];
      if (nCurLod > nLod)  break;

      i++;
    }
  }
  return (nCntTrk <= nTrk);
}

void fnAlloc(const vector<int> &cnrvnLod, int nTrk, int &rnMinLod)
{
  const int cnnMinLod = 0;
  const int cnnMaxLod = 1000000000;

  int nLow  = cnnMinLod;
  int nHigh = cnnMaxLod;
  rnMinLod = cnnMaxLod;

  while (nLow < nHigh)
  {
    int nLod = (nLow + nHigh) / 2;
    if (fnSimuAlloc(cnrvnLod, nTrk, nLod))
    {
      rnMinLod = min(rnMinLod, nLod);
      nHigh = nLod;
    }
    else
      nLow = nLod + 1;
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

  int nLod, nTrk;
  vector<int> vnLod;
  int nMinLod = 0;

  fnInput(nLod, nTrk, vnLod);
  fnAlloc(vnLod, nTrk, nMinLod);
  fnReSult(nMinLod);

  return 0;
}