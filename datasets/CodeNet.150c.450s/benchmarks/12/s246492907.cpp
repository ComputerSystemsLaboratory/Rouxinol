#include <iostream>
#include <vector>
using namespace  std;

void fnInput(vector<int>& rvnBinHeap)
{
  int nMaxSiz;
  cin >> nMaxSiz;
  rvnBinHeap.resize(nMaxSiz + 1);

  for (int i = 1; i < nMaxSiz + 1; ++i)
    cin >> rvnBinHeap[i];
}

void fnBinaryHeaps(const vector<int>& cnrvnBinHeap)
{
  for (int i = 1; i < cnrvnBinHeap.size(); ++i)
  {
  //if (i != 1)  cout << endl;

    cout << "node " << i << ": key = " << cnrvnBinHeap[i] << ", ";
    int nParnt = i / 2;
    int nLeft = i * 2;
    int nRigt = nLeft + 1;
    if (nParnt >= 1)
      cout << "parent key = " << cnrvnBinHeap[nParnt] << ", ";
    if (nLeft < cnrvnBinHeap.size())
      cout << "left key = " << cnrvnBinHeap[nLeft] << ", ";
    if (nRigt < cnrvnBinHeap.size())
      cout << "right key = " << cnrvnBinHeap[nRigt] << ", ";
    cout << endl;
  }
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  vector<int> vnBinHeap; 

  fnInput(vnBinHeap);
  fnBinaryHeaps(vnBinHeap);
  return 0;
}