#include<bits/stdc++.h>
using namespace std;

#define N   10000
#define NIL -1

typedef struct{
  int p, r, l;
} Node;

Node T[N];
int n, D[N], H[N];

void scan(void){
  int i, u, right, left;
  
  cin >> n;
  for(i=0; i<n; i++) T[i].p = T[i].r = T[i].l = NIL;

  for(i=0; i<n; i++){
    cin >> u >> right >> left;
    T[u].r = right; T[u].l = left;
    if(right != NIL) T[right].p = u;
    if(left != NIL) T[left].p = u;
  } 
}

void Depth(int u, int d){
  D[u]=d;
  if(T[u].r != NIL) Depth(T[u].r, d+1);
  if(T[u].l != NIL) Depth(T[u].l, d+1);
}

int Height(int u){
  int h1=0, h2=0;
 
  if(T[u].r != NIL) h1=Height(T[u].r) + 1;
  if(T[u].l != NIL) h2=Height(T[u].l) + 1;
 
  return H[u] = max(h1,h2);
}

void print(int u){
  
  printf("node %d: parent = %d, ", u, T[u].p);

  if(T[u].p == NIL) printf("sibling = %d, ", NIL); 
  else if(T[T[u].p].l != u) printf("sibling = %d, ", T[T[u].p].l);
  else if(T[T[u].p].r != u) printf("sibling = %d, ", T[T[u].p].r);
  else printf("sibiling = %d, ", NIL);

  if(T[u].r != NIL && T[u].l != NIL) printf("degree = 2, ");
  else if(T[u].r == NIL && T[u].l == NIL) printf("degree = 0, ");
  else printf("degree = 1, ");

  printf("depth = %d, height = %d, ", D[u], H[u]);
  
  if(T[u].p == NIL) printf("root\n");
  else if(T[u].r != NIL || T[u].l != NIL) printf("internal node\n");
  else printf("leaf\n");
}

void Preorder(int u){
  if(u == NIL) return;

  printf(" %d",u);
  Preorder(T[u].r);
  Preorder(T[u].l);
}

void Inorder(int u){
  if(u == NIL) return;

  Inorder(T[u].r);
  printf(" %d",u);
  Inorder(T[u].l);
}

void Postorder(int u){
  if(u == NIL) return;

  Postorder(T[u].r);
  Postorder(T[u].l);
  printf(" %d",u);
}

int main(){

  int i, root;

  scan();

  for(i=0; i<n; i++){
    if(T[i].p == NIL){
      root = i;
      break;
    }
  }

  Depth(root, 0);
  Height(root);
  
  // for(i=0; i<n; i++) print(i);

  printf("Preorder\n");
  Preorder(root);
  printf("\n");

  printf("Inorder\n");
  Inorder(root);
  printf("\n");

  printf("Postorder\n");
  Postorder(root);
  printf("\n");
  
  return 0;
}