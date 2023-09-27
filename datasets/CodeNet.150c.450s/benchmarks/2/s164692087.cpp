#include <iostream>
#include <vector>
#include <utility>
using namespace  std;

void fnInput(vector<int> &rvnNum)
{
  int nMaxSiz;
  cin >> nMaxSiz;

  rvnNum.resize(nMaxSiz);
  for (int i = 0; i < nMaxSiz; i++)
    cin >> rvnNum[i];
}

int fnPartition(vector<int> &rvnNum, int nFront, int nBack)
{
  int nMid = nFront;

  for (int i = nFront; i < nBack; i++)
    if (rvnNum[i] <= rvnNum[nBack])
      swap(rvnNum[nMid++], rvnNum[i]);

  swap(rvnNum[nMid], rvnNum[nBack]);
  return nMid;
}

void fnResult(const vector<int> &cnrvnNum, int nMid)
{
  for (int i = 0; i < cnrvnNum.size(); i++)
  {
    if (i)  cout << " ";
    if (i == nMid) cout << "[";
    cout << cnrvnNum[i];
    if (i == nMid) cout << "]";
  }
  cout << endl;
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  vector<int> vnNum;

  fnInput(vnNum);
  int nFront = 0;
  int nBack = vnNum.size() - 1;

  int nMid = fnPartition(vnNum, nFront, nBack);
  fnResult(vnNum, nMid);

  return 0;
}