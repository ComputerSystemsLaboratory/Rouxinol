#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace  std;

struct StDtl
{
  int m_iLeft;

  StDtl(int a_iLeft) :
    m_iLeft(a_iLeft)
  { }

  ~StDtl() { }
};

struct StSum
{
  int m_iLeft;
  int m_iRight;
  int m_iArea;

  StSum(int a_iLeft, int a_iRight, int a_iArea) :
    m_iLeft(a_iLeft), m_iRight(a_iRight), m_iArea(a_iArea)
  { }

  ~StSum() { }
};

void fnCrossSectAreaSet(stack<StDtl> &a_rskStDtl, vector<StSum> &a_rvStSum, int &a_riTotalArea)
{
  string sCrossSect;
  cin >> sCrossSect;

  for (int i = 0; i < sCrossSect.size(); i++)
  {
    if (sCrossSect[i] == '\\')
    {
      StDtl oDtl(i);
      a_rskStDtl.push(oDtl);
    }
    else if (sCrossSect[i] == '/')
    {
      if (a_rskStDtl.size() > 0)
      {
        int iLeft = a_rskStDtl.top().m_iLeft; a_rskStDtl.pop();
        int iSum = i - iLeft; 
        a_riTotalArea += iSum;

        while (a_rvStSum.size()  &&
               iLeft < a_rvStSum.back().m_iLeft  &&
               a_rvStSum.back().m_iRight < i       )
        {
          iSum += a_rvStSum.back().m_iArea;
          a_rvStSum.pop_back();
        }
        StSum oSum(iLeft, i, iSum);
        a_rvStSum.push_back(oSum);
      }
      else;
    }
  }
}

void  fnCrossSectAreaGet(const vector<StSum> &a_cnrvStSum, int a_iTotalArea)
{
  cout << a_iTotalArea << endl;
  cout << a_cnrvStSum.size();
  if (a_cnrvStSum.size() > 0)
  {
    cout << " ";
    for (auto itvStSum = begin(a_cnrvStSum); itvStSum != end(a_cnrvStSum); ++itvStSum)
    {
      if (itvStSum != begin(a_cnrvStSum)) cout << " ";
      cout << itvStSum->m_iArea;
    }
  }
  cout << endl;
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  stack<StDtl> skStDtl;
  vector<StSum> vStSum;
  int iTotalArea = 0;

  fnCrossSectAreaSet(skStDtl, vStSum, iTotalArea);
  fnCrossSectAreaGet(vStSum, iTotalArea);

  return 0;
}