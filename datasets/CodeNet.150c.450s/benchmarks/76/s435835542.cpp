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

struct Node {
   int   key;
   Node *l, *r, *p;
};

Node *root, *NIL;

void insert(int k) {
   Node *y = NIL;
   Node *x = root;
   Node *z;

   z = (Node *)malloc(sizeof(Node));
   z->key = k;
   z->l = NIL;
   z->r = NIL;

   while (x != NIL) {
      y = x;
      if (z->key < x->key) x = x->l;
      else x = x->r;
   }
   z->p = y;
   if (y == NIL)
      root = z;
   else{
      if (z->key < y->key)
         y->l = z;
      else
         y->r = z;
   }
}

bool find(int k) {
   Node *x = root;

   while (x != NIL) {
      if (k < x->key)
         x = x->l;
      else if (x->key < k)
         x = x->r;
      else
         return(true);
   }
   return(false);
}

void inorder(Node *u) {
   if (u == NIL) return;

   inorder(u->l);
   printf(" %d", u->key);
   inorder(u->r);
}

void preorder(Node *u) {
   if (u == NIL) return;

   printf(" %d", u->key);
   preorder(u->l);
   preorder(u->r);
}

int main() {
   int  n, x;
   char s[10];

   cin >> n;
   rep(i, n) {
      scanf("%s", s);
      if (s[0] == 'i') {
         scanf("%d", &x);
         insert(x);
      }
      else if (s[0] == 'f') {
         scanf("%d", &x);
         cout << (find(x) ? "yes" : "no") << endl;
      }
      else{
         inorder(root);
         printf("\n");
         preorder(root);
         printf("\n");
      }
   }
   return(0);
}

