#include <iostream>
#include <stack>
#include <string>
using namespace  std;

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  stack<int> sknCal;
  string sCal;
  
  while (cin >> sCal)
  {
    if (sCal == "+" || sCal == "-" || sCal == "*")
    {
      int nNum1 = sknCal.top(); sknCal.pop();
      int nNum2 = sknCal.top(); sknCal.pop();
      int nRes;
      if      (sCal == "+")
        nRes = nNum2 + nNum1;
      else if (sCal == "-")
        nRes = nNum2 - nNum1;
      else if (sCal == "*")
        nRes = nNum2 * nNum1;
      else;
      
      sknCal.push(nRes);
    }
    else
    {
      int nNum = stoi(sCal);
      sknCal.push(nNum);
    }
  }

  cout << sknCal.top() << endl;
  sknCal.pop();

  return 0;
}