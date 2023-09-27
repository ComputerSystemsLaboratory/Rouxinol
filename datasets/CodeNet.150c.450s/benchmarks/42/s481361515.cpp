#include <iostream>
#include <queue>
#include <string>
using namespace  std;

typedef pair<string, int> PAIR;

void fnInput(int &argiMaxProc, int &argiQuantum, queue<PAIR> &argqProcess)
{
  cin >> argiMaxProc >> argiQuantum;
  
  for (int i = 0; i < argiMaxProc; i++)
  {
    string sProcName;
    int iProcTime;
    cin >> sProcName >> iProcTime;
    argqProcess.push(PAIR(sProcName, iProcTime));
  }
}

void fnSchedule(int &argiMaxProc, int &argiQuantum, queue<PAIR> &argqProcess)
{
  int iTotalTime = 0;
  while (argqProcess.size())
  {
    PAIR pProcess = argqProcess.front(); argqProcess.pop(); 
    if (pProcess.second > argiQuantum)
    {
      pProcess.second -= argiQuantum;
      argqProcess.push(pProcess);
      iTotalTime += argiQuantum;
    }
    else
    {
      iTotalTime += pProcess.second;
      cout << pProcess.first << " " << iTotalTime << endl;
    }
  }
}

int main()
{
  int iMaxProc, iQuantum;
  queue<PAIR> qProcess;
  
  fnInput(iMaxProc, iQuantum, qProcess);
  fnSchedule(iMaxProc, iQuantum, qProcess);

  return 0;
}