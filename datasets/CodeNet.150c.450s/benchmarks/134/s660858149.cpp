#include<bits/stdc++.h>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)
#define MAX 10000
#define NIL -1

using namespace std;

struct Node {int p, l,  r;};
struct Node T[MAX];
int n;

void preParse(int u) {
  if (u == NIL) return;
  cout << ' ' << u;
  preParse(T[u].l);
  preParse(T[u].r);
}

void inParse(int u) {
  if (u == NIL) return;
  inParse(T[u].l);
  cout << ' ' << u;
  inParse(T[u].r);
}

void postParse(int u) {
  if (u == NIL) return;
  postParse(T[u].l);
  postParse(T[u].r);
  cout << ' ' << u;
}

int main() {
  int v, l, r, root;

  cin >> n;
  REP(i, n) T[i].p = NIL;

  REP(i, n) {
    cin >> v >> l >> r;
    T[v].l = l;
    T[v].r = r;
    if (l != NIL) T[l].p = v;
    if (r != NIL) T[r].p = v;
  }

  REP(i, n) {
    if (T[i].p == NIL)
      root = i;
  }

  cout << "Preorder" << endl;
  preParse(root);
  cout << endl;
  cout << "Inorder" << endl;
  inParse(root);
  cout << endl;
  cout << "Postorder" << endl;
  postParse(root);
  cout << endl;

  return 0;
}