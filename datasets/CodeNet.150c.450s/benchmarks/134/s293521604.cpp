#include<bits/stdc++.h>
using namespace std;
#define NIL -1
int n;
struct node{int p,l,r;};
node tree[26];

/*先行順巡回*/
void Preorder(int u){
  if(u==NIL) return; //左がないので戻る
  cout<<" "<<u;
  Preorder(tree[u].l);
  Preorder(tree[u].r);   
}

/*中間順巡回*/
void Inorder(int u){
  if(u==NIL) return;
  Inorder(tree[u].l);
  cout<<" "<<u;
  Inorder(tree[u].r);
}

/*後順巡回*/
void Postorder(int u){
  if(u==NIL) return ;
  Postorder(tree[u].l);
  Postorder(tree[u].r);
  cout<<" "<<u;
}
int main(){
  int v,l,r,root;
    cin>>n;
  for(int i=0;i<n;i++){
    tree[i].p=NIL;
  }
  for(int i=0;i<n;i++){
    cin>>v>>l>>r;
    tree[v].l=l;
    tree[v].r=r;
    if(l!=NIL) tree[l].p=v;
    if(r!=NIL) tree[r].p=v;
  }
  for(int i=0;i<n;i++){
    if(tree[i].p==NIL) root = i;
  }
  cout<<"Preorder"<<endl;
  Preorder(root);
  cout<<endl;
  cout<<"Inorder"<<endl;
  Inorder(root);
  cout<<endl;
  cout<<"Postorder"<<endl;
  Postorder(root);
  cout<<endl;
  return 0;
}