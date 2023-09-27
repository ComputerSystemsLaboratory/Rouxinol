#include <iostream>
#include <string>
#include <list>
using namespace  std;

struct StDtl
{
  int m_iHeight;
  int m_iArea;

  StDtl(int a_iHeight) :
    m_iHeight(a_iHeight), m_iArea(0)
  { }

  ~StDtl() { }
};

struct StSum
{
  bool m_bSumOK;
  int m_iHeight;
  int m_iArea;

  StSum(bool a_bSumOK, int a_iHeight, int a_iArea) :
    m_bSumOK(a_bSumOK), m_iHeight(a_iHeight), m_iArea(a_iArea)
  { }

  ~StSum() { }

};

void fnCrossSectAreaSet(list<StDtl> &a_rltStDtl, list<StSum> &a_rltStSum)
{
  string sCrossSect;
  int iHeight = 0;
 
  cin >> sCrossSect;

  for (int i = 0; i < sCrossSect.size(); i++)
  {
    for (auto itltStDtl = a_rltStDtl.begin(); itltStDtl != a_rltStDtl.end(); ++itltStDtl)
    {
      itltStDtl->m_iArea++;
    }

    if (sCrossSect.at(i) == '\\')
    {
      StDtl oDtl(iHeight);
      a_rltStDtl.push_back(oDtl);
      iHeight--;
    }
    else if (sCrossSect.at(i) == '/')
    {
      iHeight++;
      bool bSumOK;
      int iSum = 0;

      if (a_rltStDtl.size() > 0)
      {
        iSum = a_rltStDtl.back().m_iArea;
        a_rltStDtl.pop_back();

        if (a_rltStDtl.size() == 0)
          bSumOK = false;
        else
          bSumOK = true;

        for (auto itltStSum = a_rltStSum.begin(); itltStSum != a_rltStSum.end();    )
        {
          if (itltStSum->m_bSumOK  == true   &&
              itltStSum->m_iHeight < iHeight)
          {
            iSum += itltStSum->m_iArea;
            itltStSum = a_rltStSum.erase(itltStSum);
            continue;
          }
          itltStSum++;
        }

        StSum oSum(bSumOK, iHeight, iSum);
        a_rltStSum.push_back(oSum); 
      }
      else
        for (auto itltStSum = a_rltStSum.begin(); itltStSum != a_rltStSum.end(); ++itltStSum)
          itltStSum->m_bSumOK = false;
    }
  }
}

void  fnCrossSectAreaGet(const list<StSum> &a_cnrltStSum)
{
  int iArea = 0;
  for (auto itltStSum = a_cnrltStSum.begin(); itltStSum != a_cnrltStSum.end(); ++itltStSum)
    iArea += itltStSum->m_iArea;

  cout << iArea << endl;
  cout << a_cnrltStSum.size();
  if (a_cnrltStSum.size() > 0)
  {
    cout << " ";
    for (auto itltStSum = a_cnrltStSum.begin(); itltStSum != a_cnrltStSum.end(); ++itltStSum)
    {
      if (itltStSum != a_cnrltStSum.begin()) cout << " ";
      cout << itltStSum->m_iArea;
    }
  }
  cout << endl;
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  list<StDtl> ltStDtl;
  list<StSum> ltStSum;

  fnCrossSectAreaSet(ltStDtl, ltStSum);
  fnCrossSectAreaGet(ltStSum);

  return 0;
}