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

int fnRcsSearch(int a_iPos, const vector<int> &a_cnrviElement, int a_iTarget)
{
  if (!a_iTarget)  return 1;
  if (++a_iPos == a_cnrviElement.size())  return 0;
  
  int iRtn0 = fnRcsSearch(a_iPos, a_cnrviElement, a_iTarget);
  if (iRtn0)  return iRtn0;

  int iRtn1 = fnRcsSearch(a_iPos, a_cnrviElement, a_iTarget - a_cnrviElement[a_iPos]);
  return iRtn1;
}

void fnExhSearch(const vector<int> &a_cnrviElement, const vector<int> &a_cnrviTarget)
{
  for (int i = 0; i < a_cnrviTarget.size(); i++)
  {
    int iTarget = a_cnrviTarget[i];
    int iPos, iRtn0, iRtn1;
    iPos = 0;

    if (fnRcsSearch(iPos, a_cnrviElement, iTarget))
    {
      cout << "yes" << endl;
      continue;
    }

    if (fnRcsSearch(iPos, a_cnrviElement, iTarget - a_cnrviElement[iPos]))
      cout << "yes" << endl;
    else
      cout << "no" << endl;
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