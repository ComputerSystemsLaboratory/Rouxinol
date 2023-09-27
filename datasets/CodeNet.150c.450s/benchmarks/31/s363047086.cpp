#include <iostream>
#include <vector>
using namespace  std;

void fnMaximumProfit(const vector<int> &a_cnrviValue, int &a_riMinval, int &a_riMaxProfit)
{
  for (int i = 1; i < a_cnrviValue.size(); i++)
  {
    a_riMinval = min(a_riMinval, a_cnrviValue[i - 1]);
    int iMaxProfit = a_cnrviValue[i] - a_riMinval; 
    a_riMaxProfit = max(a_riMaxProfit, iMaxProfit);
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