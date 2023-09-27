#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <string>
#include <cstring>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

// ---------------------
// repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)

// debug
#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

// ---------------------
#define INF 922337203685477580
typedef long long ll;

#define NIL -1

typedef struct {
  int parent, left, right;
} Node;
Node T[100];

void preorder(int key) {
  if (key == NIL) return;

  cout << " " << key;
  preorder(T[key].left);
  preorder(T[key].right);
}
void inorder(int key) {
  if (key == NIL) return;

  inorder(T[key].left);
  cout << " " << key;
  inorder(T[key].right);
}
void postorder(int key) {
  if (key == NIL) return;

  postorder(T[key].left);
  postorder(T[key].right);
  cout << " " << key;
}

int main() {
  int n;
  cin >> n;
  // Node T[n + 10];

  REP(i, n + 10) {
    T[i].parent = NIL;
    T[i].left = NIL;
    T[i].right = NIL;
  }

  REP(i, n) {
    int key, left, right;
    cin >> key >> left >> right;

    T[key].left = left;
    T[key].right= right;
    if (left != NIL) T[left].parent = key;
    if (right != NIL) T[right].parent = key;
  }

  // calc depth
  int root = NIL;
  REP(i, n) {
    if (T[i].parent == NIL) {
      root = i;
      break;
    }
  }

  cout << "Preorder" << endl;
  preorder(root);
  cout << endl;

  cout << "Inorder" << endl;
  inorder(root);
  cout << endl;

  cout << "Postorder" << endl;
  postorder(root);
  cout << endl;


  return 0;
}