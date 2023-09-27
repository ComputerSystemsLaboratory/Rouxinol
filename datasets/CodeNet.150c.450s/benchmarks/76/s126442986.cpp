#include<bits/stdc++.h>
using namespace std;
struct Node{
  int key;
  Node *right,*left,*parent;
};
  Node *root=NULL,*NIL=NULL;//番兵（何もない）

Node *find(Node*u,int k){
  while(u!=NIL && u->key!=k){
    if(k<u->key){
      u=u->left;
    }else{
      u=u->right;
    }
  }
  return (u);
}

void insert(int k){
  Node *x_parent=NIL;//xの親
  Node *x=root;//挿入する場所・・・rootから始まる
  Node *node=NIL;//新たに挿入するノード
  node = (Node*)malloc(sizeof(Node));// 
  node->key=k;//    新たに
  node->right=NIL;//　　挿入するノードの
  node->left=NIL;//　　　　要素をセットする
  
  //挿入する位置を決める。
  while(x!=NIL){
    x_parent=x;
    if(node->key<x->key){//親より大きい
      x=x->left;//xを左に
    }else{//小さい
      x=x->right;//xを右に
    }
  }
  node->parent=x_parent;
  if(x_parent==NIL){
    root=node;//木が空の場合
  }else{
    if(node->key < x_parent->key){//親より大きい
      x_parent->left=node;//左にセット
    }else {//小さい
      x_parent->right=node;//右にセット
    }
  }
  return ;
}

void preorder(Node *u){
  if(u==NIL) return ;
  printf(" %d",u->key);
  preorder(u->left);
  preorder(u->right);
}

void inorder(Node *u){
  if(u==NIL) return;
  inorder(u->left);
  printf(" %d",u->key);
  inorder(u->right);
}

int main(){
  int n,i,x;
  string com;
  
  scanf("%d",&n);

  for(int i=0;i<n;i++){
    cin>>com;
    if(com=="insert"){
      cin>>x;
      insert(x);
    }
    else if(com=="find"){
      cin>>x;
      if(find(root,x)!=NIL) cout<<"yes"<<endl;
      else cout<<"no"<<endl;
    }
    else if(com=="print"){
      inorder(root);
      cout<<endl;
      preorder(root);
      cout<<endl;
    }
  }
  return 0;
}