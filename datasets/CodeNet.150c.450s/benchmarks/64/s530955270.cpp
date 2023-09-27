#include <iostream>
#include <vector>
using namespace  std;

void fnInput(int &a_riElementCnt, vector<int> &a_rviElement, 
             int &a_riTargetCnt , vector<int> &a_rviTarget )
{
  cin >> a_riElementCnt;

  a_rviElement.resize(a_riElementCnt);
  for (int i = 0; i < a_riElementCnt; i++)
    cin >> a_rviElement[i];

  cin >> a_riTargetCnt;

  a_rviTarget.resize(a_riTargetCnt);
  for (int i = 0; i < a_riTargetCnt; i++)
    cin >> a_rviTarget[i];
}

int fnRcsSearch(int a_iPos, int a_iTarget, const vector<int> &a_cnrviElement,
                vector<vector<int>> &a_rvviOK)
{
  if (!a_iTarget)    return 1;
  if (a_iTarget < 0) return 0;
  if (a_iPos == a_cnrviElement.size())  return 0;
  if (a_rvviOK[a_iPos][a_iTarget] != -1)
    return a_rvviOK[a_iPos][a_iTarget];

  int iRtn;
  int iSmallTarget;

  iRtn = fnRcsSearch(a_iPos + 1, a_iTarget, a_cnrviElement, a_rvviOK);
  a_rvviOK[a_iPos + 1][a_iTarget] = iRtn;
  if (iRtn)  return iRtn;

  iSmallTarget = a_iTarget - a_cnrviElement[a_iPos];
  iRtn = fnRcsSearch(a_iPos + 1, iSmallTarget, a_cnrviElement, a_rvviOK);
  if (iSmallTarget >= 0)
    a_rvviOK[a_iPos + 1][iSmallTarget] = iRtn;
  return iRtn;
}

void fnExhSearch(const vector<int> &a_cnrviElement, const vector<int> &a_cnrviTarget)
{
  vector<vector<int>> vviOK(21, vector<int>(2001, -1));
  
  for (int i = 0; i < a_cnrviTarget.size(); i++)
  {
    int iTarget = a_cnrviTarget[i];
    int iRtn;

    if (iRtn = fnRcsSearch(0, iTarget, a_cnrviElement, vviOK))
      cout << "yes" << endl;
    else
      cout << "no" << endl;

    vviOK[0][iTarget] = iRtn;
  }
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  int iElementCnt, iTargetCnt;
  vector<int> viElement, viTarget;

  fnInput(iElementCnt, viElement, iTargetCnt, viTarget);
  fnExhSearch(viElement, viTarget);

  return 0;
}