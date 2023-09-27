#include <bits/stdc++.h>
using namespace std;

#define MAX 10000
#define NIL -1

struct Node{
  int p;
  int left;
  int right;
};

Node tree[MAX];

//int num;
void preParse(int);
void inParse(int);
void postParse(int);

int main(){
  int num;
  int i, v ,left, right, root;
  cin >> num;
  for(i = 0; i < num; i++){
    tree[i].p = NIL;
  }
  for(i = 0; i < num; i++){
    cin >> v >> left >> right;
    tree[v].left = left;
    tree[v].right = right;
    if(left != NIL){
      tree[left].p = v;
    }
    if(right != NIL){
      tree[right].p = v;
    }
  }

  for(i = 0; i < num; i++){
    if(tree[i].p == NIL){
      root = i;
    }
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


void preParse(int u){
  if(u == NIL){
    return;
  }
  cout << " "<< u;
  preParse(tree[u].left);
  preParse(tree[u].right);
}

void inParse(int u){
  if(u == NIL ){
    return;
  }
  inParse(tree[u].left);
  cout << " " << u;
  inParse(tree[u].right);
}

void postParse(int u){
  if( u ==NIL ){
    return;
  }
  postParse(tree[u].left);
  postParse(tree[u].right);
  cout << " " << u;
}