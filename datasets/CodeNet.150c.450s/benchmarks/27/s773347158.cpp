#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   for(int i=0;i<(n);++i)
#define SORT(c)    sort((c).begin(),(c).end())
#define CLR(a)     memset((&a), 0 ,sizeof(a))//clear memory
#define dump(x)    cerr << #x << " = " << (x) << endl;//debug
#define debug(x)   cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
#define EPS        1e-10//sample:if((double)>=(double)+EPS)
//cin,cout release
//std::cin.tie(0);
//ios::sync_with_stdio(false);

using namespace std;

struct node {
  int key;
  node *parent,*right, *left;
};
typedef node* nodep;
nodep root,NIL;
void insert(int key){
  nodep y=NIL,x=root,z=(nodep)malloc(sizeof(node));
  z->key=key;
  z->left=NIL;
  z->right=NIL;
  while(x!=NIL){
    y=x;
    if(z->key<x->key)x=x->left;
    else x=x->right;
  }
  z->parent=y;
  if(y==NIL)root=z;
  else{
    if(z->key<y->key)y->left=z;
    else y->right=z;
    }
}
void inorder(nodep u){
  if(u==NIL)return;
  inorder(u->left);
  cout<<" "<<u->key;
  inorder(u->right);
}
void preorder(nodep u){
  if(u==NIL)return;
  cout<<" "<<u->key;
  preorder(u->left);
  preorder(u->right);
}
int main(){
  string buf;
  int a,n;
  cin>>n;
  rep(i,n){
    cin>>buf;
    if(buf[0]=='i'){
      cin>>a;
      insert(a);
    }
    else{
      inorder(root);
      cout<<endl;
      preorder(root);
      cout<<endl;
    }
  }


  return 0;
}
