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

  ~StDtl() { }
};

struct StSum
{
  int m_nLeft;
  int m_nRight;
  int m_nArea;

  StSum(int nLeft, int nRight, int nArea) :
    m_nLeft(nLeft), m_nRight(nRight), m_nArea(nArea)
  { }

  ~StSum() { }
};

void fnCroSecSet(stack<StDtl> &rskStDtl, vector<StSum> &rvStSum, int &rnTotalArea)
{
  string sCrossSect;
  cin >> sCrossSect;

  for (int i = 0; i < sCrossSect.size(); i++)
  {
    if (sCrossSect[i] == '\\')
    {
      StDtl oDtl(i);
      rskStDtl.push(oDtl);
    }
    else if (sCrossSect[i] == '/')
    {
      if (rskStDtl.size() > 0)
      {
        int nLeft = rskStDtl.top().m_nLeft; rskStDtl.pop();
        int nSum = i - nLeft; 
        rnTotalArea += nSum;

        while (rvStSum.size()  &&
               nLeft < rvStSum.back().m_nLeft  &&
               rvStSum.back().m_nRight < i       )
        {
          nSum += rvStSum.back().m_nArea;
          rvStSum.pop_back();
        }
        StSum oSum(nLeft, i, nSum);
        rvStSum.push_back(oSum);
      }
      else;
    }
  }
}

void  fnCroSecGet(const vector<StSum> &cnrvStSum, int nTotalArea)
{
  cout << nTotalArea << endl;
  cout << cnrvStSum.size();
  if (cnrvStSum.size() > 0)
  {
    cout << " ";
    for (auto itvStSum = begin(cnrvStSum); itvStSum != end(cnrvStSum); ++itvStSum)
    {
      if (itvStSum != begin(cnrvStSum)) cout << " ";
      cout << itvStSum->m_nArea;
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
  int iTtlAra = 0;

  fnCroSecSet(skStDtl, vStSum, iTtlAra);
  fnCroSecGet(vStSum, iTtlAra);

  return 0;
}