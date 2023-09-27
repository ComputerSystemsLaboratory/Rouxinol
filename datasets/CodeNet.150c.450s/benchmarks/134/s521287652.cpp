#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#define _USE_MATH_DEFINES
#include <cmath>

#define rep(i, n)     for (int (i) = 0; (i) < (n); (i)++)
#define rep1(i, n)    for (int i = 1; i <= (int)(n); i++)

using namespace std;
typedef long long ll;

const int MAXN = 25;
const int NIL  = -1;

struct Node {
   int p, l, r;
};

Node T[MAXN];
int  D[MAXN], H[MAXN];

void preorder(int u) {
   cout << " " << u;
   if (T[u].l != NIL) preorder(T[u].l);
   if (T[u].r != NIL) preorder(T[u].r);
}

void inorder(int u) {
   if (T[u].l != NIL) inorder(T[u].l);
   cout << " " << u;
   if (T[u].r != NIL) inorder(T[u].r);
}

void postorder(int u) {
   if (T[u].l != NIL) postorder(T[u].l);
   if (T[u].r != NIL) postorder(T[u].r);
   cout << " " << u;
}

int main() {
   int id, l, r, root, n;

   cin >> n;
   rep(i, n) T[i].p = T[i].r = T[i].l = NIL;
   rep(i, n) {
      cin >> id >> l >> r;
      T[id].l = l;
      T[id].r = r;
      T[l].p  = T[r].p = id;
   }
   rep(i, n) {
      if (T[i].p == NIL) root = i;
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
   return(0);
}

