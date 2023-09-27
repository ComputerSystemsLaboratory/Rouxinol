#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, n) for (int i = (int)(n); i >= 0; i--)
#define REP(i, m, n) for (int i = (int)(m); i <= (int)(n); i++)
#define REPR(i, m, n) for (int i = (int)(m); i >= (int)(n); i--)
#define all(v) v.begin(), v.end()
typedef long long ll;

#define MAX 10000
#define NIL -1

struct Node{int p, l, r;};

int n;
struct Node T[MAX];

void preParse(int u){
  if(u == NIL) return;
  printf(" %d", u);
  preParse(T[u].l);
  preParse(T[u].r);
}

void inParse(int u){
  if(u == NIL) return;
  inParse(T[u].l);
  printf(" %d", u);
  inParse(T[u].r);
}

void postParse(int u){
  if(u == NIL) return;
  postParse(T[u].l);
  postParse(T[u].r);
  printf(" %d", u);
}

int main(){
  cin >> n;

  rep(i, n) T[i].p = NIL;
  rep(i, n){
    int u, l, r;
    cin >> u >> l >> r;
    T[u].l = l;
    T[u].r = r;
    if(l != NIL) T[l].p = u;
    if(r != NIL) T[r].p = u;
  }

  int root;
  rep(i, n) if(T[i].p == NIL) root = i;

  printf("Preorder\n");
  preParse(root);
  printf("\n");

  printf("Inorder\n");
  inParse(root);
  printf("\n");

  printf("Postorder\n");
  postParse(root);
  printf("\n");

  return 0;
}

