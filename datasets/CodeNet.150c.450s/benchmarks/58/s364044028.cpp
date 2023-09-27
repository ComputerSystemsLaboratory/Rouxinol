#include <iostream>
#include <stack>
#include <string>
using namespace  std;

int main()
{
  stack<int> stciCalc;
  string sCalc;
  
  while (cin >> sCalc)
  {
    if (sCalc == "+" || sCalc == "-" || sCalc == "*")
    {
      int iNum1 = stciCalc.top(); stciCalc.pop();
      int iNum2 = stciCalc.top(); stciCalc.pop();
      int iReslt;
      if      (sCalc == "+")
        iReslt = iNum2 + iNum1;
      else if (sCalc == "-")
        iReslt = iNum2 - iNum1;
      else if (sCalc == "*")
        iReslt = iNum2 * iNum1;
      else;
      
      stciCalc.push(iReslt);
    }
    else
    {
      int iNum = stoi(sCalc);
      stciCalc.push(iNum);
    }
  }

  cout << stciCalc.top() << endl;
  stciCalc.pop();

  return 0;
}