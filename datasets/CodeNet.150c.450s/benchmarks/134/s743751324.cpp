#include <cstdio>
#include <iostream>

using namespace std;

#define MAX 25
#define NIL -1
struct Node{
  int parent,left,right;
};

struct Node T[MAX];

void preParse(int u){
  if(u==NIL) return;
  cout << " " << u;
  preParse(T[u].left);
  preParse(T[u].right);
}

void inParse(int u){
  if(u==NIL) return;
  inParse(T[u].left);
  cout << " " << u;
  inParse(T[u].right);
}

void postParse(int u){
  if(u==NIL) return;
  postParse(T[u].left);
  postParse(T[u].right);
  cout << " " << u;
}

int getRoot(){
  int r=0;
  while(T[r].parent!=NIL){
    r=T[r].parent;
  }
  return r;
}

int main(){
  int n; cin >> n;
  for(int i=0;i<n;i++){
    T[i].left=NIL;
    T[i].right=NIL;
    T[i].parent=NIL;
  }
  for(int i=0;i<n;i++){
    int id,l,r;
    scanf("%d %d %d",&id,&l,&r);
    if(l!=NIL){
      T[id].left=l; T[l].parent=id;
    }
    if(r!=NIL){
      T[id].right=r; T[r].parent=id;
    }
  }
  int root=getRoot();
  cout << "Preorder" << endl;
  preParse(root);
  cout << endl;
  cout << "Inorder" << endl;
  inParse(root);
  cout << endl;
  cout << "Postorder" << endl;
  postParse(root);
  cout << endl;
}