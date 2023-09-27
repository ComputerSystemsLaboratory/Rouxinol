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

void fnCrossSectAreaSet(list<StDtl> &a_rltoDtl, list<StSum> &a_rltoSum)
{
  string sCrossSect;
  int iHeight = 0;
 
  cin >> sCrossSect;

  for (int i = 0; i < sCrossSect.size(); i++)
  {
   
    for (auto itltoDtl = a_rltoDtl.begin(); itltoDtl != a_rltoDtl.end(); ++itltoDtl)
    {
      itltoDtl->m_iArea++;
    }

    if (sCrossSect.at(i) == '\\')
    {
      StDtl oDtl(iHeight);
      a_rltoDtl.push_back(oDtl);
      iHeight--;
    }
    else if (sCrossSect.at(i) == '/')
    {
      iHeight++;
      bool bSumOK;
      int iSum = 0;

      if (a_rltoDtl.size() > 0)
      {
        iSum = a_rltoDtl.back().m_iArea;
        a_rltoDtl.pop_back();

        if (a_rltoDtl.size() == 0)
          bSumOK = false;
        else
          bSumOK = true;

        for (auto itltoSum = a_rltoSum.begin(); itltoSum != a_rltoSum.end(); )
        {
          if (itltoSum->m_bSumOK  == true   &&
              itltoSum->m_iHeight < iHeight)
          {
            iSum += itltoSum->m_iArea;
            itltoSum = a_rltoSum.erase(itltoSum);
            continue;
          }
          itltoSum++;
        }

        StSum oSum(bSumOK, iHeight, iSum);
        a_rltoSum.push_back(oSum); 
      }
      else
        for (auto itltoSum = a_rltoSum.begin(); itltoSum != a_rltoSum.end(); ++itltoSum)
          itltoSum->m_bSumOK = false;
    }
  }
}

void  fnCrossSectAreaGet(const list<StSum> &a_cnrltoSum)
{
  int iArea = 0;
  for (auto itltoSum = a_cnrltoSum.begin(); itltoSum != a_cnrltoSum.end(); ++itltoSum)
    iArea += itltoSum->m_iArea;

  cout << iArea << endl;
  cout << a_cnrltoSum.size() ;
  if (a_cnrltoSum.size() > 0)
  {
    cout << " ";
    for (auto itltoSum = a_cnrltoSum.begin(); itltoSum != a_cnrltoSum.end(); ++itltoSum)
    {
      if (itltoSum != a_cnrltoSum.begin()) cout << " ";
      cout << itltoSum->m_iArea;
    }
  }
  cout << endl;
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  list<StDtl> ltoDtl;
  list<StSum> ltoSum;

  fnCrossSectAreaSet(ltoDtl, ltoSum);
  fnCrossSectAreaGet(ltoSum);

  return 0;
}