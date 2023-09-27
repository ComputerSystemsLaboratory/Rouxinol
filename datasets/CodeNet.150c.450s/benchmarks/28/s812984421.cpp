#include <iostream>
#include <vector>
using namespace  std;

void fnInput(int &riLodC, int &riTrkC, vector<int> &rviLod)
{
  cin >> riLodC >> riTrkC;

  rviLod.resize(riLodC);
  for (int i = 0; i < riLodC; i++)
    cin >> rviLod[i];
}

int fnSimuAlloc(const vector<int> &cnrviLod, int iTrkC, int iLod)
{
  int iCurLod;
  int iCntTrk = 0;

  for (int i = 0; i < cnrviLod.size();    )
  {
    if (cnrviLod[i] > iLod)  return 0;

    iCntTrk++;
    iCurLod = 0;
    while (i < cnrviLod.size())
    {
      iCurLod += cnrviLod[i];
      if (iCurLod > iLod)  break;

      i++;
    }
  }
  return (iCntTrk <= iTrkC);
}

void fnAlloc(const vector<int> &cnrviLod, int iTrkC, int &riMinLod)
{
  const int cniMinLod = 0;
  const int cniMaxLod = 1000000000;

  int iLow  = cniMinLod;
  int iHigh = cniMaxLod;
  riMinLod = cniMaxLod;

  while (iLow < iHigh)
  {
    int iMid = (iLow + iHigh) / 2;
    if (fnSimuAlloc(cnrviLod, iTrkC, iMid))
    {
      riMinLod = min(riMinLod, iMid);
      iHigh = iMid;
    }
    else
      iLow = iMid + 1;
  }
}

void fnReSult(int iMinLod)
{
  cout << iMinLod << endl;
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  int iLodC, iTrkC;
  vector<int> viLod;
  int iMinLod = 0;

  fnInput(iLodC, iTrkC, viLod);
  fnAlloc(viLod, iTrkC, iMinLod);
  fnReSult(iMinLod);

  return 0;
}