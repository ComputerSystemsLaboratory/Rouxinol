#include <iostream>
#include <vector>
using namespace  std;

void fnInput(int &a_riLoadingCnt, int &a_riTrackCnt, vector<int> &a_rviLoading)
{
  cin >> a_riLoadingCnt >> a_riTrackCnt;

  a_rviLoading.resize(a_riLoadingCnt);
  for (int i = 0; i < a_riLoadingCnt; i++)
    cin >> a_rviLoading[i];
}

int fnSimuAlloc(const vector<int> &a_cnrviLoading, int a_iTrackCnt, int a_iMinLoading)
{
  int iCurLoading;
  int iTrackCnt = 0;

  for (int i = 0; i < a_cnrviLoading.size();    )
  {
    if (a_cnrviLoading[i] > a_iMinLoading) return 0;

    iTrackCnt++;
    iCurLoading = 0;

    while (i < a_cnrviLoading.size())
    {
      iCurLoading += a_cnrviLoading[i];
      if (iCurLoading > a_iMinLoading)
        break;

      i++;
    }
  }
  return (iTrackCnt <= a_iTrackCnt);
}

void fnAllocation(const vector<int> &a_cnrviLoading, int a_iTrackCnt, int &a_riMinLoading)
{
  const int cniMinLoading = 0;
  const int cniMaxLoading = 1000000000;

  int iLow  = cniMinLoading;
  int iHigh = cniMaxLoading;
  a_riMinLoading = cniMaxLoading;

  while (iLow < iHigh)
  {
    int iMid = (iLow + iHigh) / 2;
    if (fnSimuAlloc(a_cnrviLoading, a_iTrackCnt, iMid))
    {
      a_riMinLoading = min(a_riMinLoading, iMid);
      iHigh = iMid;
    }
    else
      iLow = iMid + 1;
  }
}

void fnResultOut(int a_iMinLoading)
{
  cout << a_iMinLoading << endl;
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  int iLoadingCnt, iTrackCnt;
  vector<int> viLoading;
  int iMinLoading = 0;

  fnInput(iLoadingCnt, iTrackCnt, viLoading);
  fnAllocation(viLoading, iTrackCnt, iMinLoading);
  fnResultOut(iMinLoading);

  return 0;
}