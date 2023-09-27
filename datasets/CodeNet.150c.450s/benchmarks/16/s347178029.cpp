#include <iostream>
#include <string>
#include <list>
using namespace  std;

struct StDtl
{
  int m_nHigh;
  int m_nArea;

  StDtl(int nHigh) :
    m_nHigh(nHigh), m_nArea(0)
  { }

  ~StDtl() { }
};

struct StSum
{
  bool m_bSumOK;
  int m_nHigh;
  int m_nArea;

  StSum(bool bSumOK, int nHigh, int nArea) :
    m_bSumOK(bSumOK), m_nHigh(nHigh), m_nArea(nArea)
  { }

  ~StSum() { }

};

void fnCroSecSet(list<StDtl>& rltStDtl, list<StSum>& rltStSum)
{
  string sCroSec;
  int nHigh = 0;
 
  cin >> sCroSec;

  for (int i = 0; i < sCroSec.size(); i++)
  {
    for (auto itltStDtl = rltStDtl.begin(); itltStDtl != rltStDtl.end(); ++itltStDtl)
    {
      itltStDtl->m_nArea++;
    }

    if (sCroSec.at(i) == '\\')
    {
      StDtl oDtl(nHigh);
      rltStDtl.push_back(oDtl);
      nHigh--;
    }
    else if (sCroSec.at(i) == '/')
    {
      nHigh++;
      bool bSumOK;
      int iSum = 0;

      if (rltStDtl.size() > 0)
      {
        iSum = rltStDtl.back().m_nArea;
        rltStDtl.pop_back();

        if (rltStDtl.size() == 0)
          bSumOK = false;
        else
          bSumOK = true;

        for (auto itltStSum = rltStSum.begin(); itltStSum != rltStSum.end();    )
        {
          if (itltStSum->m_bSumOK  == true  &&
              itltStSum->m_nHigh < nHigh      )
          {
            iSum += itltStSum->m_nArea;
            itltStSum = rltStSum.erase(itltStSum);
            continue;
          }
          itltStSum++;
        }

        StSum oSum(bSumOK, nHigh, iSum);
        rltStSum.push_back(oSum); 
      }
      else
        for (auto itltStSum = rltStSum.begin(); itltStSum != rltStSum.end(); ++itltStSum)
          itltStSum->m_bSumOK = false;
    }
  }
}

void  fnCrlSecGet(const list<StSum>& cnrltStSum)
{
  int nArea = 0;
  for (auto itltStSum = cnrltStSum.begin(); itltStSum != cnrltStSum.end(); ++itltStSum)
    nArea += itltStSum->m_nArea;

  cout << nArea << endl;
  cout << cnrltStSum.size();
  if (cnrltStSum.size() > 0)
  {
    cout << " ";
    for (auto itltStSum = cnrltStSum.begin(); itltStSum != cnrltStSum.end(); ++itltStSum)
    {
      if (itltStSum != cnrltStSum.begin()) cout << " ";
      cout << itltStSum->m_nArea;
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

  fnCroSecSet(ltStDtl, ltStSum);
  fnCrlSecGet(ltStSum);

  return 0;
}