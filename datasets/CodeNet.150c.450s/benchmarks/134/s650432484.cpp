#include <iostream>
#include <algorithm>
#include <stdio.h>
#define ll long long
#define MAX 10000
#define NIL -1
using namespace std;

struct Node{int p,r,l;};
Node T[MAX];
int n;

void preOrder(int u){
  if(u == NIL)
    return;
  printf(" %d", u);
  preOrder(T[u].l);
  preOrder(T[u].r);
}

void postOrder(int u){
  if(u == NIL)
    return;
  postOrder(T[u].l);
  postOrder(T[u].r);
  printf(" %d", u);
}

void inOrder(int u){
  if(u == NIL)
    return;
  inOrder(T[u].l);
  printf(" %d", u);
  inOrder(T[u].r);
}

int main(){
  cin >> n;
  for(int i = 0; i < n; i++){
    T[i].p = NIL;
  }
  for(int i = 0; i < n; i++){
    int v, l, r;
    cin >> v >> l >> r;
    T[v].l = l;
    T[v].r = r;
    if(l != NIL)
      T[l].p = v;
    if(r != NIL)
      T[r].p = v;
  }
  int root;
  for(int i = 0; i < n; i++)
    if(T[i].p == NIL)
      root = i;
  printf("Preorder\n");
  preOrder(root);
  printf("\n");
  printf("Inorder\n");
  inOrder(root);
  printf("\n");
  printf("Postorder\n");
  postOrder(root);
  printf("\n");
}