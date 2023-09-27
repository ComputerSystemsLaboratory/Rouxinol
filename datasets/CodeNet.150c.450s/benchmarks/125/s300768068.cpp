#include <iostream>
#include <vector>
using namespace  std;

struct StSeq
{
  int m_nBgn;
  int m_nEnd;

  StSeq() : m_nBgn(0), m_nEnd(0)
  { }
};

void fnInput(vector<vector<int>>& rvvnAdjcy, vector<StSeq>& rvoDFSrch)
{
  int nMaxSiz;
  cin >> nMaxSiz;

  rvvnAdjcy.resize(nMaxSiz + 1, vector<int>(nMaxSiz + 1, 0));
  for (int i = 0; i < nMaxSiz; ++i)
  {
    int nx, nSecSiz;
    cin >> nx >> nSecSiz;
    for (int j = 0; j < nSecSiz; ++j)
    {
      int ny;
      cin >> ny;
      rvvnAdjcy[nx][ny] = 1;
    }
  }
  StSeq oSeq;
  rvoDFSrch.resize(nMaxSiz + 1, oSeq);
}

void fnDepthFirstSearch(const vector<vector<int>>& cnrvvnAdjcy, vector<StSeq>& rvoDFSrch, int nx)
{
  static int stnCnt = 0;

  if (rvoDFSrch[nx].m_nBgn)  return;
  rvoDFSrch[nx].m_nBgn = ++stnCnt;

  for (int ny = 1; ny < cnrvvnAdjcy.size(); ++ny)
    if (cnrvvnAdjcy[nx][ny] == 1  &&
        nx != ny               )
      fnDepthFirstSearch(cnrvvnAdjcy, rvoDFSrch, ny);

  rvoDFSrch[nx].m_nEnd = ++stnCnt;
}

void fnResult(const vector<StSeq>& cnrvoDFSrch)
{
  for (int i = 1; i < cnrvoDFSrch.size(); ++i)
    cout << i <<  " " << cnrvoDFSrch[i].m_nBgn << " " << cnrvoDFSrch[i].m_nEnd << endl;
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  vector<vector<int>> vvnAdjcy;
  vector<StSeq> voDFSrch;

  fnInput(vvnAdjcy, voDFSrch);
  for (int nx = 1; nx < voDFSrch.size(); ++nx)
    fnDepthFirstSearch(vvnAdjcy, voDFSrch, nx);
  fnResult(voDFSrch);

  return 0;
}