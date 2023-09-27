#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace  std;

struct StDtl
{
  int m_nLeft;

  StDtl(int nLeft) :
    m_nLeft(nLeft)
  { }
};

struct StSum
{
  int m_nLeft;
  int m_nRight;
  int m_nArea;

  StSum(int nLeft, int nRight, int nArea) :
    m_nLeft(nLeft), m_nRight(nRight), m_nArea(nArea)
  { }
};

void fnCroSecSet(stack<StDtl> &rskoDtl, vector<StSum> &rvoSum, int &rnTotalArea)
{
  string sCrossSect;
  cin >> sCrossSect;

  for (int i = 0; i < sCrossSect.size(); i++)
  {
    if (sCrossSect[i] == '\\')
    {
      StDtl oDtl(i);
      rskoDtl.push(oDtl);
    }
    else if (sCrossSect[i] == '/')
    {
      if (rskoDtl.size() > 0)
      {
        int nLeft = rskoDtl.top().m_nLeft; rskoDtl.pop();
        int nSum = i - nLeft; 
        rnTotalArea += nSum;

        while (rvoSum.size()  &&
               nLeft < rvoSum.back().m_nLeft  &&
               rvoSum.back().m_nRight < i       )
        {
          nSum += rvoSum.back().m_nArea;
          rvoSum.pop_back();
        }
        StSum oSum(nLeft, i, nSum);
        rvoSum.push_back(oSum);
      }
      else;
    }
  }
}

void  fnCroSecGet(const vector<StSum> &cnrvoSum, int nTotalArea)
{
  cout << nTotalArea << endl;
  cout << cnrvoSum.size();
  if (cnrvoSum.size() > 0)
  {
    cout << " ";
    for (auto itvoSum = begin(cnrvoSum); itvoSum != end(cnrvoSum); ++itvoSum)
    {
      if (itvoSum != begin(cnrvoSum)) cout << " ";
      cout << itvoSum->m_nArea;
    }
  }
  cout << endl;
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  stack<StDtl> skStDtl;
  vector<StSum> voSum;
  int iTtlAra = 0;

  fnCroSecSet(skStDtl, voSum, iTtlAra);
  fnCroSecGet(voSum, iTtlAra);

  return 0;
}