#include <iostream>
#include <vector>
using namespace  std;

void fnInput(vector<int>& rvnFibDP)
{
  int nMaxSiz;
  cin >> nMaxSiz;
  rvnFibDP.resize(nMaxSiz + 1, 0);

  if (nMaxSiz >= 1)  
    rvnFibDP[0] = rvnFibDP[1] = 1;
  else
    rvnFibDP[0] = 1;
}

int fnFibNumber(vector<int>& rvnFibDP, int nNo)
{
  if (rvnFibDP[nNo])  return rvnFibDP[nNo];

  return rvnFibDP[nNo] = 
         fnFibNumber(rvnFibDP, nNo - 1) + fnFibNumber(rvnFibDP, nNo - 2);
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  vector<int> vnFibDP; 

  fnInput(vnFibDP);
  cout << fnFibNumber(vnFibDP, vnFibDP.size() - 1) << endl;
  return 0;
}