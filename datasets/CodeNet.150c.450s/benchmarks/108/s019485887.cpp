#include <iostream>
#include <vector>
#include <queue>
using namespace  std;

const int nIMPOS = -1;
struct StDir
{
  int m_nDir;
  int m_nDone;

  StDir(int nDir) : m_nDir(nDir), m_nDone(0)
  { }
};

void fnInput(vector<vector<StDir>>& rvvoAdjcy, vector<int>& rvnDst)
{
  int nxSiz;
  cin >> nxSiz;

  StDir oDir(0);
  rvvoAdjcy.resize(nxSiz + 1, vector<StDir>(nxSiz + 1, oDir));
  for (int i = 0; i < nxSiz; ++i)
  {
    int nx, nySiz;
    cin >> nx >> nySiz;
    for (int j = 0; j < nySiz; ++j)
    {
      int ny;
      cin >> ny;
      rvvoAdjcy[nx][ny].m_nDir = 1;
    }
  }
  rvnDst.resize(nxSiz + 1, nIMPOS);
}

void fnBreadthFirstSearch(vector<vector<StDir>>& rvvoAdjcy, 
                          queue<int>& rqnBFSrch, vector<int>& rvnDst)
{
  while (rqnBFSrch.size())
  {
    int nx = rqnBFSrch.front(); rqnBFSrch.pop();
    if (rvnDst[nx] == nIMPOS)  continue;

    for (int ny = 1; ny < rvvoAdjcy[nx].size(); ++ny)
      if (rvvoAdjcy[nx][ny].m_nDir == 1   &&
          rvvoAdjcy[nx][ny].m_nDone == 0)
      {
        rvvoAdjcy[nx][ny].m_nDone = 1;
        int nDst = rvnDst[nx] + 1;
        if (rvnDst[ny] == nIMPOS)
          rvnDst[ny] = nDst;
        else
          rvnDst[ny] = min(rvnDst[ny], nDst);

        rqnBFSrch.push(ny);
      }
  }
}

void fnResult(const vector<int>& cnrvnDst)
{
  for (int i = 1; i < cnrvnDst.size(); ++i)
    cout << i <<  " " << cnrvnDst[i] << endl;
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  vector<vector<StDir>> vvoAdjcy;
  queue<int>  qnBFSrch;
  vector<int> vnDst;

  fnInput(vvoAdjcy, vnDst);

  vnDst[1] = 0;
  qnBFSrch.push(1);
  fnBreadthFirstSearch(vvoAdjcy, qnBFSrch, vnDst);
  fnResult(vnDst);

  return 0;
}