#include <iostream>
#include <vector>
using namespace  std;
const int NIL = -1;

void fnMaxHeapifyUp(vector<int>& rvnPrtyHeap, int nx)
{
  int nParnt = nx / 2;
  int nLrge = nx;

  if (nParnt > 0  &&
      rvnPrtyHeap[nParnt] < rvnPrtyHeap[nLrge])
  {
    swap(rvnPrtyHeap[nParnt], rvnPrtyHeap[nLrge]);
    fnMaxHeapifyUp(rvnPrtyHeap, nParnt);
  }
}

void fnMaxHeapifyDown(vector<int>& rvnPrtyHeap, int nx)
{
  int nLeft = nx * 2;
  int nRigt = nLeft + 1;
  int nLrge = nx;

  if (nLeft < rvnPrtyHeap.size()  &&
      rvnPrtyHeap[nLrge] < rvnPrtyHeap[nLeft])  
    nLrge = nLeft;
  if (nRigt < rvnPrtyHeap.size()  &&
      rvnPrtyHeap[nLrge] < rvnPrtyHeap[nRigt])
    nLrge = nRigt;

  swap(rvnPrtyHeap[nx], rvnPrtyHeap[nLrge]);
  if (nx != nLrge)
    fnMaxHeapifyDown(rvnPrtyHeap, nLrge);
}

void fnPriorityQueue(vector<int>& rvnPrtyHeap)
{
  rvnPrtyHeap.push_back(NIL);
  string sCmd;
  while (cin >> sCmd && sCmd != "end")
  {
    if (sCmd[0] == 'i')
    {
      int nNo;
      cin >> nNo;
      rvnPrtyHeap.push_back(nNo);
      int nx = rvnPrtyHeap.size() - 1;
      fnMaxHeapifyUp(rvnPrtyHeap, nx);
    }
    else if (sCmd[0] == 'e')
    {
      cout << rvnPrtyHeap[1] << endl;
      rvnPrtyHeap[1] = NIL;
      fnMaxHeapifyDown(rvnPrtyHeap, 1);
    }
    else;
  }
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  vector<int> vnPrtyHeap; 

  fnPriorityQueue(vnPrtyHeap);
  return 0;
}