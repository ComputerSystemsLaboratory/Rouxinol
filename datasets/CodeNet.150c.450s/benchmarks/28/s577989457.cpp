#include <iostream>
#include <vector>
using namespace  std;

void fnInput(int &rnLodSiz, int &rnTrkSiz, vector<int> &rvnLod)
{
  cin >> rnLodSiz >> rnTrkSiz;

  rvnLod.resize(rnLodSiz);
  for (int i = 0; i < rnLodSiz; i++)
    cin >> rvnLod[i];
}

int fnSimuAlloc(const vector<int> &cnrvnLod, int nTrkSiz, int nLod)
{
  int nCurLod;
  int nTrkCnt = 0;

  for (int i = 0; i < cnrvnLod.size();    )
  {
    if (cnrvnLod[i] > nLod)  return 0;

    nTrkCnt++;
    nCurLod = 0;
    while (i < cnrvnLod.size())
    {
      nCurLod += cnrvnLod[i];
      if (nCurLod > nLod)  break;

      i++;
    }
  }
  return (nTrkCnt <= nTrkSiz);
}

void fnAlloc(const vector<int> &cnrvnLod, int nTrkSiz, int &rnMinLod)
{
  const int cnnMinLod = 0;
  const int cnnMaxLod = 1000000000;

  int nLow  = cnnMinLod;
  int nHigh = cnnMaxLod;
  rnMinLod  = cnnMaxLod;

  while (nLow < nHigh)
  {
    int nLod = (nLow + nHigh) / 2;
    if (fnSimuAlloc(cnrvnLod, nTrkSiz, nLod))
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

  int nLodSiz, nTrkSiz;
  vector<int> vnLod;
  int nMinLod = 0;

  fnInput(nLodSiz, nTrkSiz, vnLod);
  fnAlloc(vnLod, nTrkSiz, nMinLod);
  fnReSult(nMinLod);

  return 0;
}