#include <iostream>
#include <vector>
using namespace  std;

void fnInput(vector<int>& rvnMaxHeap)
{
  int nMaxSiz;
  cin >> nMaxSiz;
  rvnMaxHeap.resize(nMaxSiz + 1);

  for (int i = 1; i < nMaxSiz + 1; ++i)
    cin >> rvnMaxHeap[i];
}

void fnMaxHeapify(vector<int>& rvnMaxHeap, int nx)
{
  int nLeft = nx * 2;
  int nRigt = nLeft + 1;
  int nLarg = nx;

  if (nLeft < rvnMaxHeap.size()  &&
      rvnMaxHeap[nx] < rvnMaxHeap[nLeft])  
    nLarg = nLeft;
  if (nRigt < rvnMaxHeap.size()  &&
      rvnMaxHeap[nLarg] < rvnMaxHeap[nRigt])
    nLarg = nRigt;

  swap(rvnMaxHeap[nx], rvnMaxHeap[nLarg]);
  if (nx != nLarg)
    fnMaxHeapify(rvnMaxHeap, nLarg);
}

void fnMaximumHeap(vector<int>& rvnMaxHeap)
{
  for (int i = (rvnMaxHeap.size() - 1) / 2; i > 0; --i)
    fnMaxHeapify(rvnMaxHeap, i);
}

void fnResult(const vector<int>& cnrvnMaxHeap)
{
  for (int i = 1; i < cnrvnMaxHeap.size(); ++i)
    cout << " " << cnrvnMaxHeap[i];

  cout << endl;
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  vector<int> vnMaxHeap; 

  fnInput(vnMaxHeap);
  fnMaximumHeap(vnMaxHeap);
  fnResult(vnMaxHeap);
  return 0;
}