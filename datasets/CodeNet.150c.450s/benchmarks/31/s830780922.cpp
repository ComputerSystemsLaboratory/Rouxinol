#include <iostream>
#include <vector>
using namespace  std;

void fnMaximumProfit(const vector<int> &argviValue, int &argiMinval, int &argiMaxProfit)
{
  for (int i = 1; i < argviValue.size(); i++)
  {
    argiMinval = min(argiMinval, argviValue[i - 1]);
    int iMaxProfit = argviValue[i] - argiMinval; 
    argiMaxProfit = max(argiMaxProfit, iMaxProfit);
  }
}

int main()
{
  vector<int> viValue;
  int iMaxSize;
  
  cin >> iMaxSize;
  for (int i = 0; i < iMaxSize; i++)
  {
    int iValue;
    cin >> iValue;
    viValue.push_back(iValue);
  }

  int iMinval = viValue[0];
  int iMaxProfit = -1000000000;
  fnMaximumProfit(viValue, iMinval, iMaxProfit);
  cout << iMaxProfit << endl;

  return 0;
}