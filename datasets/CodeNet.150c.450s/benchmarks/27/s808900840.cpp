#include<bits/stdc++.h>
using namespace std;

#define NIL -1

struct Node{
  int l,r;
};

Node tree[1000000];
int root = NIL;

void insert(int k){
  int x, y;
  x = root;
  y = NIL;
  tree[k].r = NIL;
  tree[k].l = NIL;
  while(x != NIL){
    y = x;
    if(k < x){
      x = tree[x].l;
    }else{
      x = tree[x].r;
    }
  }

  if(y == NIL){
    root = k;
  }else if(k < y){
    tree[y].l = k;
  }else{
    tree[y].r = k;
  }
}

void inorder(int k){
  if(k == NIL){
    return;
  }
  inorder(tree[k].l);
  cout << " " << k;
  inorder(tree[k].r);
}

void preorder(int k){
  if(k == NIL){
    return;
  }
  cout << " " << k;
  preorder(tree[k].l);
  preorder(tree[k].r);
}

int main(){
  int n,k;
  string s;

  cin >> n;

  for(int i = 0 ; i < n ; i++){
    cin >> s;
    if(s == "insert"){
      cin >> k;
      insert(k);
    }else if(s == "print"){
      inorder(root);
      cout << endl;
      preorder(root);
      cout << endl;
    }
  }
  return 0;
}