#include <iostream>
#include <vector>
#include <string>
using namespace  std;

void fnInput(vector<string> &rvsSortBbl, vector<string> &rvsSortSel)
{
  int nMaxSiz;
  cin >> nMaxSiz;
  
  rvsSortBbl.resize(nMaxSiz);
  rvsSortSel.resize(nMaxSiz);
  for (int i = 0; i < nMaxSiz; i++)
  {
    cin >> rvsSortBbl[i];
    rvsSortSel[i] = rvsSortBbl[i];
  }
}

void fnBubbleSort(vector<string> &rvsSortBbl)
{
  int nSorting = 0;
  bool bSorting = true;

  while (bSorting)
  {
    bSorting = false;
    for (int j = rvsSortBbl.size() - 1; j > nSorting; j--)
    {
      if (rvsSortBbl[j].at(1) < rvsSortBbl[j - 1].at(1))
      {
        swap(rvsSortBbl[j], rvsSortBbl[j - 1]);
        bSorting = true;
      }
    }
    nSorting++;
  }
}

void fnOutputBbl(const vector<string> &cnrvsSortBbl)
{
  for (int i = 0; i < cnrvsSortBbl.size(); i++)
  {
    if (i) cout << " ";
    cout << cnrvsSortBbl[i];
  }
  cout << endl;
  cout << "Stable" << endl;
}

void fnSelectionSort(vector<string> &rvsSortSel)
{
  for (int nSorting = 0; nSorting < rvsSortSel.size() - 1; nSorting++)
  {
    int nMin = nSorting;
    bool bSorting = false;
    for (int j = nSorting + 1; j < rvsSortSel.size(); j++)
    {
      if (rvsSortSel[j].at(1) < rvsSortSel[nMin].at(1))
      {
        nMin = j;
        bSorting = true;
      }
    }
    if (bSorting == true)  swap(rvsSortSel[nSorting], rvsSortSel[nMin]);
  }
}

void fnOutputSel(const vector<string> &cnrvsSortSel, const vector<string> &cnrvsSortBbl)
{
  string sSortEnd = "Stable";

  for (int i = 0; i < cnrvsSortSel.size(); i++)
  {
    if (i) cout << " ";
    cout << cnrvsSortSel[i];
    
    if (cnrvsSortSel[i] != cnrvsSortBbl[i]) sSortEnd = "Not stable";
  }
  cout << endl;
  cout << sSortEnd << endl;
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  
  vector<string> vsSortBbl, vsSortSel;

  fnInput(vsSortBbl, vsSortSel);
  fnBubbleSort(vsSortBbl);
  fnOutputBbl(vsSortBbl); 

  fnSelectionSort(vsSortSel);
  fnOutputSel(vsSortSel, vsSortBbl);

  return 0;
}