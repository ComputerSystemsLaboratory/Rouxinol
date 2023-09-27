#include <iostream>
#include <queue>
#include <string>
using namespace  std;

typedef pair<string, int> PAIR;

void fnInput(int &rnMaxProc, int &rnQtm, queue<PAIR> &rqPPrc)
{
  cin >> rnMaxProc >> rnQtm;
  
  for (int i = 0; i < rnMaxProc; i++)
  {
    string sPrcNam;
    int nPrcTim;
    cin >> sPrcNam >> nPrcTim;
    rqPPrc.push(PAIR(sPrcNam, nPrcTim));
  }
}

void fnSchedule(int nQtm, queue<PAIR> &rqPPrc)
{
  int nTtlTim = 0;
  while (rqPPrc.size())
  {
    PAIR PProcess = rqPPrc.front(); rqPPrc.pop(); 
    if (PProcess.second > nQtm)
    {
      PProcess.second -= nQtm;
      rqPPrc.push(PProcess);
      nTtlTim += nQtm;
    }
    else
    {
      nTtlTim += PProcess.second;
      cout << PProcess.first << " " << nTtlTim << endl;
    }
  }
}

int main()
{
  int nMaxPrc, nQtm;
  queue<PAIR> qPPrc;
  
  fnInput(nMaxPrc, nQtm, qPPrc);
  fnSchedule(nQtm, qPPrc);

  return 0;
}