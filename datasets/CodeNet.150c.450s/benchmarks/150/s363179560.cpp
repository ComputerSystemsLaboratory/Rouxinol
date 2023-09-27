#include <iostream>
#include <vector>
#include <climits>
using namespace  std;

void fnInput(int &rnMaxSiz, vector<int> &rvnBSort, int &rnMaxElm)
{
  rnMaxElm = 0;
  cin >> rnMaxSiz;

  rvnBSort.resize(rnMaxSiz);
  for (int i = 0; i < rnMaxSiz; i++)
  {
    cin >> rvnBSort[i];
    rnMaxElm = max(rnMaxElm, rvnBSort[i]);
  }
}

void fnCntSort(const vector<int> &cnrvnBSort,vector<int> &rvnASort, int nMaxElm)
{
  vector<int> vnCnt;

  vnCnt.resize(nMaxElm);

  for (int i = 0; i < cnrvnBSort.size(); i++)
    vnCnt[cnrvnBSort[i]]++;

  for (int i = 1; i <= nMaxElm; i++)
    vnCnt[i] += vnCnt[i - 1];

  for (int i = cnrvnBSort.size() - 1; i >= 0; i--)
  {
    rvnASort[vnCnt[cnrvnBSort[i]] - 1] = cnrvnBSort[i];
    vnCnt[cnrvnBSort[i]]--;
  }
}

void fnResult(const vector<int> &cnrvnASort)
{
  for (int i = 0; i < cnrvnASort.size(); i++)
  {
    if (i)  cout << " ";
    cout << cnrvnASort[i];
  }
  cout << endl;
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  int nMaxSiz, nMaxElm;
  vector<int> vnBSort, vnASort;

  fnInput(nMaxSiz, vnBSort, nMaxElm);
  vnASort.resize(nMaxSiz);

  fnCntSort(vnBSort, vnASort, nMaxElm);

  fnResult(vnASort);

  return 0;
}