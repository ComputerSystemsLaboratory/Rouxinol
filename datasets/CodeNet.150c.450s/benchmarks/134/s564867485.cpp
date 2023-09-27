/*
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_7_C&lang=jp
*/
#include<iostream>
#include<string>
using namespace std;
#define NIL -1
#define REP(l,r) for(int i=(l);i<(r);i++)
#define P(r) cout<<" "<<r

struct Node{int p,l,r;};
Node Tree[25];
int n;

void make_tree(){
  int left,right,k;
  REP(0,n){
    cin>>k>>left>>right;
    Tree[k].l=left; Tree[k].r=right;//子設定
    if(left!=NIL)Tree[left].p=k;
    if(right!=NIL)Tree[right].p=k; //親設定
  }
}
//Perorder
void Pre(int r){
  if(r!=NIL){
    P(r);
    Pre(Tree[r].l);
    Pre(Tree[r].r);
  }
}
//Inoder
void In(int r){
  int L=Tree[r].l;
  int R=Tree[r].r;
  if(r==NIL)return;
  In(L);
  P(r);
  In(R);
}
//Postorder
void Post(int r){
  int L=Tree[r].l;
  int R=Tree[r].r;
  if(r==NIL)return;
  Post(L);
  Post(R);
  P(r);
}
int main(){
  int r;
  cin>>n;
  //初期化
  REP(0,25) Tree[i].p=Tree[i].l=Tree[i].r=NIL;
  make_tree();
  REP(0,n){
    if(Tree[i].p==-1) r=i;
  }
  cout<<"Preorder"<<"\n";
  Pre(r); cout<<"\n";
  cout<<"Inorder"<<"\n";
  In(r); cout<<"\n";
  cout<<"Postorder"<<"\n";
  Post(r); cout<<"\n";
}

