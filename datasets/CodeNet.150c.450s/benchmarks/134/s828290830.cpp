#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
typedef pair<int, int> P;
typedef pair<ll, ll> Pll;
typedef vector<int> Vi;
typedef tuple<int, int, int> T;
#define FOR(i,s,x) for(int i=s;i<(int)(x);i++)
#define REP(i,x) FOR(i,0,x)
#define ALL(c) c.begin(), c.end()
#define DUMP( x ) cerr << #x << " = " << ( x ) << endl

struct node { int parent, left, right; };

node tree[25];

void preorder(int p) {
  cout << ' ' << p;
  if (tree[p].left != -1) {
    preorder(tree[p].left);
  }
  if (tree[p].right != -1) {
    preorder(tree[p].right);
  }
}

void inorder(int p) {
  if (tree[p].left != -1) {
    inorder(tree[p].left);
  }
  cout << ' ' << p;
  if (tree[p].right != -1) {
    inorder(tree[p].right);
  }
}

void postorder(int p) {
  if (tree[p].left != -1) {
    postorder(tree[p].left);
  }
  if (tree[p].right != -1) {
    postorder(tree[p].right);
  }
  cout << ' ' << p;
}

int main() {
  // use scanf in CodeForces!
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int N, p = -1;
  cin >> N;
  REP(i, N) tree[i].parent = -1;
  REP(i, N) {
    int j, l, r;
    cin >> j >> l >> r;
    tree[l].parent = tree[r].parent = j;
    tree[j].left = l;
    tree[j].right = r;
  }
  REP(i, N) {
    if (tree[i].parent == -1) {
      p = i;
      break;
    }
  }
  cout << "Preorder" << endl;
  preorder(p);
  cout << endl;
  cout << "Inorder" << endl;
  inorder(p);
  cout << endl;
  cout << "Postorder" << endl;
  postorder(p);  
  cout << endl;
  return 0;
}