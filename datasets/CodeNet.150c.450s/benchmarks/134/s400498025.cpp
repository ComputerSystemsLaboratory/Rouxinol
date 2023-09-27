#include <cstdio>
#include <iostream>
#define MAX 25
#define NIL -1

struct Node{int parent,left,right;};
Node T[MAX];

void preParse(int u){
  if(u==NIL) return;
  printf(" %d",u);
  preParse(T[u].left);
  preParse(T[u].right);
}

void inParse(int u){
  if(u==NIL) return;
  inParse(T[u].left);
  printf(" %d",u);
  inParse(T[u].right);
}

void postParse(int u){
  if(u==NIL) return;
  postParse(T[u].left);
  postParse(T[u].right);
  printf(" %d",u);
}

int main(){
  int n,a,b,c;
  scanf("%d",&n);
  for(int i=0;i<n;i++) T[i].parent=NIL;
  for(int i=0;i<n;i++){
    scanf("%d %d %d",&a,&b,&c);
    T[a].left=b;
    T[a].right=c;
    if(b!=NIL) T[b].parent=a;
    if(c!=NIL) T[c].parent=a;
  }
  int root=NIL;
  for(int i=0;i<n;i++){
    if(T[i].parent==NIL){
      root=i;
      break;
    }
  }
  int leftest=root;
  while(T[leftest].left!=NIL) leftest=T[leftest].left;

  std::cout << "Preorder\n";
  preParse(root);
  std::cout << std::endl;
  std::cout << "Inorder\n";
  inParse(root);
  std::cout << std::endl;
  std::cout << "Postorder\n";
  postParse(root);
  std::cout << std::endl;
}