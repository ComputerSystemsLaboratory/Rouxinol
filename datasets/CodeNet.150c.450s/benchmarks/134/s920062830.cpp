#include <iostream>
#include <vector>
using namespace  std;

const int END = -1;
struct StNod
{
  int m_nParnt;
  int m_nLeft;
  int m_nRigt;

  StNod() :
    m_nParnt(END), m_nLeft(END), m_nRigt(END)
  { }
};

void fnInput(vector<StNod> &rvoNod)
{
  StNod oNod;
  int nMaxSiz;

  cin >> nMaxSiz;
  rvoNod.resize(nMaxSiz, oNod);

  for (int i = 0; i < nMaxSiz; i++)
  {
    int nParnt, nLeft, nRigt;
    cin >> nParnt >> nLeft >> nRigt;

    rvoNod[nParnt].m_nLeft = nLeft;
    rvoNod[nParnt].m_nRigt = nRigt;
    if (nLeft != END)  rvoNod[nLeft].m_nParnt = nParnt;
    if (nRigt != END)  rvoNod[nRigt].m_nParnt = nParnt;
  }
}

void fnPreOrder(const vector<StNod> &cnrvoNod, int nx)
{
  if (nx == END)  return;

  cout << " " << nx;
  fnPreOrder(cnrvoNod, cnrvoNod[nx].m_nLeft);
  fnPreOrder(cnrvoNod, cnrvoNod[nx].m_nRigt);
}

void fnInOrder(const vector<StNod> &cnrvoNod, int nx)
{
  if (nx == END)  return;

  fnInOrder(cnrvoNod, cnrvoNod[nx].m_nLeft);
  cout << " " << nx;
  fnInOrder(cnrvoNod, cnrvoNod[nx].m_nRigt);
}

void fnPostOrder(const vector<StNod> &cnrvoNod, int nx)
{
  if (nx == END)  return;

  fnPostOrder(cnrvoNod, cnrvoNod[nx].m_nLeft);
  fnPostOrder(cnrvoNod, cnrvoNod[nx].m_nRigt);
  cout << " " << nx;
}

void fnTreeWalk(const vector<StNod> &cnrvoNod)
{
  int nx = 0;
  while (cnrvoNod[nx].m_nParnt != END)
    nx = cnrvoNod[nx].m_nParnt;

  cout << "Preorder" << endl;
  fnPreOrder(cnrvoNod, nx);
  cout << endl;

  cout << "Inorder" << endl;
  fnInOrder(cnrvoNod, nx);
  cout << endl;

  cout << "Postorder" << endl;
  fnPostOrder(cnrvoNod, nx);
  cout << endl;
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  vector<StNod> voNod;

  fnInput(voNod);
  fnTreeWalk(voNod);
  return 0;
}