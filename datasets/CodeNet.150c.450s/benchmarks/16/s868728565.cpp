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

void fnCrossSectAreaSet(stack<StDtl> &a_skoDtl, vector<StSum> &a_voSum, int &a_riTotalArea)
{
  string sCrossSect;
  cin >> sCrossSect;

  for (int i = 0; i < sCrossSect.size(); i++)
  {
    if (sCrossSect[i] == '\\')
    {
      StDtl oDtl(i);
      a_skoDtl.push(oDtl);
    }
    else if (sCrossSect[i] == '/')
    {
      if (a_skoDtl.size() > 0)
      {
        int iLeft = a_skoDtl.top().m_iLeft; a_skoDtl.pop();
        int iSum = i - iLeft; 
        a_riTotalArea += iSum;

        while (a_voSum.size()  &&
               iLeft < a_voSum.back().m_iLeft  &&
               a_voSum.back().m_iRight < i       )
        {
          iSum += a_voSum.back().m_iArea;
          a_voSum.pop_back();
        }
        StSum oSum(iLeft, i, iSum);
        a_voSum.push_back(oSum);
      }
      else;
    }
  }
}

void  fnCrossSectAreaGet(const vector<StSum> &a_cnrvoSum, int a_iTotalArea)
{
  cout << a_iTotalArea << endl;
  cout << a_cnrvoSum.size();
  if (a_cnrvoSum.size() > 0)
  {
    cout << " ";
    for (auto itvoSum = begin(a_cnrvoSum); itvoSum != end(a_cnrvoSum); ++itvoSum)
    {
      if (itvoSum != begin(a_cnrvoSum)) cout << " ";
      cout << itvoSum->m_iArea;
    }
  }
  cout << endl;
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  stack<StDtl> skoDtl;
  vector<StSum> voSum;
  int iTotalArea = 0;

  fnCrossSectAreaSet(skoDtl, voSum, iTotalArea);
  fnCrossSectAreaGet(voSum, iTotalArea);

  return 0;
}