#include <iostream>
#define MAX 25
#define NIL -1

using namespace std;

struct Node{
  int parent,left,right;
};

Node nodes[25];

void pre(int id){
  printf(" %d",id);
  if(nodes[id].left!=NIL) pre(nodes[id].left);
  if(nodes[id].right!=NIL) pre(nodes[id].right);
}

void ino(int id){
  if(nodes[id].left!=NIL) ino(nodes[id].left);
  printf(" %d",id);
  if(nodes[id].right!=NIL) ino(nodes[id].right);
}

void pos(int id){
  if(nodes[id].left!=NIL) pos(nodes[id].left);
  if(nodes[id].right!=NIL) pos(nodes[id].right);
  printf(" %d",id);
}

int main(){
  int n;cin>>n;

  for(int i=0;i<n;i++){
    nodes[i].parent = nodes[i].left = nodes[i].right = NIL;
  }

  for(int i=0;i<n;i++){
    int id,l,r;
    cin>>id>>l>>r;
    nodes[id].left = l;
    nodes[id].right = r;
    if(l!=-1) nodes[l].parent = id;
    if(r!=-1) nodes[r].parent = id;
  }

  int root;
  for(int i=0;i<n;i++){
    if(nodes[i].parent==NIL){root=i;break;}
  }
  printf("Preorder\n");
  pre(root);
  printf("\n");

  printf("Inorder\n");
  ino(root);
  printf("\n");

  printf("Postorder\n");
  pos(root);
  printf("\n");

}