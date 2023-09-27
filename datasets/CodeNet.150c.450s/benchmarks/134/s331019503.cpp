#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cfloat>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <functional>
#include <sstream>
#include <string>
#include <utility>
#include <map>
#include <memory>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <queue>

using namespace std;

const int nil = -1;

struct Node
{
  int p;
  int lc;
  int rc;
};
  
class TreeWalk
{
public:
  int n;
  Node nds[25];
  int root;
  int solve();
  int preorder( int id );
  int inorder( int id );
  int postorder( int id );
};

int TreeWalk::solve()
{
  cin >> n;

  for ( int i = 0; i < n; ++i )
    {
      nds[i].p = nil;
      nds[i].lc = nil;
      nds[i].rc = nil;
    }

  int id, left, right;
  
  for ( int i = 0; i < n; ++i )
    {
      cin >> id >> left >> right;
      nds[id].lc = left;
      nds[id].rc = right;
      if ( left != nil )
        nds[left].p = id;
      if ( right != nil )
        nds[right].p = id;
    }

  for ( int i = 0; i < n; ++i )
    {
      if ( nds[i].p == nil )
        {
          root = i;
        }
    }
  
  cout << "Preorder" << endl;
  preorder( root );
  cout << endl;
  cout << "Inorder" << endl;
  inorder( root );
  cout << endl;
  cout << "Postorder" << endl;
  postorder( root );
  cout << endl;
  return 0;
}

int TreeWalk::preorder( int id )
{
  if ( id != nil )
    {
      cout << " " << id;

      preorder( nds[id].lc );

      preorder( nds[id].rc );
    }

  return 0;
  
}

int TreeWalk::inorder( int id )
{
  if ( id != nil )
    {
      inorder( nds[id].lc );

      cout << " " << id;

      inorder( nds[id].rc );
    }

  return 0;
}

int TreeWalk::postorder( int id )
{
  if ( id != nil )
    {
      postorder( nds[id].lc );

      postorder( nds[id].rc );

      cout << " " << id;
    }

  return 0;
}

int main()
{

  TreeWalk tw;

  tw.solve();

  return 0;
}